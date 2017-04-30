/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		1519.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-04-12					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

char s[ 1000 + 1 ];

int main ( ){

	int n;
	int t;
	int i;

	while ( true ){
	
		scanf ( "%s", s );
		n = 0;

		for ( i = 0; s[ i ] != '\0'; i ++ ){
		
			n += s[ i ] - '0';
		
		}

		if ( n == 0 ){
		
			break;
		
		}

		t = n;

		do {

			n = t;
			t = 0;

			while ( n != 0 ){
		
				t += n % 10;
				n /= 10;
		
			}

		}while ( t >= 10 );

		cout << t << endl;
	
	}

	return 0;

}