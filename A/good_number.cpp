#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll n,k,c=0,t;
    cin>>n>>k;

    while(n--){

        cin>>t;
        bool found[k+1];
        memset(found,0,sizeof(found));
        while(t>0){
            found[t%10]=1;
            t=t/10;
        }
        int t_c=0;
        for(int i=0;i<=k;i++){
          if(found[i]==1){
            t_c++;
            //printf("found\n");
          }
        }
        //printf("%d t_c\n",t_c);
        if(t_c==k+1) c++;
    }
    cout<<c;
    return 0;
}
