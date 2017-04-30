/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		2000.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-04-12					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int main ( ){

	int n;
	int t;
	int day;
	int res;

	cin >> day;

	while ( day != 0 ){
	
		n = 1;
		t = 1;
		res = 0;

		while ( day >= t ){
		
			n ++;
			t += n;
		
		}
	
		t -= n;
		n --;
		res += n * ( n + 1 ) * ( 2 * n + 1 ) / 6;
		res += ( day - t ) * ( n + 1 );

		cout << day << " " << res << endl;
		cin >> day;

	}

	return 0;

}