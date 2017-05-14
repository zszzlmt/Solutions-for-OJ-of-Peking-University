/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		1423.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-05-14					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

//OK, you win, TE
//#include<iostream>
//#include<cmath>
//
//using namespace std;
//
//int main ( ){
//
//	int nCase;
//	int k;
//	int n;
//	int i;
//	double res;
//
//	cin >> nCase;
//
//	for ( k = 1; k <= nCase; k ++ ){
//	
//		cin >> n;
//		res = 0;
//
//		for ( i = 1; i <= n; i ++ ){
//		
//			res += log10 ( ( double ) i );
//		
//		}
//
//		res = ( int ) res + 1;
//
//		cout << res << endl;
//	
//	}
//
//	return 0;
//
//}

#include<iostream>

using namespace std;

int main ( ) {

	int nCase;
	int k;
	int i;
	int n;
	int res;
	double t;

	cin >> nCase;

	for ( k = 1; k <= nCase; k ++ ){

		cin >> n;

		t = 1;
		res = 1;

		for ( i = 2; i <= n; i ++ ){
		
			t *= i;

			if ( t < 10 ){
			
				continue;
			
			} 
			else if ( t < 100 ){
			
				t /= 10;
				res += 1;
				continue;
			
			}
			else if ( t < 1000 ){
			
				t /= 100;
				res += 2;
				continue;
			
			}
			else if ( t < 10000 ){
			
				t /= 1000;
				res += 3;
				continue;
			
			}
			else if ( t < 100000 ){
			
				t /= 10000;
				res += 4;
				continue;
			
			}
			else if ( t < 1000000 ){
			
				t /= 100000;
				res += 5;
				continue;
			
			}
			else if ( t < 10000000 ){
			
				t /= 1000000;
				res += 6;
				continue;
			
			}
			else if ( t < 100000000 ){
			
				t /= 10000000;
				res += 7;
				continue;
			
			}
		
		}

		cout << res << endl;

	}

	return 0;

}