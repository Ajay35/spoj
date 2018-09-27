#include<bits/stdc++.h>
using namespace std;
int main()
{
	int q,k,value;
	string key;
	map<string,long long> m;
	cin>>q>>k;
	for(int i=0;i<q;i++)
	{
		cin>>key>>value;
		if(!m.insert(std::make_pair(key,value)).second) 
		{
 			m[key]+=value;
		}
	}
 	vector<long long> v;
     
	for(map<string,long long>::iterator it=m.begin();it!=m.end();++it)
	{
	  v.push_back(it->second);
	}
	std::sort(v.begin(),v.end(),greater<long long>());
	
	vector<long long>::iterator it;
	int c=1;
	long long sum=0;
	for(it=v.begin();it!=v.end() && c<=k;++it)
	{
	  c++;
	  sum+=*it;
	}
	cout<<sum<<endl;
	return 0;
}
	
