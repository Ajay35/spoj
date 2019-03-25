#include <bits/stdc++.h>
using namespace std;

void compute_lps(string pat,int m,int lps[]){
	int len=0;
	lps[0]=0;
	int i=1;
	while(i<m){
		if(pat[i]==pat[len]){
			len++;
			lps[i]=len;
			i++;
		}
		else{
			if(len!=0) len=lps[len-1];
			else {
				lps[i]=0;
				i++;
			}
		}

	}
}

void kmp(string str,string pat){
	int n=str.size();
	int m=pat.size();

	int lps[m];

	compute_lps(pat,m,lps);
	int i=0,j=0;

	while(i<n){
		if(pat[j]==str[i]){
			i++;
			j++;
		}
		if(j==m){
			cout<<i-j<<endl;
			j=lps[j-1];
		}
		else if(i<n and str[i]!=pat[j]){
			if(j!=0) j=lps[j-1];
			else i++;
		}
	}


}

int main(int argc, char const *argv[])
{
	int s2;
	string str,pat;
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	while(cin>>s2){	
		cin>>pat;
		cin>>str;
		kmp(str,pat);
	}
	return 0;
}