/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		3980.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-04-10			 	                                   *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int mod ( int n, int m ){

	return n - ( n / m ) * m;

}

int main ( ){

	int n;
	int m;

	while ( scanf ( "%d%d", &n, &m ) != EOF ){
	
		cout << mod ( n, m ) << endl;
	
	}

	return 0;

}