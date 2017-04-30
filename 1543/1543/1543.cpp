/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		1543.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-04-29					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<cmath>

using namespace std;

int main ( ){

	int n;
	int a;
	int b;
	int c;
	int d;

	cin >> n;

	for ( a = 5; a <= n; a ++ ){
	
		for ( b = 2; b <= a; b ++ ){
		
			for ( c = b + 1; c <= a; c ++ ){
			
				for ( d = c + 1; d <= a; d ++ ){
				
					if ( pow ( ( double ) a, 3 ) == pow ( ( double ) b, 3 ) + pow ( ( double ) c, 3 ) + pow ( ( double ) d, 3 ) ){
					
						cout << "Cube = " << a << ", Triple = (" << b << "," << c << "," << d << ")" << endl;
					
					}
				
				}
			
			}
		
		}
	
	}

	return 0;

}