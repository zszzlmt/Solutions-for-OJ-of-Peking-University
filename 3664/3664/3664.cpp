/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		3664.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-05-09					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<algorithm>

using namespace std;

struct A{

	int idx;
	int a;

} Ai[ 50000 ];

struct B{

	int idx;
	int b;

} Bi[ 50000 ];

bool cmpA ( A a1, A a2 ){

	return a1.a - a2.a > 0;

}

bool cmpB ( B b1, B b2 ){

	return b1.b - b2.b > 0;

} 

int t[ 50000 ] = { 0 };

int main ( ){

	int n;
	int k;
	int i;

	cin >> n >> k;

	for ( i = 0; i < n; i ++ ){
	
		cin >> Ai[ i ].a >> Bi[ i ].b;
		Ai[ i ].idx = i;
		Bi[ i ].idx = i;
	
	}

	sort ( Ai, Ai + n, cmpA );
	sort ( Bi, Bi + n, cmpB );

	for ( i = 0; i < k; i ++ ){
	
		t[ Ai[ i ].idx ] ++;
	
	}

	for ( i = 0; i < n; i ++ ){
	
		if ( t[ Bi[ i ].idx ] == 1 ){
		
			cout << Bi[ i ].idx + 1 << endl;
			break;
		
		}
	
	}

	return 0;

}