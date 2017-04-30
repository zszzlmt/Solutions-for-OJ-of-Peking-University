/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		3210.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-04-11					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int main ( ){

	int n;

	cin >> n;

	while ( n != 0 ){
	
		if ( n & 1 == 1 ){
		
			cout << n - 1 << endl;
		
		}
		else {
		
			cout << "No Solution!" << endl;
		
		}

		cin >> n;
	
	}

	return 0;

}