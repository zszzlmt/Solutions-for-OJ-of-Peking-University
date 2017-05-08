/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		2488.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-05-07					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

/*number * letters */
int iStep[ 8 ] = { -1, 1, -2, 2, -2, 2, -1, 1 };
int jStep[ 8 ] = { -2, -2, -1, -1, 1, 1, 2, 2 };

bool map[ 26 + 1 ][ 26 + 1 ] = { 0 };

int row;
int col;

bool isInMap ( int x, int y ){

	if ( ( x >= 1 && x <= row ) && ( y >= 1 && y <= col ) ){
	
		return true;
	
	}

	return false;

}

int main ( ){

	int nCase;
	int k;
	int i;
	int j;

	cin >> nCase;

	for ( k = 1; k <= nCase; k ++ ){
	
		cout << "Scenario #" << k << ":" << endl;
		cin >> row >> col;


	
	}

	return 0;

}