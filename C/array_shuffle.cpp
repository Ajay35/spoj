#include <iostream>

using namespace std;

void fastio()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
void inputread()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}

int main()
{
	fastio();
	inputread();
	int t;
	cin >>t;
	while(t--) {
		string S;
		cin >> S;
		int curr_length = 0, max_length = 0;
		int length = S.length();
		int numb_r = 0, numb_k = 0;
		for(int i = 0; i < length; i++) {
			if (S[i] == 'K')
			{
				++numb_k;
				++curr_length;
				if(max_length < curr_length)
					max_length = curr_length;
			}
			else
			{
				++numb_r;
				if(max_length < curr_length)
					max_length = curr_length;
				curr_length--;
				if(curr_length < 0)
					curr_length = 0;
			}
		}
		if (numb_k == 0)
			max_length = -1;
		cout << numb_r + max_length << endl;
	}
	return 0;
}