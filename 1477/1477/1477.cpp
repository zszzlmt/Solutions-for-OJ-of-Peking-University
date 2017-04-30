/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		1477.cpp                                                   *
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

int t[ 50 + 1 ] = { 0 };

int main ( ){

	int no;
	int n;
	int i;
	int sum;
	int avg;
	int res;

	cin >> n;
	no = 0;

	while ( n != 0 ){
	
		no ++;
		sum = 0;
		res = 0;
		
		for ( i = 1; i <= n; i ++ ){
		
			cin >> t[ i ];
			sum += t[ i ];
		
		}

		avg = sum / n;

		sort ( t + 1, t + n + 1 );

		for ( i = 1; i <= n && t[ i ] < avg; i ++ ){
		
			res += avg - t[ i ];
		
		}

		cout << "Set #" << no << endl;
		cout << "The minimum number of moves is " << res << "." << endl;
		cout << endl;
		cin >>n;
	
	}

	return 0;

}