
#include<iostream>
#include<algorithm>
struct activity
{
	int first,second;
}act[100000];
bool val(struct activity a,struct activity b)
{
	if (a.second == b.second)
		return a.first<b.first;
	return a.second<b.second;
}
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,end=-1,count=0,i;
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%d%d",&act[i].first,&act[i].second);
		std::sort(act,act+n,val);
		for(i=0;i<n;i++)
		{
			if(act[i].first>=end)
			{
				count += 1;
				end = act[i].second;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}