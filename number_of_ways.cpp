#include <iostream>
#include <math.h>

using namespace std;

int a[1000010];
long long cnt[1000010];

int main()
{
    ios::sync_with_stdio(0);
    int n;
    cin >> n;
    long long s = 0;
    long long    ans=0;
    for(int i = 0 ; i < n ; ++i)
    {
        cin >> a[i];
        s += a[i];
    }
    if (s % 3 != 0)
        cout << "0\n";
    else {
          s=s/3;
          long long temp=0;
          long long ct=0;

          for(int i=0;i<n-1;i++){
            temp+=a[i];
            if(temp==2*s)
              ans+=ct;
            if(temp==s) ct++;
          }
          cout << ans << "\n";
    }
    return 0;
}
