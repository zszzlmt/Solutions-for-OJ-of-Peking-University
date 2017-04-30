/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		1005.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-03-29					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#define PI 3.1415926

#include<iostream>
#include<cmath>

using namespace std;

int main ( ){

	int n;
	double x;
	double y;
	int i;

	cin >> n;

	for ( i = 1; i <= n; i ++ ){
	
		cin >> x >> y;

		cout << "Property " << i << ": This property will begin eroding in year " << ceil ( PI * ( x * x + y * y ) / 100 )<< "." << endl;
	
	}

	cout << "END OF OUTPUT." << endl;

	return 0;

}