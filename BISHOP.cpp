#include<bits/stdc++.h>
using namespace std;

string subtract(string str1,string str2){
	string str = ""; 
  
    int n1 = str1.length(), n2 = str2.length(); 
  
    reverse(str1.begin(), str1.end()); 
    reverse(str2.begin(), str2.end()); 
      
    int carry = 0; 
  
   
    for (int i=0; i<n2; i++){ 
   		int sub = ((str1[i]-'0')-(str2[i]-'0')-carry);
        if(sub<0){ 
            sub=sub+10; 
            carry=1; 
        } 
        else carry = 0;
        str.push_back(sub + '0'); 
    } 
    for(int i=n2; i<n1; i++){ 
        int sub = ((str1[i]-'0') - carry);
        if(sub<0){ 
            sub=sub+10; 
            carry=1; 
        }
        else carry=0;  
        str.push_back(sub + '0'); 
    } 
    reverse(str.begin(), str.end());  
    return str; 
}

string multiply(string num1,string num2){
	int n1 = num1.size(); 
    int n2 = num2.size(); 
    if (n1 == 0 || n2 == 0) 
    return "0"; 
   
   
    vector<int> result(n1 + n2, 0);
    int i_n1 = 0;  
    int i_n2 = 0;  
    for (int i=n1-1; i>=0; i--){ 
        int carry = 0; 
        int n1 = num1[i] - '0'; 
   
       
        i_n2 = 0;  
           
        for (int j=n2-1; j>=0; j--){ 
            int n2 = num2[j] - '0';         
            int sum = n1*n2 + result[i_n1 + i_n2] + carry; 
            carry = sum/10; 
            result[i_n1 + i_n2] = sum % 10;
            i_n2++; 
        } 
   
        if (carry > 0) 
            result[i_n1 + i_n2] += carry;
        i_n1++; 
    } 
   
    int i = result.size() - 1; 
    while (i>=0 && result[i] == 0) 
    i--;
    if (i == -1) 
    return "0"; 
   
    // generate the result string 
    string s = ""; 
       
    while (i >= 0) 
        s += std::to_string(result[i--]); 
   
    return s; 
}


int main(){
	string n;
	while(cin>>n){
		if(n=="0") cout<<"0"<<endl;
		else if(n=="1") cout<<"1"<<endl;
		else{
			string temp=subtract(n,"1");
			cout<<multiply(temp,"2")<<endl;
		}
	}
	return 0;
}