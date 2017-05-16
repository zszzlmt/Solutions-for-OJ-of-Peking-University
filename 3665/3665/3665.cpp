/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		3665.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-05-16					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int r[ 1000 + 1 ];
int n;

int nextSong ( ){

	int i;
	int max;
	int idx;

	idx = -1;
	max = -100001;

	for ( i = 1; i <= n; i ++ ){
	
		if ( r[ i ] > max ){
		
			idx = i;
			max = r[ i ];
		
		}
	
	}

	return idx;

}

void modifyR ( int k ){

	if ( n == 1 ){
	
		return ;
	
	}

	int i;
	int total;
	int each;
	int spare;

	total = r[ k ];
	r[ k ] = 0; 
	each = total / ( n - 1 );
	spare = total % ( n - 1 );

	if ( each != 0 ){
	
		for ( i = 1; i <= n; i ++ ){
		
			if ( i != k ){
			
				r[ i ] += each;
			
			}
		
		}
	
	}

	i = 1;

	while ( spare != 0 ){
	
		if ( i != k ){
		
			spare --;
			r[ i ] ++;
		
		}

		i ++;

		if ( i > n ){
		
			i = 1;
		
		}
	
	}

}

int main ( ){

	int t;
	int i;
	int k;

	cin >> n >> t;

	for ( i = 1; i <= n; i ++ ){
	
		cin >> r[ i ];
	
	}

	for ( i = 1; i <= t; i ++ ){
	
		k = nextSong ( );
		modifyR ( k );

		cout << k << endl;
	
	}

	return 0;

}