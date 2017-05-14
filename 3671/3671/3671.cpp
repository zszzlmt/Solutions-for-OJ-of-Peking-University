/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		3671.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-05-14					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int t[ 30000 + 1 ];

int main ( ){

	int i;
	int n;
	int cnt;
	int res;

	cin >> n;
	cnt = 0;

	for ( i = 1; i <= n; i ++ ){
	
		cin >> t[ i ];
		if ( t[ i ] == 2 ){
		
			cnt ++;
		
		}
	
	}

	res = cnt;

	for ( i = 1; i <= cnt; i ++ ){
	
		if ( t[ i ] == 2 ){
		
			res --;
		
		}
	
	}

	cout << res << endl;

	return 0;

}