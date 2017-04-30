/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		2636.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-04-15					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int main ( ){

	int k;
	int i;
	int n;
	int t;
	int j;
	int sum;

	cin >> k;

	for ( i = 1; i <= k; i ++ ){
	
		sum = 0;
		cin >> n;

		for ( j = 1; j <= n; j ++ ){
		
			cin >> t;
			sum += t;
		
		}

		sum -= n - 1;

		cout << sum << endl;
	
	}

	return 0;

}