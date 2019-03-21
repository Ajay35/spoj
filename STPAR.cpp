#include<bits/stdc++.h>
using namespace std;

int n;

int main(int argc, char const *argv[])
{
	while(true){
		stack<int> st;
		cin>>n;
		if(n==0) break;
		int arr[n];
		for(int i=0;i<n;i++) cin>>arr[i];
		int i=0,j=1;
		while(i<n){
			if(arr[i]==j){
				i++;
				j++;
				continue;
			}
			else if(!st.empty() and j==st.top()){
				j++;
				st.pop();
			}
			else{
				st.push(arr[i]);
				i++;
			}
			
		}
		if(j==n and st.empty()){ 
			cout<<"yes"<<endl;
			continue;
		}
		else{
			while(!st.empty() and j==st.top()){
			 st.pop();
			 j++;
			}
		}
		if(st.empty()){cout<<"yes"<<endl;}
		else cout<<"no"<<endl;
	}
	return 0;
}