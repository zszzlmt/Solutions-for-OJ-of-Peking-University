/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		3917.cpp                                                   *
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

	string s1;
	string s2;
	int win1;
	int win2;
	int i;

	getline ( cin, s1 );
	getline ( cin, s2 );

	while ( !( s1.compare ( "E" ) == 0 && s2.compare ( "E" ) == 0 ) ){
	
		win1 = 0;
		win2 = 0;

		for ( i = 0; i < s1.size ( ); i ++ ){
		
			switch ( s1[ i ] ){
			
				case 'R':

					switch ( s2[ i ] ){
					
						case 'S':

							win1 ++;

							break;

						case 'P':

							win2 ++;

							break;
					
					}

					break;
				
				case 'P':

					switch ( s2[ i ] ){
					
						case 'R':

							win1 ++;

							break;

						case 'S':

							win2 ++;

							break;
					
					}

					break;

				case 'S':

					switch ( s2[ i ] ){
					
						case 'P':

							win1 ++;

							break;

						case 'R':

							win2 ++;

							break;
					
					}

					break;
			
			}
		
		}

		cout << "P1: " << win1 << endl;
		cout << "P2: " << win2 << endl;

		s1.clear ( );
		s2.clear ( );
		getline ( cin, s1 );
		getline ( cin, s2 );
	
	}

	return 0;

}