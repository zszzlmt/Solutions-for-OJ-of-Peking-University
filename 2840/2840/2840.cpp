/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		2840.cpp                                                   *
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

	int t;
	int h;
	int m;
	int i;

	cin >> t;

	for ( i = 1; i <= t; i ++ ){
	
		scanf ( "%d:%d", &h, &m );

		if ( m != 0 ){
		
			cout << 0 << endl;
			continue;
		
		}

		if ( h <= 12 ){
		
			cout << h + 12 << endl;
		
		}
		else {
		
			cout << h - 12 << endl;
		
		}
	
	}

	return 0;

}