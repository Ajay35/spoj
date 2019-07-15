/**
*	  Name: Ajay Subhash Jadhav
*	  Institute: International Institute of Technology Hyderabad 
*/

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <deque>
#include <vector>
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <queue>
#include <map>
#include <set>
#include <ctime>
#include <string.h>
#define LL long long
#define inf 0x7fffffff
#define mod 1000000007
#define pb push_back
#define ppi pair<int,int>
#define vi vector<int>
#define vii vector<ppi>
#define vll vector<LL>
#define mp make_pair
using namespace std;

void fastio()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
}
void inputread()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
}


string subtract(string str1, string str2) 
{ 
 
   
  
    string str = ""; 
  
    int n1 = str1.length(), n2 = str2.length(); 
    reverse(str1.begin(), str1.end()); 
      
    int carry = 0; 
    for (int i=0; i<n2; i++) 
    { 
     	 int sub = ((str1[i]-'0')-(str2[i]-'0')-carry);   
        if (sub < 0) 
        { 
            sub = sub + 10; 
            carry = 1; 
        } 
        else
            carry = 0; 
  
        str.push_back(sub + '0'); 
    } 
    for (int i=n2; i<n1; i++) 
    { 
        int sub = ((str1[i]-'0') - carry); 
          
        if (sub < 0) 
        { 
            sub = sub + 10; 
            carry = 1; 
        } 
        else
            carry = 0; 
              
        str.push_back(sub + '0'); 
    } 
  
    reverse(str.begin(), str.end()); 
  
    return str; 
}

int main(){
      
  fastio();
  inputread();
  int n,m,i,j,t;
  cin>>t;
  while(t--)
  {
  	string s;
  	cin>>s;
  	if(s.size()==1 || s[s.size()-1]=='9')
  		cout<<s<<"\n";
  	else if(s[s.size()-1]=='0')
  	{
  		s=subtract(s,"1");
  		while(s[0]=='0' && s.size()>1)
  			s=s.substr(1);
  		cout<<s<<endl;
  	}
  	else if(s[s.size()-1]!='9')
  	{
  		string org=s;
	  	while(s[s.size()-1]!='9')
  			s=subtract(s,"1");
  		
  		while(s[0]=='0' && s.size()>1)
  			s=s.substr(1);
  		if(org.size()==s.size())
  			cout<<s<<endl;
  		else
  			cout<<org<<endl;
  	}
  }
  return 0;
}