/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		3006.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-04-30					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

bool t[ 1000000 + 1 ] = { 0 };

void initPrime ( ){

	long long int i;
	long long int j;

	memset ( t, false, sizeof ( t ) );
	t[ 1 ] = true;
	for ( i = 2; i <= 1000; i ++ ){
	
		if ( t[ i ] == false ){
		
			for ( j = i * i; j <= 1000000; j += i ){
			
				t[ j ] = true;
			
			}
		
		}
	
	}

}

int main ( ){

	int a;
	int d;
	int n;
	int cnt;

	initPrime ( );

	cin >> a >> d >> n;

	while ( !( a == 0 && d == 0 && n == 0 ) ){
	
		cnt = 0;

		do{
		
			if ( t[ a ] == false ){
			
				cnt ++;
			
			}
			
			a += d;
		
		}while ( cnt < n );
	
		cout << a - d << endl;

		cin >> a >> d >> n;

	}

	return 0;

}