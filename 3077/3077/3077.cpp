/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		3077.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-05-02					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int main ( ){

	int n;
	int i;
	int d;
	int baseNow;
	int step;//+1 or -1

	cin >> n;

	for ( i = 1; i <= n; i ++ ){
	
		cin >> d;
		baseNow = 10;
		step = 1;

		if ( d <= 10 ){
		
			cout << d << endl;
			continue;
		
		}

		while ( true ){
		
			if ( d % baseNow < baseNow / 2 ){
			
				if ( step > 0 ){
				
					step *= ( -1 );
				
				}
			
			}
			else {
			
				if ( step < 0 ){
				
					step *= ( -1 );
				
				}
			
			}

			while ( d % baseNow != 0 ){
			
				d += step;
			
			}

			if ( d > baseNow * 10 ){
			
				baseNow *= 10;
				step *= 10;
			
			}
			else {
			
				break;
			
			}
		
		}

		cout << d << endl;

	}

	return 0;

}