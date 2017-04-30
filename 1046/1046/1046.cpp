/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		1046.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-04-09					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#define MAX_TARGET_NUM 16
#define R_INDEX 0
#define G_INDEX 1
#define B_INDEX 2

#include<iostream>
#include<cmath>

using namespace std;

int tar[ MAX_TARGET_NUM ][ 3 ] = { 0 };
double dist[ MAX_TARGET_NUM ] = { 0 };

int findmin ( double * dist ){

	int i;
	double min;
	int index;

	min = 32767;
	index = 0;

	for ( i = 0; i < MAX_TARGET_NUM; i ++ ){
	
		if ( dist[ i ] < min ){
		
			min = dist[ i ];
			index = i;
		
		}
	
	}

	return index;

}

int main ( ){

	int i;
	int r, g, b;
	int index;

	for ( i = 0; i < MAX_TARGET_NUM; i ++ ){
	
		cin >> tar[ i ][ R_INDEX ] >> tar[ i ][ G_INDEX ] >> tar[ i ][ B_INDEX ];
	
	}

	cin >> r >> g >> b;

	while ( r != -1 && g != -1 && b != -1 ){
	
		for ( i = 0; i < MAX_TARGET_NUM; i ++ ){
		
			dist[ i ] = sqrt ( pow( ( double )( r - tar[ i ][ R_INDEX ] ), 2 ) + pow( ( double )( g - tar[ i ][ G_INDEX ] ), 2 ) + pow( ( double )( b - tar[ i ][ B_INDEX ] ), 2 ) );

		}

		index = findmin ( dist );

		cout << "(" << r << "," << g << "," << b << ") maps to (" << tar[ index ][ R_INDEX ] << "," << tar[ index ][ G_INDEX ] << "," << tar[ index ][ B_INDEX ] << ")" << endl;
	
		cin >> r >> g >> b;

	}

	return 0;

}