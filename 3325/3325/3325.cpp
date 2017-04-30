/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		3325.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-04-25					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int main ( ){

	int n;
	int i;
	int d;
	int max;
	int min;
	int res;

	cin >> n;

	while ( n != 0 ){
	
		min = 99999;
		max = -1;
		res = 0;

		for ( i = 1; i <= n; i ++ ){
		
			cin >> d;

			if ( d > max ){
			
				max = d;
			
			}
			if ( d < min ){
			
				min = d;
			
			}
		
			res += d;

		}

		res -= max;
		res -= min;

		res /= ( n - 2 );

		cout << res << endl;
		cin >> n;

	}

	return 0;

}