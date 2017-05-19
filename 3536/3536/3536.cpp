/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		3536.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-05-19					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<cmath>

#define MAXINIT 9999999

using namespace std;

int main ( ){

	int v;
	int i;
	int j;
	int k;
	int s;
	int root1;
	int root2;
	int tmp;
	int minI;
	int minJ;
	int minK;
	int minS;

	while ( cin >> v ){
	
		minS = MAXINIT;
		root1 = sqrt ( ( double ) v );

		for ( i = 1; i <= root1; i ++ ){
		
			if ( v % i == 0 ){
			
				tmp = v / i;
				root2 = sqrt ( ( double ) tmp );

				for ( j = 1; j <= root2; j ++ ){
				
					if ( tmp % j == 0 ){
					
						k = tmp / j;
						s = 2 * ( i * j + j * k + i * k );

						if ( s < minS ){
						
							minI = i;
							minJ = j;
							minK = k;
							minS = s;
						
						}
					
					}	
				
				}
			
			}
		
		}	

		cout << minI << " " << minJ << " " << minK << endl;
	
	}

	return 0;

}