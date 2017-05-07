/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		1936.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-05-07					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>

using namespace std;

int main ( ){

	string s1;
	string s2;
	int i;
	int j;
	bool flag;

	while ( cin >> s1 >> s2 ){
	
		i = 0;
		flag = false;

		for ( j = 0; j < s2.size ( ); j ++ ){
		
			if ( s2[ j ] == s1[ i ] ){
			
				i ++;
			
			}

			if ( i == s1.size ( ) ){
			
				flag = true;
				break;
			
			}
		
		}

		if ( flag == true ){
		
			cout << "Yes" << endl;
		
		}
		else {
		
			cout << "No" << endl;
		
		}
	
	}

	return 0;

}