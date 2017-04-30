/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		3751.cpp                                                   *
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

int stringtoint ( string s ){

	int res;
	int i;

	res = 0;

	for ( i = 0; i < s.size ( ); i ++ ){
	
		res *= 10;
		res += s[ i ] - '0';
	
	}

	return res;

}

int main ( ){

	string raw;
	string y;
	string m;
	string d;
	string h;
	string min;
	string s;
	int n;
	int i;
	int hh;
	int flag;

	cin >> n;

	for ( i = 1; i <= n; i ++ ){
	
		raw.clear ( );
		cin >> raw;

		y = raw.substr ( 0, 4 );
		m = raw.substr ( 5, 2 );
		d = raw.substr ( 8, 2 );

		h = raw.substr ( 11, 2 );
		min = raw.substr ( 14, 2 );
		s = raw.substr ( 17, 2 );

		hh = stringtoint ( h );
		if ( hh >= 12 ){
		
			flag = 1;//pm
			if ( hh != 12 ){
			
				hh -= 12;
			
			}

		}
		else {
		
			flag = 0;//am
			if ( hh == 0 ){
			
				hh = 12;
			
			}

		}

		cout << m << "/" << d << "/" << y << "-";
		printf ( "%02d", hh );
		cout << ":" << min << ":" << s;
		if ( flag == 1 ){
		
			cout << "pm" << endl;
		
		}
		else {
		
			cout << "am" << endl;
		
		}

	}

	return 0;

}