/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		1068.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-05-13					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

#define LEFT false
#define RIGHT true

int t[ 100 + 1 ];
bool s[ 1000 + 1 ];

int main ( ){

	int nCase;
	int k;
	int n;
	int i;
	int j;
	int stack;
	int idx;
	int leftBefore;
	int cnt;
	int spaceFlag;

	cin >> nCase;

	for ( k = 1; k <= nCase; k ++ ){
	
		cin >> n;

		for ( i = 1; i <= n; i ++ ){
		
			cin >> t[ i ];
		
		}

		idx = 1;
		leftBefore = 0;

		for ( i = 1; i <= n; i ++ ){
		
			if ( leftBefore < t[ i ] ){
			
				for ( j = 1; j <= t[ i ] - leftBefore; j ++ ){
				
					s[ idx ++ ] = LEFT;
				
				}

				leftBefore = t[ i ];
				s[ idx ++ ] = RIGHT;
			
			}
			else {
			
				s[ idx ++ ] = RIGHT;
			
			}
		
		}

		idx --;
		spaceFlag = 0;

		for ( i = 1; i <= idx; i ++ ){
		
			if ( s[ i ] == RIGHT ){
			
				cnt = 0;
				stack = 0;

				for ( j = i - 1; j >= 1; j -- ){
				
					if ( s[ j ] == LEFT ){
					
						if ( stack == 0 ){
						
							if ( spaceFlag != 0 ){
							
								cout << " ";
							
							}
							else {
							
								spaceFlag = 1;
							
							}

							cout << cnt + 1;
							break;
						
						}
						else {
						
							stack --;
							cnt ++;
						
						}
					
					}
					else {
					
						stack ++;
					
					}
				
				}	
			
			}
		
		}

		cout << endl;
	
	}

	return 0;

}