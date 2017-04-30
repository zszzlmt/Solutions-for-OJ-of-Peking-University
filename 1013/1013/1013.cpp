/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		1013.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-04-09					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>

using namespace std;

int real_coin[ 12 + 1 ] = { 0 };
int may_fake[ 12 + 1 ] = { 0 };

void confirm ( string l, string r ){

	int i;

	for ( i = 0; i < l.size ( ); i ++ ){
	
		real_coin[ l[ i ] - 'A' ] = 1;
		real_coin[ r[ i ] - 'A' ] = 1;
	
	}

}

void suspect ( string up, string down ){

	int i;

	for ( i = 0; i < up.size ( ); i ++ ){
	
		may_fake[ up[ i ] - 'A' ] --;
		may_fake[ down[ i ] - 'A' ] ++;
	
	}

}

int main ( ){

	int i;
	int n;
	int res[ 3 ];//0 - up, 1 - down, 2 - even
	string left[ 3 ], right[ 3 ], result[ 3 ];

	cin >> n;

	for ( i = 1; i <= n; i ++ ){
	
		int j;

		for ( j = 0; j < 13; j ++ ){
		
			real_coin[ j ] = 0;
			may_fake[ j ] = 0;
		
		}

		for ( j = 0; j < 3; j ++ ){
		
			cin >> left[ j ] >> right[ j ] >> result[ j ];

			if ( result[ j ].compare ( "even" ) == 0 ){
			
				res[ j ] = 2;
			
			}
			else {
			
				if ( result[ j ].compare ( "up" ) == 0 ){
				
					res[ j ] = 0;
				
				}
				else {
				
					res[ j ] = 1;
				
				}
			
			}

			if ( res[ j ] == 2 ){
			
				confirm ( left[ j ], right[ j ] );
			
			}
			else{
			
				if ( res[ j ] == 0 ){

					suspect ( right[ j ], left[ j ] );

				}
				else {
				
					suspect ( left[ j ], right[ j ] );
				
				}

			}
		
		}

		int fake;
		int min;
		min = 0;

		for ( j = 0; j < 13; j ++ ){
		
			if ( ( may_fake[ j ] >= min || may_fake[ j ] * ( -1 ) >= min ) && real_coin[ j ] == 0 ){
			
				fake = j;
				min = may_fake[ j ] > 0 ? may_fake[ j ] : may_fake[ j ] * ( -1 ); 
			
			}
		
		}

		char fake_c;
		fake_c = fake + 'A';
		int fake_weigh;//0 - light, 1 - heavy

		for ( j = 0; j < 3; j ++ ){
		
			if ( res[ j ] != 2 ){
			
				if ( left[ j ].find ( fake_c ) != -1 ){
				
					if ( res[ j ] == 0 ){//up
					
						fake_weigh = 1;
					
					}
					else{
					
						fake_weigh = 0;
					
					}

					break;
				
				}
				else if ( right[ j ].find ( fake_c ) != -1 ){
				
					if ( res[ j ] == 0 ){//up
					
						fake_weigh = 0;
					
					}
					else{
					
						fake_weigh = 1;
					
					}

					break;
				
				}
			
			}

		}

		cout << fake_c << " is the counterfeit coin and it is ";

		if ( fake_weigh == 0 ){
		
			cout << "light." << endl;
		
		}
		else{
		
			cout << "heavy." << endl;

		}
	
	}

	return 0;

}