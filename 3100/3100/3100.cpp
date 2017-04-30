/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		3100.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-04-14					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<cmath>

using namespace std;

int main ( ){

	int n;
	int b;
	int dif_pre;
	int dif;
	int a;
	int i;
	int pre;
	int res;

	cin >> b >> n;

	while ( b != 0 && n != 0 ){
	
		dif_pre = 1000000;//max b
		i = 1;
		res = 0;

		while ( res < b ){
		
			res = pow ( ( double ) i, n );
			dif = abs ( res - b );

			if ( dif == 0 ){
			
				cout << i << endl;
				break;
			
			}
			else if ( res < b ){
			
				dif_pre = dif;
			
			}
			else {
			
				if ( dif_pre == 1000000 ){//the first i just turns out i ^ n > b
				
					cout << i << endl;
				
				}
				else {
				
					if ( dif_pre < dif ){
					
						cout << i - 1 << endl;
					
					}
					else {
					
						cout << i << endl;
					
					}
				
				}

			}

			i ++;
		
		}

		cin >> b >> n;
	
	}

	return 0;

}