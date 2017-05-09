/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		2853.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-05-09					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

/*time limit exceed, OK, you win*/
//#include<iostream>
//
//using namespace std;
//
//int main ( ){
//
//	int nCase;
//	int k;
//	int n;
//	int i;
//	int j;
//	int len;
//	int sum;
//	int cnt;
//
//	cin >> nCase;
//
//	for ( k = 1; k <= nCase; k ++ ){
//	
//		cin >> n >> n;
//		cnt = 0;
//
//		for ( i = 1; i <= n; i ++ ){
//		
//			len = 0;
//			sum = 0;
//			for ( j = i; j <= n; j ++ ){
//			
//				sum += j;
//				len ++;
//
//				if ( sum == n ){
//				
//					if ( len >= 2 ){
//					
//						cnt ++;
//					
//					}
//
//					break;
//				
//				}
//			
//			}
//		
//		}
//
//		cout << k << " " << cnt << endl;
//	
//	}
//
//	return 0;
//
//}

#include<iostream>

using namespace std;

int main ( ){

	int nCase;
	int k;
	int n;
	int i;
	int cnt;

	cin >> nCase;

	for ( k = 1; k <= nCase; k ++ ){
	
		cin >> n >> n;
		cnt = 0;

		for ( i = 2; ( i * ( i - 1 ) ) / 2 < n; i ++ ){
		
			if ( ( n - ( i * ( i - 1 ) ) / 2 ) % i == 0 ){
			
				cnt ++;
			
			}
		
		}

		cout << k << " " << cnt << endl;
	
	}

	return 0;

}