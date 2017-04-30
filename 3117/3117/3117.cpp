/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		3117.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-04-14					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>

using namespace std;

int main ( ){

	string s;
	int t;
	int i;
	int n;
	int score;
	int sum;

	cin >> t >> n;

	while ( !( t == 0 && n == 0 ) ){//such a big trap
	
		sum = 0;

		for ( i = 1; i <= t; i ++ ){
		
			cin >> s;
			cin >> score;

			sum += score;
		
		}

		cout << n * 3 - sum << endl;
		cin >> t >> n;
	
	}

	return 0;

}