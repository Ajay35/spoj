#include<bits/stdc++.h>
using namespace std;
int a,b,c;
int fun(int x,int y,int c,int count)
{
    cout<<"x:"<<x<<" "<<"y:"<<y<<endl;
    if(x==c ||y==c)
        return count;
    if(x==0 && y==0)
    {
        return fun(x+a,y+b,c,++count);
    }
    if(x==0 && y>0 && y==b)
    {
        return fun();
    }
}
int main()
{
    int t,count=0;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if((c>a && c>b) || (c% __gcd(a,b)!=0)) 
            cout<<-1<<endl;
        else
            cout<<fun(0,0,c,count)<<endl;
    }
    return 0;
}