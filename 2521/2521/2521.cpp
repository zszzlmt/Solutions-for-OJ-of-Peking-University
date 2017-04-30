/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		2521.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-04-10					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int main ( ){

	int n;
	int m;
	int p;
	int c;

	cin >> n >> m >> p >> c;

	while ( !( n == 0 && m == 0 && p == 0 && c == 0 ) ){
	
		cout << n + c - ( m + c - p ) << endl;
	
		cin >> n >> m >> p >> c;

	}

	return 0;

}