/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-05-04					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int t[ 1500 + 1 ];

int min ( int a, int b, int c ){

	if ( a > b ){
	
		a = c;
	
	}
	else {
	
		b = c;
	
	}

	if ( a > b ){
	
		return b;
	
	}
	else {
		
		return a;
	
	}

}

void initUgly ( ){

	int i;
	int d;
	int d2;
	int d3;
	int d5;

	t[ 1 ] = 1;
	d2 = 1;
	d3 = 1;
	d5 = 1;
	for ( i = 2; i <= 1500; i ++ ){
	
		again :

		d = min( t[ d2 ] * 2, t[ d3 ] * 3, t[ d5 ] * 5 );

		if ( d == t[ d2 ] * 2 ){
		
			d2 ++;
		
		}
		else if ( d == t[ d3 ] * 3 ){
		
			d3 ++;
		
		}
		else {
		
			d5 ++;
		
		}

		if ( d == t[ i - 1 ] ){
		
			goto again;
		
		}
		else {
		
			t[ i ] = d;
		
		}
	
	}

}

int main ( ){

	int n;
	
	initUgly ( );

	cin >> n;

	while ( n != 0 ){
	
		cout << t[ n ] << endl;
		cin >> n;
	
	}

	return 0;

}