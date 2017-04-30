/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		3386.cpp                                                   *
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

	int A;
	int a;
	int B;
	int b;
	int P;
	int flag = 0;

	while ( scanf ( "%d%d%d%d%d", &A, &a, &B, &b, &P ) != EOF ){
	
		flag = 0;

		if ( A <= b && B <= P ){
		
			flag = 1;
		
		}
		else if ( B <= a && A <= P ){
		
			flag = 1;
		
		}
		else if ( A + B <= P ){
		
			flag = 1;
		
		}

		if ( flag == 1 ){
		
			cout << "Yes" << endl;
		
		}
		else {
		
			cout << "No" << endl;
		
		}

	}

	return 0;

}