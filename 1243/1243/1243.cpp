/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		1243.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-05-19					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int dp[ 30 + 1 ][ 30 + 1 ] = { 0 };

int main ( ){

	int g;
	int l;
	int i;
	int j;
	int k;

	cin >> g >> l;
	k = 0;

	for ( i = 1; i < 31; i ++ ){
	
		dp[ i ][ 0 ] = i;
	
	} 

	while ( !( g == 0 && l == 0 ) ){

		k ++;

		for ( i = 1; i <= g; i ++ ){
		
			for ( j = 1; j <= l; j ++ ){
			
				dp[ i ][ j ] = dp[ i - 1 ][ j ] + dp[ i - 1 ][ j - 1 ] + 1;
			
			}
		
		}

		cout << "Case " << k << ": " << dp[ g ][ l ] << endl; 
		cin >> g >> l;
	
	}

	return 0;

}