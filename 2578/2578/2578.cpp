/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		2578.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-05-12					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int main ( ){

	int d;
	int i;

	for ( i = 1; i <= 3; i ++ ){
	
		cin >> d;

		if ( d <= 168 ){
		
			cout << "CRASH " << d << endl;

			return 0;
		
		}
	
	}

	cout << "NO CRASH " << endl;
	
	return 0;

}