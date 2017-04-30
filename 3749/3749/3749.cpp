/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		3749.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-04-25					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>

using namespace std;

int main ( ){

	string s;
	int i;
	int dist;

	getline ( cin, s );

	while ( s.compare ( "ENDOFINPUT" ) != 0 ){
	
		getline ( cin, s );

		for ( i = 0; i < s.size ( ); i ++ ){
		
			if ( s[ i ] >= 'A' && s[ i ] <= 'Z' ){
			
				dist = s[ i ] - 'A' + 1;
				dist -= 5;

				if ( dist <= 0 ){
				
					dist += 26;
				
				}

				cout << ( char ) ( 'A' - 1 + dist );
			
			}
			else {
			
				cout << s[ i ];
			
			}
		
		}

		cout << endl;
		getline ( cin, s );
		getline ( cin, s );
	
	}

	return 0;

}