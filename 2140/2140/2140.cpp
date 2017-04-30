/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		2140.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-04-30					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int main ( ){

	int n;
	int i;//start of sequence
	int j;
	int sumNow;
	int cnt;

	cin >> n;
	
	cnt = 0;
	for ( i = 1; i <= n; i ++ ){
	
		sumNow = i;
		j = i;

		while ( sumNow < n ){
		
			sumNow += ++ j;
		
		}

		if ( sumNow == n ){
		
			cnt ++;
		
		}
	
	}

	cout << cnt << endl;

	return 0;

}