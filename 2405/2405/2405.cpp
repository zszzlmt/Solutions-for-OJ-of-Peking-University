/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		2405.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-05-13					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<cmath>

using namespace std;

#define PI 3.1415926

int main ( ){

	double D;
	double V;
	double d;

	cin >> D >> V;

	while ( !( D == 0 && V == 0 ) ){
	
		d = pow ( pow ( D, 3 ) - 6 * V / PI, 1.0 / 3 );	
		printf ( "%.3lf\n", d );

		cin >> D >> V;
	
	}

	return 0;

}