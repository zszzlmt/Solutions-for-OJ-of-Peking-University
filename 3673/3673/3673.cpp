/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		3673.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-04-14					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int main ( ){

	int a;
	int b;
	char c;

	a = 0;
	b = 0;

	while ( ( c = getchar ( ) ) != ' ' ){
	
		a += c - '0';
	
	}

	while ( ( c = getchar ( ) ) != '\n' ){
	
		b += c - '0';
	
	}

	cout << a * b << endl;

	return 0;

}