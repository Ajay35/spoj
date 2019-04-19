#include<iostream>
#include<algorithm>
using namespace std;

int pos[1010];

int main()
{
	int n,m,k,t;
		scanf("%d%d%d%d",&n,&m,&k,&t);
	
		int i,j;
		int a,b;
		for(i=0;i<k;i++)
		{
			scanf("%d%d",&a,&b);
			pos[i]=(a-1)*m+b;
		}
		sort(pos,pos+k);
		while(t--){
			scanf("%d%d",&a,&b);
			int ans=lower_bound(pos,pos+k,(a-1)*m+b)-pos;
			if(pos[ans]==(a-1)*m+b){
				printf("Waste\n");
				continue;
			}
			ans=(a-1)*m+b-ans;
			ans=ans%3;
			if(ans==0)	printf("Grapes\n");
			else if(ans==1)	printf("Carrots\n");
			else printf("Kiwis\n");
		}
	
	return 0;
}