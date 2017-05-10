/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		3320.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-05-10					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<set>

using namespace std;

int t[ 1000000 + 1 ] = { 0 };
int np[ 1000000 + 1 ] = { 0 };

int main ( ){

	set< int > s;
	int n;
	int i;
	int size;

	cin >> n;

	for ( i = 1; i <= n; i ++ ){
	
		cin >> t[ i ];
		s.insert ( t[ i ] );
	
	}

	size = s.size ( );



	return 0;

}