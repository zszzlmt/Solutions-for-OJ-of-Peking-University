/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		1012.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-04-09					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

//calculate the table

//#include<iostream>
//
//using namespace std;
//
//int num[ 26 + 1 ] = { 0 };
//
//int get_next ( int * num, int & start, int total, int m ){
//
//	int i;
//
//	for ( i = 1; i <= m; i ++ ){
//	
//		start ++;
//		if ( start > total ){
//		
//			start = 1;
//		
//		}
//
//		while ( num[ start ] != 0 ){
//		
//			start ++;
//			if ( start > total ){
//			
//				start = 1;
//			
//			}
//		
//		}
//
//	}
//
//	return start;
//
//}
//
//int main ( ){
//
//	int k;
//	int i;
//	int cnt;
//	int start;
//	int total;
//	int m;
//	int flag;//0 - fail, 1 - success
//
//	cin >> k;
//
//	while ( k != 0 ){
//
//		total = k * 2;
//		m = 1;
//
//		while ( true ){
//		
//			cnt = 0;
//			flag = 1;
//			start = 0;
//			for ( i = 1; i <= total; i ++ ){
//			
//				num[ i ] = 0;
//			
//			}
//
//			while ( cnt < k ){
//			
//				int out;
//
//				out = get_next ( num, start, total, m );
//
//				if ( out <= k ){
//				
//					flag = 0;
//					break;
//				
//				}
//				else {
//				
//					num[ out ] = 1;
//					cnt ++;
//				
//				}
//			
//			}
//
//			if ( flag == 1 ){
//			
//				cout << m << endl;
//				break;
//			
//			}
//
//			m ++;
//		
//		}
//
//		cin >> k;
//	
//	}
//
//	return 0;
//
//}

//print the table

#include<iostream>

using namespace std;

int main ( ){

	const int t[] = { 0, 2, 7, 5, 30, 169, 441, 1872, 7632, 1740, 93313, 459901, 1358657, 2504881, 1245064 };

	int k;

	cin >> k;

	while ( k != 0 ){
	
		cout << t[ k ] << endl;
		
		cin >> k;
	
	}

	return 0;

}