/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		2141.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-04-30					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>

using namespace std;

int main ( ){

	char t[ 26 ];
	int i;
	int d;
	string s;

	getline ( cin, s );
	for ( i = 0; i < s.size ( ); i ++ ){
	
		t[ i ] = s[ i ];
	
	}

	s.clear ( );
	getline ( cin, s );

	for ( i = 0; i < s.size ( ); i ++ ){
	
		if ( s[ i ] >= 'A' && s[ i ] <= 'Z' ){
		
			d = s[ i ] - 'A';
			cout << ( char ) toupper ( t[ d ] );
		
		}
		else if ( s[ i ] >= 'a' && s[ i ] <= 'z' ){
		
			d = s[ i ] - 'a';
			cout << t[ d ];
		
		}
		else {
		
			cout << s[ i ];
		
		}
	
	}

	cout << endl;

	return 0;

}