/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		1401.cpp                                                   *
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

	int n; 
	int i;
	int d;
	int res;

	cin >> n;

	for ( i = 1; i <= n; i ++ ){
	
		cin >> d;

		res = 0;
		while ( d > 0 ){
		
			d /= 5;
			res += d;
		
		}

		cout << res << endl;
	
	}

	return 0;

}