#include<iostream>
#include<cstring>
#include<cstdio>
#include<set>
#include<algorithm>
#include<vector>
#include<string>
#include<cstdlib>
#define inf 0xfffffff
#define CLR(a,b) memset((a),(b),sizeof((a)))
 using namespace std;

 int const nMax = 1000;
int const base = 10;
typedef int LL;
typedef pair<LL,LL> pij;

struct Int
{
    int a[nMax];
    int len;
    void clear()
    {
        CLR(a,0);
        len=0;
        return ;
    }
    Int (int n=0)
    {
        clear();
        while(n){
            a[len++]=n%base;
            n/=base;
        }
    }
    bool operator < (const Int& b)const {
        if(len<b.len)return true;
        if(len>b.len)return false;
        for(int i=len-1;i>=0;i--){
            if(a[i]<b.a[i])return true;
            if(a[i]>b.a[i])return false;
        }
        return false;
    }
    Int operator +(Int&b)
    {
        Int c;
        c.len=max(len,b.len);
        int d=0;
        for(int i=0;i<c.len;i++){
            c.a[i]=(a[i]+b.a[i]+d)%base;
            d=(a[i]+b.a[i]+d)/base;
        }
        while(d)
        {
            c.a[c.len++]=d%base;
            d/=base;
        }
        return c;
    }
    bool operator ==(Int&b)
    {
    	if(len!=b.len)
    		return 0;
    	for(int i=0;i<len;i++)
    	{
    		if(a[i]!=b.a[i])
    			return 0;
    	}
    	return 1;
    }
    Int operator -(Int&b)
    {
        Int c;
        c.len=len;
        int d=0;
        int f;
        for(int i=0;i<c.len;i++){
            c.a[i]=a[i]-b.a[i]-d;
            d=0;
            if(c.a[i]<0){
                c.a[i]+=base;
                d++;
            }
        }
        while(c.a[c.len-1]==0&&c.len>0)
        {
            c.len--;
        }
        if(c.len==0)c.len=1;
        return c;
    }
    Int operator *(int &b)
    {
        Int c;
        int d;
        c.len=len;
        for(int i=0;i<c.len;i++){
            c.a[i]=(a[i]*b+d)%base;
            d=(a[i]*b+d)/base;
        }
        while(d){
            c.a[c.len++]=d%base;
            d/=base;
        }
        return c;
    }
    Int operator *(Int & b){
        Int c;
        for(int i=0;i<len;i++){
            for(int j=0;j<b.len;j++){
                c.a[i+j]+=a[i]*b.a[j];
            }
        }
        c.len=len+b.len-1;
        int d=0;
        int f;
        for(int i=0;i<c.len;i++){
            f=d+c.a[i];
            c.a[i]=f%base;
            d=f/base;
        }
        while(d){
            c.a[c.len++]=d%base;
            d/=base;
        }
        return c;
    }
    
    void output()
    {
        for(int i=len-1;i>=0;i--)printf("%d",a[i]);
        printf("\n");
        return ;
    }
    string Int2Str()
    {
        string ans;
        ans.clear();
        for(int i=len-1;i>=0;i--){
            ans+=('0'+a[i]);
        }
        return ans;
    }
};
 
Int exp(Int b,int n)
{
    if(n==0)return Int(1);
    Int c=exp(b,n/2);
    c=c*c;
    if(n%2==1)return c*b;
    return c;
}
void fastio()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
}
void input()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
}

int main()
{
	int n,k,m,t,T;
	fastio();
	input();	
	cin>>T;
	while(T--)
	{
		t=0;
		cin>>n>>k>>m;
		Int N(n);
    	Int K(k);
    	Int M(m);
    	Int X(n);
		int h=1;
		while(((exp(K,h))*X)<M)
		{
			//cout<<N.Int2Str()<<endl;
			N=(exp(K,h))*X;
			h++;
			t++;
		}
		if(((exp(K,h))*X)==M)
			t++;
		cout<<t<<"\n";
	}
}