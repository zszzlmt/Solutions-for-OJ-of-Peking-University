/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		1664.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-04-15					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int f ( int apple, int plate ){

	if ( apple == 1 || plate == 1 || plate == 0 || apple == 0 ){
	
		return 1;
	
	}

	if ( plate > apple ){
	
		return f ( apple, apple );
	
	}

	if ( apple >= plate ){
	
		return f ( apple - plate, plate ) + f ( apple, plate - 1 );
	
	}

}

int main ( ){

	int k;
	int i;
	int m;
	int n;

	cin >> k;

	for ( i = 1; i <= k; i ++ ){
	
		cin >> m >> n;

		cout << f ( m, n ) << endl;
	
	}

	return 0;

}