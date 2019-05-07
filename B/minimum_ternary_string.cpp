
#include <bits/stdc++.h>
#define ll long long
#define inf std::numeric_limits<int>::max();

using namespace std;

bool cmp(char c1,char c2){
	if(c1=='1' && c2=='0') return c1<c2;
	if(c1=='2' && c2=='1') return c1<c2;
	return false; 
}


int main(){
		
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	string a;
	cin>>a;
	
	int i,j,c1=0,c2=0,f=1;
    for(i=0;i<a.size();i++)
    {
        if(f&&a[i]=='0')
            c1++;
        else if(a[i]=='1')
            c2++;
        else if(f&&a[i]=='2')
        {
            f=0;
            j=i;
        }
    }
    for(i=0;i<c1;i++)
        cout<<'0';
    for(i=0;i<c2;i++)
        cout<<'1';
    for(i=j;i<a.size();i++)
        if(a[i]!='1')
            cout<<a[i];
    cout<<endl;

	return 0;
}
