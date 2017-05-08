/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		3716.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-05-08					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int main ( ){

	int nCase;
	int k;
	int p;
	int q;
	double res;

	cin >> nCase;

	for ( k = 1; k <= nCase; k ++ ){
	
		cin >> p >> q;

		res = ( p + q + 10 ) / 7.0;

		printf ( "%.3lf\n", res );
	
	}

	return 0;

}