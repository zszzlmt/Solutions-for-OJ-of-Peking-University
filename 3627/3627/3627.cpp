/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		3627.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-05-05					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<algorithm>

using namespace std;

int t[ 20000 + 1 ];

int main ( ){

	int n;
	int h;
	int i;
	int cnt;

	cin >> n >> h;
	cnt = 0;

	for ( i = 0; i < n; i ++ ){
	
		cin >> t[ i ];
	
	}

	sort ( t, t + n );

	for ( i = n - 1; i >= 0; i -- ){
	
		h -= t[ i ];
		cnt ++;
		if ( h <= 0 ){
		
			break;
		
		}
	
	}

	cout << cnt << endl;

	return 0;

}