/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		3589.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-04-25					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>

using namespace std;

int main ( ){

	string s1;
	string s2;
	int t[ 4 ];
	int n;
	int i;
	int j;
	int k;
	int cnt1;
	int cnt2;

	cin >> n;

	for ( i = 1; i <= n; i ++ ){
	
		cin >> s1 >> s2;
		cnt1 = 0;
		cnt2 = 0;

		for ( j = 0; j < s1.size ( ); j ++ ){
		
			t[ j ] = 0;

			if ( s1[ j ] == s2[ j ] ){
			
				cnt1 ++;
				t[ j ] = 1;

			}
		
		}
		
		for ( j = 0; j < s1.size ( ); j ++ ){
		
			if ( t[ j ] == 0 ){
			
				for ( k = 0; k < s2.size ( ); k ++ ){
				
					if ( t[ k ] == 0 && s1[ j ] == s2[ k ] ){
					
						cnt2 ++;
						s1[ j ] = '*';
						s2[ k ] = '=';
					
					}
				
				}
			
			}
		
		}

		cout << cnt1 << 'A' << cnt2 << 'B' << endl;
	
	}
	
	return 0;

}