/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-05-02					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int main ( ){

	int n;
	int k;
	int i;
	int s;
	int t;
	int r;
	int v;
	int res;
	int time;
	int tmp;

	cin >> n >> k;

	for ( i = 1; i <= k; i ++ ){
	
		cin >> s >> t >> r;

		v = s * t;
		time = n / v;

		if ( n % v == 0 ){
			
			res = time * t + ( time - 1 ) * r;
			
		}
		else {
		
			res = time * t + time * r;
			tmp = n % v;

			while ( tmp > 0 ){
			
				tmp -= s;
				res ++;
			
			}
		
		}

		cout << res << endl;
	
	}

	return 0;

}