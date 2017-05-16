/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		3618.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-05-16					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<algorithm>

using namespace std;

struct tab{

	int n;
	int flag;

} table[ 50000 + 1 ];

bool cmp ( tab a, tab b ){

	return a.n - b.n < 0;

}

int main ( ){

	int t;
	int n;
	int i;
	int d;
	int idx;
	int preS;
	int nowS;
	int preV;
	int sum;
	int cnt;

	cin >> t >> n;

	for ( i = 1; i <= n; i ++ ){
	
		cin >> d;

		if ( d > 0 ){
		
			table[ i ].n = d;
			table[ i ].flag = 1;
		
		}
		else {
		
			table[ i ].n = -d;
			table[ i ].flag = -1;
		
		}
	
	}

	sort ( table + 1, table + n + 1, cmp );

	idx = 0;
	preS = table[ 1 ].flag;
	preV = 0;
	cnt = 0;
	sum = 0;
	i = 1;

	while ( sum <= t && i <= n ){
	
		cnt ++;
		nowS = table[ i ].flag;

		if ( preS != nowS ){
		
			sum += preV + table[ i ].n;
		
		}
		else {
		
			sum += table[ i ].n - preV;
		
		}

		preV = table[ i ].n;
		preS = nowS;
		i ++;
	
	}

	if ( sum > t ){
	
		cout << cnt - 1 << endl;
	
	}
	else {
	
		cout << n << endl;
	
	}

	return 0;

}