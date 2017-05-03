/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		3981.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-05-03					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>

using namespace std;

int main ( ){

	string s;
	int pos;

	while ( getline ( cin, s ) ){
	
		while ( ( pos = s.find ( "you" ) ) != -1 ){
		
			s.replace ( pos, 3, "we" );
		
		}

		cout << s << endl;
		s.clear ( );
	
	}

	return 0;

}