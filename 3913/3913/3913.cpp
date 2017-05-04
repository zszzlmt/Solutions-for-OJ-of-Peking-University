/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		3913.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-05-04					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int main ( ){

	int n;
	int i;
	int a;
	int b;
	int c;

	cin >> n;
	cout << "Gnomes:" << endl;

	for ( i = 1; i <= n; i ++ ){
	
		cin >> a >> b >> c;

		if ( ( a < b && b < c ) || ( a > b && b > c ) ){
		
			cout << "Ordered" << endl;
		
		}
		else {
		
			cout << "Unordered" << endl;
		
		}
	
	}

	return 0;

}