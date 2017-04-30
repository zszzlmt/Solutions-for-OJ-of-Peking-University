/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		2105.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-04-29					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int main ( ){

	int k;
	int n;
	int i;
	int res;
	int j;
	char c;
	int t[ 8 ] = { 128, 64, 32, 16, 8, 4, 2, 1 };

	cin >> n;

	for ( k = 1; k <= n; k ++ ){
	
		for ( i = 1; i <= 4; i ++ ){
		
			res = 0;

			if ( i != 1 ){
			
				cout << ".";
			
			}

			for ( j = 0; j < 8; j ++ ){
			
				cin >> c;

				if ( c == '1' ){
				
					res += t[ j ];
				
				}
			
			}

			cout << res;
		
		}

		cout << endl;
	
	}

	return 0;

}