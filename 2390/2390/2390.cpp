/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		2390.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-04-11					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int main ( ){

	double rate;
	double res;
	int money;
	int year;
	int i;

	cin >> rate >> money >> year;
	rate /= 100;
	res = money;

	for ( i = 1; i <= year; i ++ ){
	
		res *= ( 1 + rate );
	
	}

	cout << ( int ) res << endl;

	return 0;

}