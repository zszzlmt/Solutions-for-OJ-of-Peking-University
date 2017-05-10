/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		3061.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-05-10					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int t[ 100000 + 1 ];

int main ( ){

	int nCase;
	int k;
	int i;
	int n;
	int s;
	int head;
	int tail;
	int len;
	int sum;
	int min;

	cin >> nCase;

	for ( k = 1; k <= nCase; k ++ ){
	
		cin >> n >> s;

		for ( i = 1; i <= n; i ++ ){
		
			cin >> t[ i ];
		
		}
	
		min = 100001;
		sum = t[ 1 ];
		head = 1;
		tail = 1;

		while ( true ){
		
			while ( sum < s && tail < n ){
			
				sum += t[ ++ tail ];
			
			}

			if ( sum >= s ){
			
				while ( sum >= s ){
				
					sum -= t[ head ++ ];
				
				}
			
				if ( head == 1 && tail == 1 ){
				
					len = 1;
				
				}
				else {
				
					len = tail - head + 2;
				
				}

				if ( len < min ){
				
					min = len;
				
				}

			}
			else {
			
				break;
			
			}
		
		}

		if ( min == 100001 ){
		
			cout << 0 << endl;
		
		}
		else {
		
			cout << min << endl;
		
		}

	}

	return 0;

}