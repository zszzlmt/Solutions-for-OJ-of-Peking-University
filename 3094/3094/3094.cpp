/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		3094.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-04-14					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>

using namespace std;

int main ( ){

	string s;
	int i;
	int res;

	getline ( cin, s );

	while ( s.compare ( "#" ) != 0 ){
	
		res = 0;

		for ( i = 0; i < s.size ( ); i ++ ){
		
			if ( s[ i ] >= 'A' && s[ i ] <= 'Z' ){
			
				res += ( i + 1 ) * ( s[ i ] - 'A' + 1 );
			
			}
		
		}

		cout << res << endl;
		getline ( cin, s );
	
	}

	return 0;

}