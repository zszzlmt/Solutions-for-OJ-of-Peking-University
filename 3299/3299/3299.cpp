/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		3299.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-05-02					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<cmath>

using namespace std;

double t;
double d;
double h;

void input ( char tmp ){

	int n;
	double k;

	n = 1;
	while ( true ){
	
		cin >> k;

		switch ( tmp ){
		
			case 'T':

				t = k;

				break;

			case 'D':

				d = k;

				break;

			case 'H':

				h = k;

				break;
		
		}

		if ( n == 2 ){
		
			break;
		
		}

		do {
		
			cin >> tmp;
		
		}while ( tmp == ' ' );
		n ++;
		
	}

}

int main ( ){

	char flag;
	char tmp;
	double e;

	cin >> tmp;

	while ( tmp != 'E' ){
	
		t = -9999;
		d = -9999;
		h = -9999;

		input ( tmp );

		if ( t == -9999 ){
		
			e = 6.11 * exp ( 5417.7530 * ( ( 1 / 273.16 ) - ( 1 / ( d + 273.16 ) ) ) );
			t = h - 0.5555 * ( e - 10 );
		
		}
		else if ( d == -9999 ){
		
			e = ( h - t )/ 0.5555 + 10;
			d = 1 / ( 1 / 273.16 - log ( e / 6.11 ) / 5417.7530 ) - 273.16;
		
		}
		else {
		
			e = 6.11 * exp ( 5417.7530 * ( ( 1 / 273.16 ) - ( 1 / ( d + 273.16 ) ) ) );
			h = t + 0.5555 * ( e - 10 );
		
		}
	
		printf ( "T %.1f D %.1f H %.1f\n", t, d, h );
		do {
		
			cin >> tmp;
		
		}while ( tmp == ' ' || tmp == '\n' );

	}

	return 0;

}