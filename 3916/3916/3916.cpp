/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		3916.cpp                                                   *
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

	int n;
	int i;
	int d;
	int pre;

	cin >> n;

	while ( n != 0 ){
	
		pre = -1;

		for ( i = 1; i <= n; i ++ ){
		
			cin >> d;

			if ( pre == -1 ){
			
				pre = d;
				cout << d << " "; 
			
			}
			else {
			
				if ( pre == d ){
				
					continue;
				
				}
				else {
				
					cout << d << " ";
					pre = d;
				
				}

			}
		
		}

		cout << "$" << endl;
		cin >> n;
	
	}

	return 0;

}