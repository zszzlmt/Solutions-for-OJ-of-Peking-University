/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		2940.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-05-04					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int main ( ){

	long long int res;
	long long int now;
	int d;
	int n;
	int i;

	cin >> n;

	while ( n != 0 ){
	
		now = 0;
		res = 0;

		for ( i = 0; i < n; i ++ ){
		
			cin >> d;

			res += abs ( now );
			now += d;
		
		}
	
		cout << res << endl;
		cin >> n;

	}

	return 0;

}