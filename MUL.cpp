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

string prod(string num1,string num2)
{
	 if(num1.size()==0||num2.size()==0) return "";
        string ret(num1.size()+num2.size()+1,'0');
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        for(int i=0;i<num2.size();i++){
            int dig2=num2[i]-'0';
            int carry=0;
            for(int j=0;j<num1.size();j++){
                int dig1=num1[j]-'0';
                int temp=ret[i+j]-'0';
                int cur=dig1*dig2+temp+carry;
                ret[i+j]=cur%10+'0';
                carry=cur/10;
            }
            ret[i+num1.size()]=carry+'0';
        }
        reverse(ret.begin(),ret.end());
        int pos=ret.find_first_not_of('0',0);
        if(pos<0||pos>=ret.size())
            pos=ret.size()-1;
        return ret.substr(pos,ret.size()-pos);
}

int main(){
      
  fastio();
  inputread();
  int n,m,i,j,t;
  cin>>n;
  for(i=0;i<n;i++)
  {
  	string s,t;
  	cin>>s>>t;
  	cout<<prod(s,t)<<"\n";
  }
  return 0;
}