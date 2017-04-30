/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		2575.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-04-15					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<algorithm>

using namespace std;

int t[ 3000 + 1 ];
int dif[ 3000 + 1 ];

int main ( ){

	int n;
	int i;
	bool flag;

	while ( scanf ( "%d", &n ) != EOF ){
	
		for ( i = 1; i <= n; i ++ ){
		
			cin >> t[ i ];
		
		}

		for ( i = 1; i <= n - 1; i ++ ){
		
			dif[ i ] = abs ( ( double ) ( t[ i + 1 ] - t[ i ] ) );
		
		}
	
		sort ( dif + 1, dif + n - 1 + 1 );

		flag = true;

		for ( i = 1; i <= n - 1; i ++ ){
		
			if ( dif[ i ] != i ){
			
				flag = false;
				break;
			
			}
		
		}

		if ( flag == true ){
		
			cout << "Jolly" << endl;
		
		}
		else {
		
			cout << "Not jolly" << endl;
		
		}

	}

	return 0;

}