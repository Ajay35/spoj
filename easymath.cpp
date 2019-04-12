#include<iostream>
#define ll long long
using namespace std;

ll gcd(ll a,ll b){
  if(a==0) return b;
  return gcd(b%a,a);
}
ll lcm(ll a,ll b){
  return (a*b)/gcd(a,b);
}
int arr[5];

int go(int id,int cnt,ll me, ll upto){
  if (id == 5){
		if (cnt % 2) return - me / upto;
		else return me / upto;
	}
	ll ret = 0;
	ret += go(id + 1, cnt + 1, me, lcm(upto, arr[id]));
	ret += go(id + 1, cnt, me, upto);
	return ret;
}

int main(int argc, char const *argv[]) {

  int t,n,m,a,d;

  cin>>t;
  while(t--){
      cin >> n >> m >> a >> d;
		  arr[0] = a;
	   	arr[1] = a + d;
		  arr[2] = a + 2 * d;
		  arr[3] = a + 3 * d;
		  arr[4] = a + 4 * d;

		cout << go(0, 0, m, 1) - go(0, 0, n - 1, 1) << endl;

  }

  return 0;
}
