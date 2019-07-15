    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int t;
        cin>>t;
        while(t--)
        {
            
            int n;
            cin>>n;
            string s;
            cin>>s;
            int a=0,b=0,ab=0,aba=0,ba=0,bab=0;
            for(int i=0;i<n;i++)
            {
                if(s[i]=='a')
                {
                     a++;
                     aba=max(aba,ab)+1;
                     ba=max(ba,b)+1;
        }
                else
                {
                    b++;
                    bab=max(ba,bab)+1;
                    ab=max(ab,a)+1;
                }
            }
            cout<<max(aba,bab)<<endl;
        }
    }