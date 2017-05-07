/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		2498.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-05-07					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>

int t[ 3 ] = { 9, 3, 7 };

using namespace std;

int main ( ){

	string s;
	int k;
	int i;
	int tri;
	int base;
	int nCase;
	int sum;
	char c;
	int pos;

	cin >> nCase;

	for ( k = 1; k <= nCase; k ++ ){
	
		cout << "Scenario #" << k << ":" << endl;
		cin >> s;

		tri = 0;
		sum = 0;

		for ( i = s.size ( ) - 1; i >= 0; i -- ){
		
			if ( s[ i ] == '?' ){
			
				base = tri;
				pos = i;
			
			}
			else {
			
				sum += ( s[ i ] - '0' ) * t[ tri ];
			
			}
		
			tri ++;
			if ( tri == 3 ){
			
				tri = 0;
			
			}

		}

		for ( i = 0; i <= 9; i ++ ){
		
			if ( ( sum + i * t[ base ] ) % 10 == 0 ){
			
				c = '0' + i;
				break;
			
			}
		
		}

		s[ pos ] = c;

		cout << s << endl << endl;
	
	}

	return 0;

}