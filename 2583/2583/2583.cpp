/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		2583.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-04-14					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int main ( ){

	int a;
	int b;
	int c;
	int t1;
	int t2;

	while ( scanf ( "%d%d%d", &c, &t1, &t2 ) != EOF ){
	
		a = ( t2 + c - 2 * t1 ) / 2;
		b = t1 - a - c;

		cout << 9 * a + 3 * b + c << " " << 16 * a + 4 * b + c << " " << 25 * a + 5 * b + c << endl;
	
	}

	return 0;

}