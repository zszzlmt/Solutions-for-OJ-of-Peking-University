/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		2941.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-05-03					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int t[ 1000 + 1 ][ 1000 + 1 ] = { 0 };

int main ( ){

	int n;
	int i;
	int j;
	bool flag;

	scanf ( "%d", &n );

	while ( n != 0 ){
	
		if ( n == 1 ){
		
			printf ( "homogeneous\n" );
			scanf ( "%d", &n );
		
		}
		else {
		
			flag = true;

			for ( i = 1; i <= n; i ++ ){
			
				for ( j = 1; j <= n; j ++ ){
				
					scanf ( "%d", &t[ i ][ j ] );
				
				}
			
			}

			for ( i = 1; i < n; i ++ ){
			
				for ( j = 1; j < n; j ++ ){
				
					if ( t[ i ][ j ] + t[ i + 1 ][ j + 1 ] != t[ i + 1 ][ j ] + t[ i ][ j + 1 ] ){
					
						flag = false;
						break;
					
					}
				
				}

				if ( flag == false ){
				
					break;
				
				}
			
			}
		
			if ( flag == true ){
			
				printf ( "homogeneous\n" );
			
			}
			else {
			
				printf ( "not homogeneous\n" );
			
			}

		}

		scanf ( "%d", &n );
	
	}

	return 0;

}