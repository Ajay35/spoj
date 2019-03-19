#include<bits/stdc++.h>
#define ll long long
using namespace std;
string addition(string str1,string str2){

    
    if (str1.length() > str2.length())   swap(str1, str2); 
    string str = ""; 
    int n1 = str1.length(), n2 = str2.length(); 
    reverse(str1.begin(), str1.end()); 
    reverse(str2.begin(), str2.end()); 
  
    int carry = 0; 
    for (int i=0; i<n1; i++){
        int sum = ((str1[i]-'0')+(str2[i]-'0')+carry); 
        str.push_back(sum%10 + '0'); 
        carry = sum/10; 
    } 
    for (int i=n1; i<n2; i++){ 
        int sum = ((str2[i]-'0')+carry); 
        str.push_back(sum%10 + '0'); 
        carry = sum/10; 
    } 
    if (carry) str.push_back(carry+'0'); 
    reverse(str.begin(), str.end());  
    return str; 
}
string division(string number,int divisor){
	string ans;
    int idx = 0; 
    int temp=number[idx]-'0'; 
    while (temp < divisor) 
       temp = temp * 10 + (number[++idx] - '0'); 
    
    while (number.size() > idx) 
    { 
        ans += (temp / divisor) + '0'; 
        temp = (temp % divisor) * 10 + number[++idx] - '0'; 
    } 
      
    if (ans.length() == 0) 
        return "0"; 
      
    return ans; 

}
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

int main(){
	string t,m;
	for(int i=0;i<10;i++){
		cin>>t>>m;
		string temp=subtract(t,m);
		string ans=division(temp,2);
		cout<<addition(ans,m)<<endl;
		cout<<ans<<endl;
	}
	return 0;
}