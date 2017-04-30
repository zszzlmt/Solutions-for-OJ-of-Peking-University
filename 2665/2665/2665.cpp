/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		2665.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-04-12					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int main ( ){

	int l;
	int t;
	int i;
	int s;
	int e;

	cin >> l >> t;

	while ( l != 0 && t != 0 ){
	
		for ( i = 1; i <= t; i ++ ){
		
			cin >> s >> e;

			l -= ( e - s + 1 );
		
		}

		l += 1;

		cout << l << endl;

		cin >> l >> t;
	
	}

	return 0;

}