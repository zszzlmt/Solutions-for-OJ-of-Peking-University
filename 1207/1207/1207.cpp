/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		1207.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-04-11					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int main ( ){

	int i;
	int j;
	int max;
	int cnt;
	int t;
	int k;
	int flag;

	while ( scanf ( "%d%d", &i, &j ) != EOF ){

		flag = 0;
		if ( i > j ){
		
			flag = 1;
			t = i;
			i = j;
			j = t;
		
		}

		max = 0;

		for ( t = i; t <= j; t ++ ){
	
			cnt = 1;
			k = t;

			while ( k != 1 ){
		
				if ( k & 1 == 1 ){
			
					k = k * 3 + 1;
			
				}
				else {
			
					k /= 2;
			
				}

				cnt ++;
		
			}

			if ( cnt > max ){
		
				max = cnt;
		
			}
	
		}

		if ( flag == 1 ){
		
			cout  << j << " " << i << " " << max << endl;
		
		}
		else {
		
			cout  << i << " " << j << " " << max << endl;
		
		}

	}

	return 0;

}