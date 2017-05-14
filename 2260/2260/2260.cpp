/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		2260.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-05-14					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int t[ 100 + 1 ][ 100 + 1 ];
int x[ 100 + 1 ];
int y[ 100 + 1 ];

int main ( ){

	int n;
	int i;
	int j;
	int cntx;
	int cnty;
	int xx;
	int yy;

	cin >> n;

	while ( n ){
	
		memset ( x, 0, n * sizeof ( int ) );
		memset ( y, 0, n * sizeof ( int ) );
		cntx = 0;
		cnty = 0;

		for ( i = 1; i <= n; i ++ ){
		
			for ( j = 1; j <= n; j ++ ){
			
				cin >> t[ i ][ j ];
				x[ i ] += t[ i ][ j ];
				y[ j ] += t[ i ][ j ];
			
			}
		
		}

		for ( i = 1; i <= n; i ++ ){
		
			if ( x[ i ] & 1 ){
				
				cntx ++;
				xx = i;
			
			}
			
			if ( y[ i ] & 1 ){
			
				cnty ++;
				yy = i;
			
			}
		
		}

		if ( cntx == 0 && cnty == 0 ){
		
			cout << "OK" << endl;
		
		}
		else if ( cntx == 1 && cnty == 1 ){
		
			cout << "Change bit (" << xx << "," << yy << ")" << endl;
		
		}
		else {
		
			cout << "Corrupt" << endl;
		
		}

		cin >> n;
	
	}

	return 0;

}