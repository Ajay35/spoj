#include <iostream>
#include <cstdio>
#include <cstring>
#include <deque>
#include <cstdlib>
#include <map>
#include <set>
#include <functional>
#include <algorithm>
#include <queue>
#define FOR(i, a, b) for(int i=a; i<b; i++)
#define RFOR(i, a, b) for(int i=a-1; i>=b; i--)
inline int MIN(int a, int b) { return (a<b)?a:b; }
inline int MAX(int a, int b) { return (a<b)?b:a; }
inline int ABS(int a) { if (a<0) a=-a; return a; }

typedef long long Int;
using namespace std;

class node
{
public:
 int a;
 string b;
 node(int p, string q)
 {
  a = p;
  b = q;
 }
};

bool operator<(const node &a, const node &b)
{
 return a.b>b.b;
}

int main()
{
 int t, n;
 scanf("%d", &t);
 while (t--)
 {
  int n;
  scanf("%d", &n);
  getchar();
  map<string, int> entry;
  string s;
  FOR(i, 0, n)
  {
   std::getline( std::cin, s);
   entry[s] += 1;
  }
  priority_queue< node > q;
  for (std::map<string,int>::iterator it=entry.begin(); it!=entry.end(); ++it)
  {
   q.push(node(it->second, it->first));
  }
  while (!q.empty())
  {
   node p = q.top();
   q.pop();
   cout << p.b << " " << p.a << endl;
  }
  printf("\n");
 }
 return 0;
}
