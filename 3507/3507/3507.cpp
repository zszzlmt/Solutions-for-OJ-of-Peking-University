/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		3507.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-04-25					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<algorithm>

using namespace std;

int main ( ){

	int a[ 7 ];
	int i;
	int max;
	int min;
	double res;

	max = -1;
	min = 9999;
	for ( i = 1; i <= 6; i ++ ){
	
		cin >> a[ i ];
		if ( a[ i ] > max ){
		
			max = a[ i ]; 
		
		}
		if ( a[ i ] < min ){
		
			min = a[ i ];
		
		}

	}

	while ( a[ 1 ] || a[ 2 ] || a[ 3 ] || a[ 4 ] || a[ 5 ] || a[ 6 ] ){
	
		res = 0;
		
		for ( i = 1; i <= 6; i ++ ){
		
			res += a[ i ];
		
		}

		res -= max;
		res -= min;

		res /= 4;

		printf ( "%g\n", res );

		max = -1;
		min = 9999;
		for ( i = 1; i <= 6; i ++ ){
	
			cin >> a[ i ];
			if ( a[ i ] > max ){
		
				max = a[ i ]; 
		
			}
			if ( a[ i ] < min ){
		
				min = a[ i ];
		
			}

		}

	}

	return 0;

}