/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		2388.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-04-15					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<algorithm>

using namespace std;

int t[ 10000 + 1 ];

int main ( ){

	int n;
	int i;

	cin >> n;

	for ( int i = 1; i <= n; i ++ ){
	
		cin >> t[ i ];
	
	}

	sort ( t + 1, t + n + 1 );

	cout << t[ n / 2 + 1 ] << endl;

	return 0;

}