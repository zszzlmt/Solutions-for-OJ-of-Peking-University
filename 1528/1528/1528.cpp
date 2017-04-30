/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		1528.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-04-12					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int f ( int n ){

	if ( n == 1 ){
	
		return 0;
	
	}

	int i;
	int sum;

	sum = 1;
	for ( i = 2; i < n; i ++ ){
	
		if ( n % i == 0 ){
		
			sum += i;
		
		}
	
	}

	return sum;

}

int main ( ){

	int n;
	int sum;

	cin >> n;
	cout << "PERFECTION OUTPUT" << endl;

	while ( n != 0 ){
	
		sum = f ( n );

		if ( n == sum ){
		
			printf ( "%5d  PERFECT\n", n );
		
		}
		else if ( n < sum ){
		
			printf ( "%5d  ABUNDANT\n", n );
		
		}
		else {
		
			printf ( "%5d  DEFICIENT\n", n );
		
		}

		cin >> n;
	
	}

	cout << "END OF OUTPUT" << endl;

	return 0;

}