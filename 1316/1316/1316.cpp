/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		1316.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-04-14					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int table[ 10000 + 1 ] = { 0 };

int main ( ){

	int a;
	int s;
	int d;
	int f;
	int t;
	int i;

	for ( a = 0; a < 10; a ++ ){
	
		for ( s = 0; s < 10; s ++ ){
		
			for ( d = 0; d < 10; d ++ ){
			
				for ( f = 0; f < 10; f ++ ){//has to be < 10 here, tricky
				
					t = a * 1001 + s * 101 + d * 11 + f * 2;

					if ( t <= 10000 ){
					
						table[ t ] = 1;
					
					}
				
				}
			
			}
		
		}
	
	}

	for ( i = 1; i <= 10000; i ++ ){
	
		if ( table[ i ] == 0 ){
		
			cout << i << endl;
		
		}
	
	}

	return 0;

}