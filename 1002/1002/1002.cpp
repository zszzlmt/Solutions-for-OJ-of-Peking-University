/*******************************************************************************
** Copyright (C), 	2017- , Zach Yeo.                                          *
** File name:		1002.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2017-03-28					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<map>
#include<string>
#include<algorithm>

using namespace std;

map< string, int > m;
string t[ 100000 + 1 ];

void reform ( string & s ){

	int i;
	char c;
	string t;
	int cnt;

	t.clear( );
	cnt = 0;

	for ( i = 0; i < s.size( ); i ++ ){
	
		c = s[ i ];

		switch ( c ){
		
		    case 'A':
		    case 'B':
			case 'C':

				t +='2';

				break;
			case 'D':
		    case 'E':
			case 'F':

				t += '3';

				break;
			case 'G':
		    case 'H':
			case 'I':

				t += '4';

				break;
			case 'J':
		    case 'K':
			case 'L':

				t += '5';

				break;
			case 'M':
		    case 'N':
			case 'O':

				t += '6';

				break;
			case 'P':
		    case 'R':
			case 'S':

				t += '7';

				break;
			case 'T':
		    case 'U':
			case 'V':

				t += '8';

				break;
			case 'W':
		    case 'X':
			case 'Y':

				t += '9';

				break;
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':

				t += c;

				break;
			case '-':

				break;
			default :

				break;

		}

		if ( cnt == 7 ){
		
			break;
		
		}
	
	}

	s = t;

}

bool cmp ( string a, string b ){

	return a.compare( b ) < 0;

}

int main ( ){

	int n;
	int i;
	string s;
	int cnt;

	scanf ( "%d", &n );

	cnt = 0;

	for ( i = 1; i <= n; i ++ ){
	
		s.clear( );
		cin >> s;

		reform ( s );

		if ( m.find( s ) == m.end( ) ){
		
			m[ s ] = 1;
		
		}
		else {
		
			if ( m[ s ] == 1 ){
			
				t[ cnt ++ ] = s;
			
			}

			m[ s ] ++;
		
		}
	
	}

	if ( cnt != 0 ){

		sort ( t, t + cnt );

		for ( i = 0; i < cnt; i ++ ){
	
			cout << t[ i ][ 0 ] << t[ i ][ 1 ] << t[ i ][ 2 ] << '-' << t[ i ][ 3 ] << t[ i ][ 4 ] << t[ i ][ 5 ] << t[ i ][ 6 ] << ' ' << m[ t[ i ] ] << endl;
	
		}

	}
	else {
	
		cout << "No duplicates." << endl;
	
	}

	return 0;

}