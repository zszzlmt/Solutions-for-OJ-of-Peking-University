/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		1163.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-05-19					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int t[ 100 + 1 ][ 100 + 1 ];
int dp[ 100 + 1 ][ 100 + 1 ];

int main ( ){

	int n;
	int i;
	int j;
	int left;
	int right;
	int max;

	cin >> n;

	for ( i = 1; i <= n; i ++ ){
	
		for ( j = 1; j <= i; j ++ ){
		
			cin >> t[ i ][ j ];
		
		}
	
	}

	dp[ 1 ][ 1 ] = t[ 1 ][ 1 ];

	for ( i = 2; i <= n; i ++ ){
	
		for ( j = 1; j <= i; j ++ ){
		
			if ( j == 1 ){
			
				dp[ i ][ j ] = dp[ i - 1 ][ 1 ] + t[ i ][ j ];
			
			}
			else if ( j == i ){
			
				dp[ i ][ j ] = dp[ i - 1 ][ i - 1 ] + t[ i ][ j ];
			
			}
			else {
			
				left = dp[ i - 1 ][ j - 1 ];
				right = dp[ i - 1 ][ j ];

				if ( left > right ){
				
					dp[ i ][ j ] = left + t[ i ][ j ];
				
				}
				else {
				
					dp[ i ][ j ] = right + t[ i ][ j ];
				
				}
			
			}
		
		}
	
	}

	max = -1;
	for ( i = n, j = 1; j <= n; j ++ ){
	
		if ( dp[ i ][ j ] > max ){
		
			max = dp[ i ][ j ];
		
		}
	
	}

	cout << max << endl;

	return 0;

}