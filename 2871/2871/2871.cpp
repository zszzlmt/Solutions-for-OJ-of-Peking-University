/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		2871.cpp                                                   *
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

	double pre;
	double now;

	cin >> pre;

	if ( pre == 999 ){
	
		cout << "End of Output" << endl;
		return 0;

	}

	cin >> now;

	while ( now != 999 ){
	
		printf ( "%.2lf\n", now - pre );

		pre = now;
		cin >> now;
	
	}

	cout << "End of Output" << endl;

	return 0;

}