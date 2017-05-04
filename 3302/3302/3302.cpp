/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		3302.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-05-04					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

bool check ( string s1, string s2 ){

	int j;
	int k;
	int l;
	int t[ 100 + 1 ];
	int size;
	char c;

	c = s2[ 0 ];
	size = 0;

	for ( j = 0; j < s1.size ( ); j ++ ){
	
		if ( s1[ j ] == c ){
		
			t[ size ++ ] = j;
		
		}
	
	}

	for ( j = 0; j < size; j ++ ){
	
		k = 0;

		for ( l = t[ j ]; l < s1.size ( ); l ++ ){
		
			if ( s1[ l ] == s2[ k ] ){
			
				k ++;
				if ( k == s2.size ( ) ){
				
					goto trueEnd;
				
				}
			
			}
		
		}
	
	}

	return false;

	trueEnd :

	return true;

}

int main ( ){

	int n;
	int i;
	string s1;
	string s2;

	cin >> n;

	for ( i = 1; i <= n; i ++ ){
	
		cin >> s1 >> s2;

		if ( check ( s1, s2 ) ){
		
			cout << "YES" << endl;
			continue;
		
		}
		else {
		
			reverse ( s2.begin ( ), s2.end ( ) );

			if ( check ( s1, s2 ) ){
			
				cout << "YES" << endl;
				continue;
			
			}
		
		}

		cout << "NO" << endl;
	
	}

	return 0;

}