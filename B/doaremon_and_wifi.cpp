
#include <bits/stdc++.h>
#define ll long long
#define inf std::numeric_limits<int>::max();

using namespace std;

string s1,s2;
int n;

int solve(int i,int c,int a){
	if(i==n && a==c)return 1;
	if(i==n) return 0;
	int total=0;
	//printf("%d %d %d %d \n",c,a,i,(int)s1.size());
	if(s2[i]=='?') return total+=solve(i+1,c-1,a)+solve(i+1,c+1,a); 
	else if(s2[i]=='+') return total+=solve(i+1,c+1,a);
	else if(s2[i]=='-') total+=solve(i+1,c-1,a);
	return total; 
}


int main(){
	
	
	cin>>s1>>s2;
	n=s1.size();
	int a,i,c,que,pos_states;
	que=0;
	c=0;
	a=0;

	for(i=0;i<n;i++){
		if(s1[i]=='+') a++;
		else if(s1[i]=='-') a--;
		if(s2[i]=='?') que++;
	}
	int ones=solve(0,c,a);
	
	if(que>0)pos_states=(1<<que);
	else pos_states=1;
	cout<<fixed;
	cout<<setprecision(10);
	cout<<(double)((double)ones/(double)pos_states);
	return 0;
}
