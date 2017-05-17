/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		1065.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-05-17					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<algorithm>

using namespace std;

struct wood{

	int l;
	int w;

} table[ 5000 ];

int travel[ 5000 ];

bool cmp ( wood a, wood b ){

	if ( a.l != b.l ){
	
		return a.l - b.l < 0;
	
	}
	else {
	
		return a.w - b.w < 0;
	
	}

}

int main ( ){

	int nCase;
	int k;
	int n;
	int i;
	int j;
	int head;
	int res;

	cin >> nCase;

	for ( k = 1; k <= nCase; k ++ ){
	
		cin >> n;

		for ( i = 0; i < n; i ++ ){
		
			cin >> table[ i ].l >> table[ i ].w;
		
		} 

		sort ( table, table + n, cmp );
		memset ( travel, 0, n * sizeof ( int ) );
		res = 0;

		for ( i = 0; i < n; i ++ ){
		
			if ( travel[ i ] == 0 ){
			
				travel[ i ] = 1;
				head = i;
				res ++;

				for ( j = i + 1; j < n; j ++ ){
					
					if ( travel[ j ] == 0 && table[ head ].w <= table[ j ].w ){
						
						travel[ j ] = 1;
						head = j;
						
					}
					
				}
			
			}
		
		}

		cout << res << endl;
	
	}

	return 0;

}