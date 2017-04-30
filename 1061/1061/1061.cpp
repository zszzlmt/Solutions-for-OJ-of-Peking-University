/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		1061.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-03-29					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<map>
#include<cmath>

using namespace std;

int main ( ){

	int x;
	int y;
	int m;
	int n;
	int l;

	int cnt;
	int dis;
	map< int, bool > rec;

	cin >> x >> y >> m >> n >> l;

	x %= l;
	y %= l;
	cnt = 0;
	dis = x - y;
	rec[ dis ] = true;

	while ( dis != 0 ){
	
		cnt ++;

		x = ( x + m ) % l;
		y = ( y + n ) % l;
		dis = x - y;

		if ( rec.find( dis ) == rec.end( ) ){
		
			rec[ dis ] = true;
		
		}
		else {

			break;
		
		}
	
	}

	if ( dis == 0 ){
	
		cout << cnt << endl;
	
	}
	else {
	
		cout << "Impossible" << endl;
	
	}

	return 0;

}