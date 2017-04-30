/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		1007.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-04-08					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

struct dna{

	string s;
	int num;

}table[ 1000 + 1 ];

bool cmp ( dna a, dna b ){

	return ( a.num  - b.num < 0 );

}

int main ( ){

	int n;
	int len;
	int i;
	int j;
	int k;
	int tmp;

	cin >> len >> n;

	for ( i = 0; i < n; i ++ ){
	
		cin >> table[ i ].s;
		tmp = 0;

		for ( j = 0; j < len; j ++ ){
		
			for ( k = j; k < len; k ++ ){
			
				if ( table[ i ].s[ j ] > table[ i ].s[ k ] ){
				
					tmp ++;
				
				}
			
			}
		
		}

		table[ i ].num = tmp;

	}

	sort ( table, table + n, cmp );

	for ( i = 0; i < n; i ++ ){
	
		cout << table[ i ].s << endl;
	
	}

	return 0;

}