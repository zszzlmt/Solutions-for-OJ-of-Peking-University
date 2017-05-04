/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		2291.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-05-04					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<algorithm>

using namespace std;

int t[ 1000 + 1 ] = { 0 };

int main ( ){

	int nCase;
	int i;
	int k;
	int n;
	int max;

	cin >> nCase;

	for ( k = 1; k <= nCase; k ++ ){
	
		cin >> n;
		max = -1;

		for ( i = 0; i < n; i ++ ){
		
			cin >> t[ i ];
		
		}

		sort ( t, t + n );

		for ( i = 0; i < n; i ++ ){
		
			if ( t[ i ] * ( n - i ) > max ){
			
				max = t[ i ] * ( n - i );
			
			}
		
		}

		cout << max << endl;
	
	}

	return 0;

}