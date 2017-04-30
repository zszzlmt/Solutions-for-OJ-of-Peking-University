/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		1004.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-03-29					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<iomanip>

using namespace std;

int main ( ){

	int i;
	double sum;
	double tmp;

	sum = 0;
	tmp = 0;

	for ( i = 1; i <= 12; i ++ ){
	
		cin >> tmp;

		sum += tmp;
	
	}
	
	sum /= 12;

	printf ( "$%.2f\n", sum );
	
	return 0;

}