#include <bits/stdc++.h>
#define mp make_pair
using namespace std;

#define MAXLEN 1000
char str[MAXLEN+1];

pair<int,string> dp[MAXLEN][MAXLEN];
bool dpVis[MAXLEN][MAXLEN];

pair<int,string> solve(int st, int end)
{
    pair<int,string> &ans = dp[st][end];


    if(dpVis[st][end]) 
    	return ans;

    dpVis[st][end]=true;

    if(st == end)
        ans = mp(1, string(1, str[st]));

    else if(st + 1 == end)
    {
        if(str[st] == str[end]) 
        	ans = mp(2, string(2, str[st]));
        else 
        	ans = mp(1, string(1, min(str[st], str[end])));
    }
    else
    {
        if(str[st] == str[end])
        {
            ans = solve(st + 1, end - 1);
            ans.first += 2;
            ans.second = str[st] + ans.second + str[end];
        }
        else
        {
             pair<int,string> rcut = solve(st, end - 1) ;
             pair<int,string> lcut = solve(st + 1, end) ;
            if(rcut.first == lcut.first)
            {
                ans = min(rcut, lcut);
            }
            else
            {
                ans = max(rcut, lcut);
            }
        }
    }
    return ans;
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    while(cin>>str)
    {
        int len = strlen(str);
        memset(dpVis,false,sizeof dpVis);
        pair<int,string> ans = solve(0, len - 1);
        printf("%s\n", ans.second.c_str());
    }
}
