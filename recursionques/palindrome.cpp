#include<iostream>
using namespace std;


bool ispalindrome(string& s,int start, int end){
    if(start>=end){
        return true;
    };
    if(s[start] != s[end] ){
        return false;
    };

    return ispalindrome(s, start+1,end-1);
};

int main(){
    string s;

    cout<<"enter the string : ";
    cin>>s;
    int n = s.length();
    if(ispalindrome(s,0,n-1)){
        cout<<"palindrome";
    }
    else{    
        cout<<"not palindrome";
    
    };

    return 0;
}