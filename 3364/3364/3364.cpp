/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		3364.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-05-12					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int main ( ){

	int n;
	int m;
	int c;
	int row;
	int col;

	cin >> n >> m >> c;

	while ( !( n == 0 && m == 0 && c == 0 ) ){

		row = n >= 8 ? n - 7 : 0;
		col = m >= 8 ? m - 7 : 0;

		if ( ( row & 1 ) && ( col & 1 ) ){
		
			if ( c == 0 ){
			
				cout << ( row * col ) / 2 << endl;
			
			}
			else {
			
				cout << ( row * col ) / 2 + 1 << endl;
			
			}
		
		}
		else {
		
			cout << ( row * col ) / 2 << endl;
		
		}

		cin >> n >> m >> c;
	
	}

	return 0;

}