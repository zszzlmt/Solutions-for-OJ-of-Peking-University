/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		2608.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-04-30					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int main ( ){

	char s[ 20 + 1 ];
	int i;
	int pre;

	while ( scanf ( "%s", s ) != EOF ){
	
		pre = 0;

		for ( i = 0; s[ i ] != '\0'; i ++ ){
		
			switch ( s[ i ] ){
			
				case 'B':
				case 'F':
				case 'P':
				case 'V':

					if ( pre != 1 ){

						pre = 1;
						cout << 1;

					}

					break;

				case 'C':
				case 'G':
				case 'J':
				case 'K':
				case 'Q':
				case 'S':
				case 'X':
				case 'Z':

					if ( pre != 2 ){

						pre = 2;
						cout << 2;

					}

					break;

				case 'D':
				case 'T':

					if ( pre != 3 ){

						pre = 3;
						cout << 3;

					}

					break;

				case 'L':

					if ( pre != 4 ){

						pre = 4;
						cout << 4;

					}

					break;

				case 'M':
				case 'N':

					if ( pre != 5 ){

						pre = 5;
						cout << 5;

					}

					break;

				case 'R':

					if ( pre != 6 ){

						pre = 6;
						cout << 6;

					}

					break;

				default :

					pre = 0;

					break;
			
			}
		
		}

		cout << endl;
	
	}

	return 0;

}