#include <iostream>

using namespace std;


int  sumofnaturalnumber(int n){
  if(n==0){
    return 0;
  }
  return n + sumofnaturalnumber(n-1);
};

int main(){
int n;
cout<<"enter the value of N :";
cin>>n;


int result  = sumofnaturalnumber(n);
cout<<"The result is : "<<result;


}
