/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		1552.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-04-25					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int main ( ){

	int t[ 100 ] = { 0 };
	int n;
	int i;
	int cnt;

	cin >> n;
	cnt = 0;

	while ( n != -1 ){
	
		if ( n == 0 ){
		
			for ( i = 1; i < 100; i ++ ){
			
				if ( t[ i ] == 1 ){
				
					if ( 2 * i < 100 && t[ 2 * i ] == 1 ){
					
						cnt ++;
					
					}

					t[ i ] = 0;
				
				}
			
			}

			cout << cnt << endl;
			cnt = 0;
		
		}
		else {
		
			t[ n ] = 1;
		
		}

		cin >> n;
	
	}

	return 0;

}