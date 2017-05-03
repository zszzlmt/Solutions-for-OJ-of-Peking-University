/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-05-03					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>

using namespace std;

int main ( ){

	string s;
	int i;

	getline ( cin, s );

	while ( s.compare ( "#" ) != 0 ){
	
		for ( i = 0; i < s.size ( ); i ++ ){
		
			switch ( s[ i ] ){
			
				case ' ':

					cout << "%20";

					break;
				case '!':

					cout << "%21";

					break;
				case '$':

					cout << "%24";

					break;
				case '%':

					cout << "%25";

					break;
				case '(':

					cout << "%28";

					break;
				case ')':

					cout << "%29";

					break;
				case '*':

					cout << "%2a";

					break;

				default :

					cout << s[ i ];

					break;
			
			}
		
		}
	
		cout << endl;
		s.clear ( );
		getline ( cin, s );

	}

	return 0;

}