/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		2924.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-05-02					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int main ( ){

	int k;
	int i;
	long long int m;
	long long int n;
	long long int res;

	cin >> k;

	for ( i = 1; i <= k; i ++ ){
	
		cin >> m >> n;

		res = ( m + n ) * ( n - m + 1 ) / 2;

		cout << "Scenario #" << i << ":" << endl;
		cout << res << endl << endl;
	
	}

	return 0;

}