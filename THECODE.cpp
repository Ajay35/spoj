/**
*	  Name: Ajay
*	  Institute: IIITH 
*/

#include<bits/stdc++.h>
using namespace std;

void fastio()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
}
void input()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
}
string a[1001];
int n,d;

void FindSetCombination(vector<set<int>>& input, set<int>& target, vector<set<int>>& output)
{
    set<int> full;
    for(auto it: input){ 
        full.insert(it.begin(), it.end());
    }

    if(!includes(full.begin(), full.end(), target.begin(), target.end())) 
        return;
    

    for(int i = input.size() - 1; i > 0; --i)
    {
        vector<bool> vec(input.size(), false);
        fill(vec.begin() + i, vec.end(), true);
        set<int> comb;

        do{
            for(int j = 0; j < vec.size(); ++j){
                if(vec[j]){
                    comb.insert(input[j].begin(),input[j].end());
                }
            }

            if(includes(comb.begin(), comb.end(), target.begin(), target.end())){
                for(int j = 0; j < vec.size(); ++j){
                    if(vec[j]){
                        output.push_back(input[j]);
                    }
                }
                return;
            }
            comb.clear();

        }while(next_permutation(vec.begin(), vec.end()));
    }
}

int main(int argc, char* argv[])
{
	fastio();
	input();
	int t,n,d,i;
	cin>>t;
	set<int> target={0,1,2,3,4,5,6,7,8,9};
	while(t--)
	{
		vector<set<int>> all_sets;
		
		cin>>n>>d;
		for(i=0;i<n;i++)
		{
			set<int> temp;
			for(i=0;i<d;i++)
			{
				char c;
				cin>>c;
				temp.insert(c-'0');
			}
			all_sets.push_back(temp);
		}
	  
	    vector<set<int>> output;
	    FindSetCombination(all_sets,target,	);
	    cout << "output " << endl;
	    for(auto it: output){
	        copy(it.begin(), it.end(), ostream_iterator<int>(cout, " "));
	        cout << endl;
	    }
	}

    return 0;
}
