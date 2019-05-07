
#include <bits/stdc++.h>
#define ll long long
#define inf std::numeric_limits<int>::max();

using namespace std;



int main()
{
		
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int i,j,k,l,n,m;
char s1[210000],s2[210000];

   while(scanf("%s",s1)!=EOF)
   {
   	 scanf("%s",s2);
   	 int len1=strlen(s1);
   	 int len2=strlen(s2);
   	 l=0;
   	 k=0;
	 ll sum=0;
   	 for(i=0;i<len2-len1+1;i++)
   	 {
   	 	if(s2[i]=='0')
   	 	l++;
   	 	else if(s2[i]=='1')
   	 	k++;
	 }
	 if(s1[0]=='0')
	 sum+=k;
	 else if(s1[0]=='1')
	 sum+=l;
   for(i=1;i<len1;i++)
   {
      if(s2[i-1]=='0') l--;
      else if(s2[i-1]=='1')  k--;
      if(s2[len2-len1+i]=='0')  l++;
      else if(s2[len2-len1+i]=='1')  k++; 
      if(s1[i]=='1') sum+=l;
	  else if(s1[i]=='0') sum+=k;
	}
	cout<<sum;
   }
   return 0;
 } 

