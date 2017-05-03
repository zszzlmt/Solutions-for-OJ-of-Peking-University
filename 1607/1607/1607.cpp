/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-05-03					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int main ( ){

	int i;
	int j;
	double res;

	cout << "Cards  Overhang" << endl;

	while ( scanf ( "%d", &i ) != EOF ){
	
		res = 0;

		for ( j = 1; j <= i; j ++ ){
		
			res += 1.0 / ( 2 * j );
		
		}

		printf ( "%5d  %8.3lf\n", i, res );
	
	}

	return 0;

}