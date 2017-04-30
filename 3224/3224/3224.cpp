/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		3224.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-04-14					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int win[ 100 + 1 ] = { 0 };

int main ( ){

	int n;
	int i;
	int j;
	int t;
	int max;
	int res;

	cin >> n;

	for ( i = 1; i <= n; i ++ ){
	
		for ( j = 1; j <= n; j ++ ){
		
			cin >> t;

			if ( t == 3 ){
			
				win [ i ] ++;
			
			}

		}
	
	}

	max = 0;
	res = 0;

	for ( i = 1; i <= n; i ++ ){
	
		if ( win[ i ] > max ){
		
			res = i;
			max = win[ i ];
		
		}
	
	}

	cout << res << endl;

	return 0;

}