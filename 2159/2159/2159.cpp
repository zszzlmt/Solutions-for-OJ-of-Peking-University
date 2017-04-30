/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		2159.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-04-14					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main ( ){

	string s1;
	string s2;
	int t1[ 26 ] = { 0 };
	int t2[ 26 ] = { 0 };
	int i;

	cin >> s1 >> s2;

	if ( s1.size ( ) != s2.size ( ) ){
	
		cout << "NO" << endl;
		return 0;

	}

	for ( i = 0; i < s1.size ( ); i ++ ){
	
		t1[ s1[ i ] - 'A' ] ++;
		t2[ s2[ i ] - 'A' ] ++;

	} 

	sort ( t1, t1 + 26 );
	sort ( t2, t2 + 26 );

	for ( i = 0; i < 26; i ++ ){
	
		if ( t1[ i ] != t2[ i ] ){
		
			cout << "NO" << endl;
			return 0;
		
		}
	
	}

	cout << "YES" << endl;

	return 0;

}