#include <bits/stdc++.h>
#define pb push_back
using namespace std;

int main()
{  
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
   	freopen("output.txt","w",stdout);
    #endif
    size_t T;
    cin >> T;
    cin.ignore();
    cin.ignore();
    while ( T-- )
    {
        vector<int> input;
        string s;
        int i;
        while (getline(cin, s) && s != "")
        { 
            stringstream ss(s);
            int missle;

            ss >> missle;
            input.push_back(missle);
        }
        
         vector<int> parent;
  parent.resize(input.size());
  vector<int> active_sequence_ends;
  vector<int> active_sequence_indices;
  
  // Initialize
  parent[0] = -1;
  active_sequence_ends.push_back(input[0]);
  active_sequence_indices.push_back(0);
  
  for(unsigned int i = 1; i < input.size(); i++){
    unsigned int index = lower_bound(active_sequence_ends.begin(), active_sequence_ends.end(), input[i]) - active_sequence_ends.begin();
    
    if (index == active_sequence_ends.size()){
      parent[i] = active_sequence_indices[active_sequence_indices.size() - 1];
      active_sequence_ends.push_back(input[i]);
      active_sequence_indices.push_back(i);
    }
    else{
      if(index == 0)
		    parent[i] = -1;
      else
		    parent[i] = active_sequence_indices[index - 1];
      active_sequence_ends[index] = input[i];
      active_sequence_indices[index] = i;
    }
  }
  cout <<"Max hits: "<< active_sequence_ends.size() << endl;
  int index = active_sequence_indices[active_sequence_indices.size() - 1];
  list<int> result;
  while (index != -1){
    result.push_front(input[index]);
    index = parent[index];
  }
  for (list<int>::iterator i = result.begin(); i != result.end(); i++){
    cout << *i << endl;
  }



        if (T)
            cout << endl;
    }
    return 0;
}
