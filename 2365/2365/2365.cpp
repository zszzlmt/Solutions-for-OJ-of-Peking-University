/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		2365.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-04-25					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<cmath>

using namespace std;

#define PI 3.1415926

int main ( ){

	int n;
	double r;
	int i;
	double sx, sy;
	double px, py;
	double x, y;
	double dist;

	cin >> n;
	cin >> r;
	dist = 0;

	cin >> sx >> sy;
	px = sx;
	py = sy;

	for ( i = 2; i <= n; i ++ ){
	
		cin >> x >> y;

		dist += sqrt ( pow ( x - px, 2 ) + pow ( y - py, 2 ) );
		
		px = x;
		py = y;

	}

	if ( n != 1 ){
	
		dist += sqrt ( pow ( x - sx, 2 ) + pow ( y - sy, 2 ) );
	
	}

	dist += 2 * PI * r;

	printf ( "%.2lf\n", dist );

	return 0;

}