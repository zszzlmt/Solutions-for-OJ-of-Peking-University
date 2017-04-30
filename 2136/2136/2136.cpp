/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		2136.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-04-30					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>

using namespace std;

int main ( ){

	int i;
	int j;
	string s;
	int max;
	int d;
	char c;
	int t[ 26 ] = { 0 };

	max = 0;

	for ( j = 1; j <= 4; j ++ ){
	
		s.clear ( );
		getline ( cin, s );

		for ( i = 0; i < s.size ( ); i ++ ){
		
			if ( s[ i ] >= 'A' && s[ i ] <= 'Z' ){
			
				d = s[ i ] - 'A';
				t[ d ] ++;

				if ( t[ d ] > max ){
				
					max = t[ d ];
				
				}
			
			}
		
		}
	
	}

	for ( j = max; j >= 1; j -- ){
	
		for ( i = 0; i < 26; i ++ ){
		
			if ( t[ i ] >= j ){
			
				cout << '*';
			
			}
			else {
			
				cout << ' ';
			
			}

			if ( i != 25 ){
			
				cout << ' ';
			
			}
		
		}

		cout << endl;
	
	}

	for ( i = 0; i < 26; i ++ ){
	
		c = 'A' + i;
		cout << c;

		if ( i != 25 ){
		
			cout << ' ';
		
		}
	
	}

	cout << endl;

	return 0;

}