/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		2509.cpp                                                   *
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

	int n;
	int k;
	int cnt;

	while ( scanf ( "%d%d", &n, &k ) != EOF ){
	
		cnt = 0;

		cnt += n;
		while ( n >= k ){

			cnt += n / k;
			n = n % k + n / k;
		
		}

		cout << cnt << endl;
	
	}

	return 0;

}