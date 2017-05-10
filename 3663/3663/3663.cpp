/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		3663.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-05-10					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<algorithm>

using namespace std;

int t[ 20000 ] = { 0 };

int main ( ){

	int n;
	int s;
	int i;
	int j;
	int res;

	cin >> n >> s;

	for ( i = 0; i < n; i ++ ){
	
		cin >> t[ i ];
	
	}

	sort ( t, t + n );

	res = 0;
	for ( i = 0; ; i ++ ){
	
		for ( j = n - 1; j != i; j -- ){
		
			if ( t[ i ] + t[ j ] <= s ){
			
				res += j - i;
				break;
			
			}
		
		}	
	
		if ( j == i ){
		
			break;
		
		}

	}

	cout << res << endl;

	return 0;

}