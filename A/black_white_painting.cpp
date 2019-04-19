#include <stdio.h>
#include <iostream>
using namespace std ;
#define ll long long

int main(){
    int n , m , c ;
    while ( cin >> n >> m >> c && n != 0 ) {
        int rem = ( c == 1 ) ? 1 : 0 ;
        cout <<  ( ( n - 7 ) * ( m - 7 ) + rem ) / 2 << "\n" ;
    }
    return 0 ;
}
