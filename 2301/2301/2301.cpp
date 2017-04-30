/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		2301.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-04-14					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int main ( ){

	int a;//sum
	int b;//dif
	int c;
	int d;
	int t;
	int n;
	int i;

	cin >> n;

	for ( i = 1; i <= n; i ++ ){
	
		cin >> a >> b;

		c = ( a + b ) / 2;
		d = a - c;

		if ( d >= 0 && ( c - d == b || d - c == b ) ){
		
			if ( c < d ){
			
				t = c;
				c = d;
				d = t;
			
			}

			cout << c << " " << d << endl;
		
		}
		else {
		
			cout << "impossible" << endl;
		
		}
	
	}

	return 0;

}