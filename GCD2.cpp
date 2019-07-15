#include <bits/stdc++.h>
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

int reduceB(int a,string b){int m=0;for(int i=0;i<b.size();i++){m=(m*10+b[i]-'0')%a;}return m;} 
int gcd(int a,int b){if(b==0)return a;return gcd(b,a%b);}

int main()
{
  fastio();
  inputread();
  int n,m,i,j,t;
  cin>>t;
  while(t--)
  {
  	int a;
  	string b;
  	cin>>a>>b;
  	if(b=="0")
  	{
  		cout<<a<<"\n";
  		continue;
  	}
  	else if(a==0)
  	{
  		cout<<b<<"\n";
  		continue;
  	}

  	int c=reduceB(a,b);
  	cout<<gcd(a,c)<<endl;
  }
  return 0;
}