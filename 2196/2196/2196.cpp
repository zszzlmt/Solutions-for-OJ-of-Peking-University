/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		2196.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-04-29					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int calcu ( int n, int base ){

	int res;
	int t[ 4 ];
	int i;
	int k;

	res = 0;

	for ( i = 0; i < 4; i ++ ){
	
		t[ i ] = n % base;
		n /= base;

		res += t[ i ];
	
	}

	return res;

}

int main ( ){

	int i;
	int t;

	for ( i = 2992; i <= 9999; i ++ ){
	
		t = calcu ( i, 10 );

		if ( ( t == calcu ( i, 12 ) ) && ( t == calcu ( i, 16 ) ) ){
		
			cout << i << endl;
		
		}
	
	}

	return 0;

}