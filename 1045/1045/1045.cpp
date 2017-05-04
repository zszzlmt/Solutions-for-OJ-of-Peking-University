/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		1045.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-05-04					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<cmath>

using namespace std;

int main ( ){

	double vs;
	double r;
	double c;
	double w;
	double vr;
	int n;
	int i;

	cin >> vs >> r >> c >> n;

	for ( i = 1; i <= n; i ++ ){
	
		cin >> w;

		vr = c * r * w * vs / sqrt ( 1 + c * r * w * c * r * w );
		
		printf ( "%.3lf\n", vr );
	
	}

	return 0;

}