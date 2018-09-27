#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

int main()
{
    ll t,n;
    cin>>t;
    while(t--)
    {
		cin>>n;
        ll mat[2][2]={{1,1},{1,0}},id[2][2]={{1,1},{0,1}};

        for(int l=1;l<=n-1;l++)
		{
				ll temp[2][2]={{0,0},{0,0}};
                for(int i=0;i<2;i++) 
                {
                    for(int j=0;j<2;j++)
                    { 
                        for(int k=0;k<2;k++)
                        {
                            temp[i][j]+=(mat[i][k]*id[k][j]);
                        }
                    }
                }

			
				for(int i=0;i<2;i++)
				{
					for(int j=0;j<2;j++)
					{
						cout<<temp[i][j]<<" ";
						mat[i][j]=temp[i][j];
					}
					cout<<endl;
				}
		
			
		}
        cout<<mat[0][1]<<endl;
    }
    return 0;
}
