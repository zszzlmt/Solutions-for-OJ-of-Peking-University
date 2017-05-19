/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		1218.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-05-19					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<cmath>

using namespace std;

int main ( ){

	int n;
	int nCase;
	int k;

	cin >> nCase;

	for ( k = 1; k <= nCase; k ++ ){
	
		cin >> n;

		cout << ( int ) sqrt ( ( double ) n ) << endl;
	
	}

	return 0;

}