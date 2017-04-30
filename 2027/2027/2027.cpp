/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		2027.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-04-15					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int main ( ){

	int n;
	int x;
	int y;
	int i;

	cin >> n;

	for ( i = 1; i <= n; i ++ ){
	
		cin >> x >> y;

		if ( x >= y ){
		
			cout << "MMM BRAINS" << endl;
		
		}
		else {
		
			cout << "NO BRAINS" << endl;
		
		}
	
	}

	return 0;

}