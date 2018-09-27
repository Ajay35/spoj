#include<bits/stdc++.h>
using namespace std;
int maxx=INT_MIN;
void check(vector<vector<int>> matrix,vector<vector<bool>>& visited,int h,int w,int i,int j,int *depth)
{
	if(i<0 || j>=w || j<0 || j>=w || visited[i][j]!=false)
	(*depth)++;
        (*depth)>maxx?maxx=(*depth):maxx;
	cout<<"max"<<maxx<<endl;
	visited[i][j]=true;
	if(matrix[i][j]+1==matrix[i][j+1])
		check(matrix,visited,h,w,i,j+1,depth);
	if(matrix[i][j]+1==matrix[i][	
	check(matrix,visited,h,w,i-1,j,depth);
	check(matrix,visited,h,w,i+1,j,depth);
	check(matrix,visited,h,w,i,j-1,depth);
	check(matrix,visited,h,w,i-1,j-1,depth);
	check(matrix,visited,h,w,i-1,j+1,depth);
	check(matrix,visited,h,w,i+1,j-1,depth);
	check(matrix,visited,h,w,i+1,j-1,depth);
}
int main()
{
	int h,w,a,b,c=1;
	string str;
	cin>>h>>w;
	bool flag=true;
	vector<vector<int>> matrix(h,vector<int>(w));
	vector<vector<bool>> visited(h,vector<bool>(w));
while(flag)
{
	for(int i=0;i<h;i++)
	{
		cin>>str;
		for(int j=0;str[j];j++)
		{
			matrix[i][j]=(int)str[j];
			visited[i][j]=false;
		}
	}
	cin>>a>>b;
	int depth=1;
	
	check(matrix,visited,h,w,0,0,&depth);		
	cout<<"Case "<<c++<<": "<<maxx<<endl;
	if(a==0 && b==0)
		flag=false;
}
	return 0;
}
