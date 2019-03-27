#include <algorithm>

#include <stdio.h>

#include <bits/stdc++.h>

using namespace std;

int main()

{

int t;

cin>>t;

while(t--)

{

int a,b;

scanf("%d %d",&a,&b);

int g=__gcd(a,b);

int cnt=0;

int i;

for( i=1;i*i<=g;i++)

{

if((i*i)==g)

{

cnt++;

}

else if((g%i)==0)

{

cnt=cnt+2;

}

}

printf("%d\n", cnt);

}

return 0;

}
