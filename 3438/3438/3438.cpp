/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		3438.cpp                                                   *
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

	string s;
	int n;
	int i;
	int j;
	char pre;
	int cnt;

	cin >> n;
	getchar ( );

	for ( i = 1; i <= n; i ++ ){
	
		s.clear ( );
		cnt = 0;
		getline ( cin, s );
	
		pre = s[ 0 ];
		cnt ++;
		for ( j = 1; j < s.size ( ); j ++ ){
		
			
			if ( s[ j ] == pre ){
				
				cnt ++;
				
			}
			else {
			
				cout << cnt << pre;
				pre = s[ j ];
				cnt = 1;
				
			}
		
		}

		cout << cnt << pre;
		cout << endl;

	}

	return 0;

}