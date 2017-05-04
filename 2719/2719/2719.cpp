/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		2719.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-05-04					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>

using namespace std;

int main ( ){

	string s;
	int i;
	int res;
	int base;

	getline ( cin, s );

	while ( s.compare ( "0" ) != 0 ){
	
		cout << s << ": "; 

		for ( i = 0; i < s.size ( ); i ++ ){
		
			if ( s[ i ] > '4' ){
			
				s[ i ] --;
			
			}
		
		}

		res = 0;
		base = 1;

		for ( i = s.size ( ) - 1; i >= 0; i -- ){
		
			res += base * ( s[ i ] - '0' );
			base *= 9;
		
		}

		cout << res << endl;

		s.clear ( );
		getline ( cin, s );
	
	}

	return 0;

}