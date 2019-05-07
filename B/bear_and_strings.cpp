#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
    int cnt, prev;
    char s[5005];
    cnt=0;
    prev=-1;
    scanf("%s", s);
    if(strlen(s)>3){ 
    	for(int i=0; i<strlen(s)-3; i++){ 
    		if(s[i]=='b' && s[i+1]=='e' && s[i+2]=='a' && s[i+3]=='r') {
            	cnt+=(strlen(s)-i-3)*(i-prev);
            	prev=i;
        	}
        }
    }
    printf("%d", cnt);
    return 0;
}