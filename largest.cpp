#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,area,maxx=INT_MIN;
	cin>>n;
	int h[n];
	for(int i=0;i<n;i++)
	{
		cin>>h[i];
	}
	for(int i=0;i<n;i++)
	{
		int j=i,k=i,jc=0,kc=0;
		int tmp=h[i];
		while(j>0)
		{

			if(tmp<=h[j-1])
			{
				//cout<<"h[j]:"<<h[j]<<" h[j-1]:"<<h[j-1]<<endl;
				j--;
				jc++;
			}
			else
			{
				break;
			}

		}
		while(k<n-1)
		{
			if(tmp<=h[k+1])
			{
				//cout<<"h[k]:"<<h[k]<<" h[k-1]:"<<h[k+1]<<endl;
				k++;
				kc++;
			}
			else
			{
				break;
			}

		}	
		//cout<<"jc:"<<jc<<" kc:"<<kc<<endl;
		area=h[i]*(jc+kc+1);
		(maxx<area)?maxx=area:maxx;
	}
	cout<<maxx<<endl;
	return 0;
}
