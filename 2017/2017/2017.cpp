/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		2017.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-04-11				                                   *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int main ( ){

	int n;
	int i;
	int now;
	int v;
	int t;
	int total;

	cin >> n;

	while ( n != -1 ){
	
		now = 0;
		total = 0;

		for ( i = 1; i <= n; i ++ ){
		
			cin >> v >> t;

			total += v * ( t - now );
			now = t;
		
		}

		cout << total << " miles" << endl;

		cin >> n;
	
	}

	return 0;

}