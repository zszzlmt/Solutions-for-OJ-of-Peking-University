/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		1032.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-05-15					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int tab[ 1000 + 1 ] = { 0 };

int main ( ){

	int n;
	int i;
	int t;
	int sum;
	int size;

	cin >> n;
	t = 2;
	sum = 0;
	size = 1;

	while ( n - sum >= t ){
	
		tab[ size ++ ] = t;
		sum += t;
		t ++;
	
	}

	t = n - sum;
	i = 0;

	while ( t != 0 ){
	
		tab[ size - 1 - i ] ++;
		t --;
		i = ( i + 1 ) % ( size - 1 );
	
	}

	for ( i = 1; i < size; i ++ ){
	
		if ( i != 1 ){
		
			cout << " ";
		
		}

		cout << tab[ i ];
	
	}

	cout << endl;

	return 0;

}