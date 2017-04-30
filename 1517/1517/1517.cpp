/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		1517.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-04-15					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int f ( int n ){

	int res;
	int i;

	if ( n == 0 ){
	
		return 1;
	
	}

	for ( i = 1, res = 1 ; i <= n; i ++ ){
	
		res *= i;
	
	}

	return res;

}

int main ( ){

	int i;
	int j;
	double res;

	cout << "n e" << endl;
	cout << "- -----------" << endl;

	for ( i = 0; i <= 9; i ++ ){
	
		res = 0;
		for ( j = 0; j <= i; j ++ ){
		
			res += ( double ) 1 / f ( j );
		
		}

		printf ( "%d %.9lf\n", i, res );
	
	}

	return 0;

}