/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		1862.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-04-30					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int main ( ){

	int n;
	int i;
	double t[ 100 + 1 ] = { 0 };
	double tmp;

	cin >> n;

	if ( n == 1 ){
	
		cin >> tmp;
		printf ( "%.3f\n", tmp );
	
	}
	else {
	
		for ( i = 0; i < n; i ++ ){
		
			cin >> t[ i ];
		
		}
	
		sort ( t, t + n );

		tmp = t[ n - 1 ];
		for ( i = n - 2; i >= 0; i -- ){
		
			tmp = 2 * sqrt ( tmp * t[ i ] );
		
		}

		printf ( "%.3f\n", tmp );

	}

	return 0;

}