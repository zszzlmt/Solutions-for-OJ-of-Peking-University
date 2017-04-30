/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		2209.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-04-25					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<cmath>

using namespace std;

int t[ 100 + 1 ] = { 0 };

int main ( ){

	int n;
	int e;
	int i;
	int sum;

	cin >> n;
	cin >> e;
	sum = 0;

	for ( i = 1; i <= n; i ++ ){
	
		cin >> t[ i ];

		if ( t[ i ] >= 0 ){
		
			sum += pow ( ( double ) ( t[ i ] ), e );
		
		}
		else {

		    sum += ( 1 - ( e % 2 ) ) * pow ( ( double ) ( t[ i ] ), e );
		
		}

	}

	cout << sum << endl;

	return 0;

}