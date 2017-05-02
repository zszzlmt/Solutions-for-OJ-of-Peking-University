/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-05-02					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<algorithm>

using namespace std;

int t[ 20000 + 1 ];

int main ( ){

	int k;
	int j;
	int n;
	int i;
	int res;
	
	cin >> k;

	for ( j = 1; j <= k; j ++ ){
	
		cin >> n;
		res = 0;

		for ( i = 0; i < n; i ++ ){
		
			cin >> t[ i ];
		
		}

		sort ( t, t + n );

		for ( i = n - 3; i >= 0; i -= 3 ){
		
			res += t[ i ];
		
		}

		cout << res << endl;
		
	}

	return 0;

}