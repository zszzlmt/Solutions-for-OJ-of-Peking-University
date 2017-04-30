/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		3632.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-04-30					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int main ( ){

	int k;
	int n;
	int j;
	int i;
	int t;
	int min;
	int max;

	cin >> k;

	for ( j = 1; j <= k; j ++ ){
	
		cin >> n;
		min = 100;
		max = -1;

		for ( i = 1; i <= n; i ++ ){
		
			cin >> t;

			if ( t < min ){
			
				min = t;
			
			}

			if ( t > max ){
			
				max = t;
			
			}
		
		}

		cout << 2 * ( max - min ) << endl;
	
	}

	return 0;

}