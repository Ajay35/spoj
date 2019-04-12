#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <map>
#include <list>
#include <deque>
#include <math.h>
#include <cstring>
#include <string.h>
#include <iomanip>
#include <stdlib.h>
#include <sstream>
#include <fstream>
using namespace std ;
#define ll long long
void FastInputOutput(){
    ios_base :: sync_with_stdio( 0 ) ;
    cin.tie( 0 ) ;
    cout.tie( 0 ) ;
}
int main(){
    int n , m , c ;
    while ( cin >> n >> m >> c && n != 0 ) {
        int rem = ( c == 1 ) ? 1 : 0 ;
        cout <<  ( ( n - 7 ) * ( m - 7 ) + rem ) / 2 << "\n" ;
    }
    return 0 ;
}
