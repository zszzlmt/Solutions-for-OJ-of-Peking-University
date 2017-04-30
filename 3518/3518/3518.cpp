/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		3518.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-04-25					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<cmath>

using namespace std;

int t [ 100000 + 1 ] = { 0 };

void init ( ){

	int i;
	int j;
	int cnt;
	int flag;

	cnt = 0;

	for ( i = 2; ; i ++ ){
	
		flag = 1;

		for ( j = 2; j <= sqrt ( ( double ) i ) && j != i; j ++ ){
		
			if ( i % j == 0 ){
			
				flag = 0;
				break;
			
			}
		
		}

		if ( flag == 1 ){
		
			t[ ++ cnt ] = i;
			if ( cnt == 100000 ){
			
				break;
			
			}
		
		}
	
	}

}

int main ( ){

	int d;
	int i;

	init ( );

	cin >> d;

	while ( d != 0 ){
	
		for ( i = 1; i <= 100000; i ++ ){
		
			if ( t[ i ] == d ){
			
				cout << "0" << endl;
			
			}
			else if ( t[ i ] < d && i < 100000 && t[ i + 1 ] > d ){
			
				cout << t[ i + 1 ] - t[ i ] << endl;
			
			}
		
		}

		cin >> d;
	
	}

	return 0;

}