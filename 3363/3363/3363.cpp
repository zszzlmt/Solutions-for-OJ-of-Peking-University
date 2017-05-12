/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		3363.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-05-12					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>

using namespace std;

int n;
int m;
int r;
int c;
int cnt;
int tar[ 100 + 1 ][ 100 + 1 ] = { 0 };
int now[ 100 + 1 ][ 100 + 1 ] = { 0 }; 

void change ( int x, int y ){

	int i;
	int j;

	for ( i = x; i < x + r; i ++ ){
	
		for ( j = y; j < y + c; j ++ ){
		
			now[ i ][ j ] = 1 - now[ i ][ j ];
		
		}
	
	}

}

bool isEqual ( ){

	int i;
	int j;

	for ( i = 1; i <= n; i ++ ){
	
		for ( j = 1; j <= m; j ++ ){
		
			if ( now[ i ][ j ] != tar[ i ][ j ] ){
			
				return false;
			
			}
		
		}
	
	}

	return true;

}

bool check ( ){

	int i;
	int j;

	cnt = 0;

	for ( i = 1; i + r - 1 <= n; i ++ ){
	
		for ( j = 1; j + c - 1 <= m; j ++ ){
		
			if ( now[ i ][ j ] != tar[ i ][ j ] ){
			
				change ( i, j );
				cnt ++;
				//i don't think we need to check now == tar at every change
				
			}
		
		}
	
	}

	if ( isEqual ( ) ){
	
		return true;
	
	}
	else {
	
		return false;
	
	}

}

int main ( ){

	int i;
	int j;
	string s;

	cin >> n >> m >> r >> c;

	while ( !( n == 0 && m == 0 && r == 0 && c == 0 ) ){
	
		getchar ( );

		for ( i = 1; i <= n; i ++ ){
		
			s.clear ( );
			getline ( cin, s );

			for ( j = 0; j < s.size ( ); j ++ ){
			
				tar[ i ][ j + 1 ] = s[ j ] - '0';
				now[ i ][ j + 1 ] = 0;
			
			}
		
		}

		if ( check ( ) ){
		
			cout << cnt << endl;
		
		}
		else {
		
			cout << -1 << endl;
		
		}
	
		cin >> n >> m >> r >> c;

	}

	return 0;

}