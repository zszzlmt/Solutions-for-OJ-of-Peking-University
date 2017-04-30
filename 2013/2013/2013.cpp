/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		2013.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-04-29					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>

using namespace std;

int main ( ){

	string s[ 30 ];

	int round;
	int n;
	int i;

	cin >> n;
	round = 0;

	while ( n != 0 ){
	
		cout << "SET " << ++ round << endl;

		for ( i = 1; i <= n; i ++ ){
		
			s[ i ].clear ( );
			cin >> s[ i ];
		
		}

		for ( i = 1; i <= n; i += 2 ){
		
			cout << s[ i ] << endl;
		
		}

		if ( n & 1 == 1 ){
		
			i = n - 1;
		
		}
		else {
		
			i = n;
		
		}

		for ( ; i >= 1; i -= 2 ){
		
			cout << s[ i ] << endl;
		
		}

		cin >> n;
	
	}

	return 0;

}