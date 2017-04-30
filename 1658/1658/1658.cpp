/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		1658.cpp                                                   *
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

	int a;
	int b;
	int c;
	int d;
	int n;
	int i;

	cin >> n;

	for (i = 1; i <= n; i ++ ){
	
		cin >> a >> b >> c >> d;

		if ( d - c == b - a ){
		
			cout << a << " " << b << " " << c << " " << d << " " << d + b - a << endl;
		
		}
		else {
		
			cout << a << " " << b << " " << c << " " << d << " " << d * ( b / a ) << endl;
		
		}

	}

	return 0;

}