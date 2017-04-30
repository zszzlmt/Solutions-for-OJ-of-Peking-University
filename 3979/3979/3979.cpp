/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		3979.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-04-11					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int gcd ( int a, int b ){

	int t;

	if ( a < b ){
	
		t = a;
		a = b;
		b = t;
	
	}

	while ( b != 0 ){
	
		a %= b;
		t = a;
		a = b;
		b = t;
	
	}

	if ( a < 0 ){
	
		a *= ( -1 );
	
	}

	return a;

}

void transform ( int & up, int & down ){

	if ( up == down ){
	
		up = 1;
		down = 0;//a flag
		return ;
	
	}
	else if ( up * ( -1 ) == down ){
	
		up = -1;
		down = 0;
		return ;
	
	}
	else if ( up == 0 ){
	
		down = 0;
		return ;
	
	}
	else if ( down == 1 ){
	
		down = 0;
		return ;
	
	}

	int t;
	t = gcd ( up, down );

	up /= t;
	down /= t;

	if ( down == 1 ){
	
		down = 0;
		return ;
	
	}

	return ;

}

int main ( ){

	char s[ 7 + 1 ];
	int a;
	int b;
	int c;
	int d;
	int op;//0 - '+', 1 - '-'
	int res_up;
	int res_down;

	while ( scanf ( "%s", s ) != EOF ){
	
		a = s[ 0 ] - '0';
		b = s[ 2 ] - '0';
		c = s[ 4 ] - '0';
		d = s[ 6 ] - '0';
		op = s[ 3 ] == '+'? 0 : 1;

		res_down = b * d / gcd ( b, d );

		if ( op == 0 ){
			
			res_up = a * (res_down / b) + c * (res_down / d);
		
		}
		else {
		
			res_up = a * (res_down / b) - c * (res_down / d);
		
		}

		transform ( res_up, res_down );

		if ( res_down == 0 ){
		
			cout << res_up << endl;
		
		}
		else {
		
			cout << res_up << '/' << res_down << endl;
		
		}

	}

	return 0;

}