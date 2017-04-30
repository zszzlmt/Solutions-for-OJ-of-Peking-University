/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		1547.cpp                                                   *
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

	int n;
	int i;
	int max;
	int min;
	string maxs;
	string mins;
	string ts;
	int v;
	int a;
	int b;
	int c;

	cin >> n;

	while ( n != -1 ){
	
		max = -1;
		min = 501;

		for ( i = 1; i <= n; i ++ ){
		
			cin >> a >> b >> c;
			getchar ( );
			ts.clear ( );
			cin >> ts;

			v = a * b * c;

			if ( v > max ){
			
				max = v;
				maxs.clear ( );
				maxs = ts;
			
			}

			if ( v < min ){
			
				min = v;
				mins.clear ( );
				mins = ts;
			
			}
		
		}

		cout << maxs << " took clay from " << mins << "." << endl;

		cin >> n;
	
	}

	return 0;

}