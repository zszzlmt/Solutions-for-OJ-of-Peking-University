/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		3672.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-05-16					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>

using namespace std;

int main ( ){

	int m;
	int t;
	int u;
	int f;
	int d;
	string s;
	int sum;
	int i;
	int res;
	int ud;
	int floor;
	bool flag;

	cin >> m >> t >> u >> f >> d;

	ud = u + d;
	floor = 2 * f;
	flag = false;
	sum = 0;

	for ( i = 1; i <= t; i ++ ){
	
		s.clear ( );
		cin >> s;

		if ( s[ 0 ] == 'f' ){
		
			sum += floor;
		
		}
		else {
		
			sum += ud;
		
		}

		if ( sum > m ){
		
			flag = true;
			res = i - 1;
			break;
		
		}
	
	}

	if ( flag == true ){
	
		cout << res << endl;
	
	}
	else {
		
		cout << t << endl;
	
	}

	return 0;

}