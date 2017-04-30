/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		1663.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-04-11					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int main ( ){

	int n;
	int i;
	int x;
	int y;

	cin >> n;

	for ( i = 1; i <= n; i ++ ){
	
		cin >> x >> y;

		if ( x < 0  || y < 0 ){
		
			cout << "No Number" << endl;
			continue;

		}
	
		if ( x == y ){
		
			if ( x & 1 == 1 ){
			
				cout << ( x / 2 ) * 4 + 1 << endl;
			
			}
			else {
			
				cout << ( x / 2 ) * 4 << endl;
			
			}
		
		}
		else if ( y + 2 == x ){
		
			if ( x & 1 == 1 ){
			
				cout << ( x / 2 ) * 4 - 1 << endl;
			
			}
			else {
			
				cout << ( x / 2 ) * 4 - 2 << endl;
			
			}
		
		}
		else {
		
			cout << "No Number" << endl;
		
		}

	}

	return 0;

}