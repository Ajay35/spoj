#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,h,p,a;
	scanf("%d",&t);
	while(t--)
	{
		int i=1,j=1;
		bool attack=true;
		scanf("%d%d%d",&h,&p,&a);
		while(true)
		{
			if(attack)
			{
				h=h-(p*j++);

				if(h<=0)
					break;
				attack=false;
			}
			else
			{
				h+=a;
				attack=true;
			}
			i++;
			
		}
		printf("%d\n",i);
	}
	return 0;
}
