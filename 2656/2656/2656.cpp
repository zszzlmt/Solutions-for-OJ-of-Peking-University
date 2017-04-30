/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		2656.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-04-25					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int main ( ){

	int n;
	int i;
	int max;
	int index;
	int a;
	int b;

	cin >> n;

	while ( n != 0 ){
	
		max = 0;

		for ( i = 1; i <= n; i ++ ){
		
			cin >> a >> b;

			if ( a + b > max ){
			
				max = a + b;
				index = i;
			
			}
		
		}

		if ( max > 8 ){
		
			cout << index << endl;
		
		}
		else {
		
			cout << "0" << endl;
		
		}

		cin >> n;
	
	}

	return 0;

}