/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		2739.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-04-15					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<cmath>

using namespace std;

int t[ 10000 + 1 ] = { 0 };

int init_prime ( ){

	int i;
	int j;
	bool prime;
	int size;

	size = 1;

	for ( i = 2; i <= 10000; i ++ ){
	
		prime = true;

		for ( j = 2; j <= sqrt ( ( double ) i ); j ++ ){
		
			if ( i % j == 0 ){
			
				prime = false;
				break;
			
			} 
		
		}

		if ( prime == true ){
		
			t[ size ++ ] = i;
		
		}

	}

	return -- size;

}

int main ( ){

	int prime_size;
	int n;
	int i;
	int j;
	int cnt;
	int sum;
	
	prime_size = init_prime ( );

	cin >> n;

	while ( n != 0 ){
	
		cnt = 0;

		for ( i = 1; i <= prime_size && t[ i ] <= n; i ++ ){
		
			sum = t[ i ];

			if ( sum == n ){
			
				cnt ++;
				break;
			
			}

			for ( j = i + 1; j <= prime_size; j ++ ){
			
				sum += t[ j ];

				if ( sum == n ){
				
					cnt ++;
					break;
				
				}
				else if ( sum > n ){
				
					break;
				
				}
			
			}
		
		}

		cout << cnt << endl;
		cin >> n;
	
	}

	return 0;

}