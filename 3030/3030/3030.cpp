/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		3030.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-04-14					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int main ( ){

	int r;
	int e;
	int c;
	int n;
	int i;

	cin >> n;

	for ( i = 1; i <= n; i ++ ){
	
		cin >> r >> e >> c;

		if ( r + c == e ){
		
			cout << "does not matter" << endl;
			continue;
		
		}
		else if ( r + c < e ){
		
			cout << "advertise" << endl;
		
		}
		else {
		
			cout << "do not advertise" << endl;
		
		}
	
	}

	return 0;

}