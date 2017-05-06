/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		3475.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-05-06					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

bool check ( int a, int b, double c, double d ){

	if ( ( a >= c && b >= d ) || ( a >= d && b >= c ) ){
	
		return true;
	
	}

	return false;

}

int main ( ){

	int a;
	int b;
	double c;
	double d;
	double cc;
	double dd;
	double r1;
	double r2;
	int k;
	int i;
	int j;
	int t;

	while ( scanf ( "%d%d%lf%lf", &a, &b, &c, &d ) != EOF ){
	
		if ( check ( a, b, c, d ) ){
		
			cout << 0 << endl;
			continue;
		
		}

		for ( k = 1; ; k ++ ){

			for ( i = 0; i <= k; i ++ ){
			
				j = k - i;
				cc = c;
				dd = d;

				for ( t = 1; t <= i; t ++ ){
				
					cc /= 2;
				
				}

				for ( t = 1; t <= j; t ++ ){
				
					dd /= 2;
				
				}
			
				if ( check ( a, b, cc, dd ) ){
				
					cout << k << endl;
					goto nextLoop;
				
				}

			}		
		
		}

		nextLoop:
		;

	}

	return 0;

}