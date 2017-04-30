/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		1003.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-03-28					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>

using namespace std;

double reform ( string s ){

	double f;

	f = 0;

	f += s[ 0 ] - '0';
	f += ( double )( s[ 2 ] - '0' ) / 10;
	f += ( double )( s[ 3 ] - '0' ) / 100;

	return f;

}

int main ( ){

	string s;
	double tar;
	int i;
	double sum;
	
	s.clear( );
	cin >> s;

	while ( s.compare( "0.00" ) != 0 ){
	
		sum = 0;
		i = 2;

		tar = reform ( s );

		while ( sum < tar ){
		
			sum += ( double ) 1 / i;
			i ++;
		
		}

		cout << i - 2 << " card(s)" << endl;

		s.clear( );
		cin >> s;
	
	}

	return 0;

}