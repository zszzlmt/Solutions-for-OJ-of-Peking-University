/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		2524.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-05-11					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int t[ 50000 + 1 ] = { 0 };

int findRoot ( int k ){

	if ( t[ k ] < 0 ){
	
		return k;
	
	}
	else {
	
		return findRoot ( t[ k ] );
	
	}

}

int main ( ){

	int n;
	int m;
	int i;
	int p;
	int q;
	int rp;
	int rq;
	int cnt;
	int idx;

	idx = 1;
	cin >> n >> m;

	while ( !( n == 0 && m == 0 ) ){
	
		cnt = 0;

		for ( i = 1; i <= n; i ++ ){
		
			t[ i ] = -i;
		
		}
	
		for ( i = 1; i <= m; i ++ ){
		
			cin >> p >> q;

			rp = findRoot ( p );
			rq = findRoot ( q );

			if ( t[ rp ] != t[ rq ] ){
			
				t[ rq ] = rp;	
			
			}
		
		}

		for ( i = 1; i <= n; i ++ ){
		
			if ( t[ i ] < 0 ){
			
				cnt ++;
			
			}
		
		}

		cout << "Case " << idx << ": " << cnt << endl;
		cin >> n >> m;
		idx ++;

	}

	return 0;

}