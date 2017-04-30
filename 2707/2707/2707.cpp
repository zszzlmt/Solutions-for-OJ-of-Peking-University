/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		2707.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-04-15					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

void swap ( int & a, int & b ){

	int t;

	t = a;
	a = b;
	b = t;

}

int main ( ){

	int l1;
	int s1;
	int l2;
	int s2;
	double r1;
	double r2;

	cin >> l1 >> s1 >> l2 >> s2;

	while ( !( l1 == 0 && s1 == 0 && l2 == 0 && s2 == 0 ) ){
	
		if ( l1 < s1 ){
		
			swap ( l1, s1 );
		
		}

		if ( l2 < s2 ){

			swap ( l2, s2 );
		
		}

		if ( l1 <= l2 && s1 <= s2 ){
		
			cout << "100%" << endl;
		
		}
		else {
		
			r1 = ( double ) l2 / l1;
			r2 = ( double ) s2 / s1;
			if ( r1 < r2 ){
			
				cout << ( int ) ( r1 * 100 );
			
			}
			else {
			
				cout << ( int ) ( r2 * 100 );
			
			}
			cout << "%" << endl;
		
		}

		cin >> l1 >> s1 >> l2 >> s2;
	
	}

	return 0;

}