/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		2909.cpp                                                   *
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

bool judge ( int n ){

	int i;

	if ( n == 1 ){
	
		return false;
	
	}

	for ( i = 2; i < sqrt ( ( double ) n ) + 1; i ++ ){
	
		if ( n % i == 0 ){
		
			return false;
		
		}
	
	}

	return true;

}

int main ( ){

	int n;
	int i;
	int cnt;

	cin >> n;

	while ( n != 0 ){
	
		cnt = 0;

		for ( i = 3; i <= n / 2; i += 2 ){
		
			if ( judge ( i ) ){
			
				if ( judge ( n - i ) ){
				
					cnt ++;

				}
			
			}
		
		}

		cout << cnt << endl;
		cin >> n;
	
	}

	return 0;

}