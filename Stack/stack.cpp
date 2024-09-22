#include<iostream>
#include<stack>
using namespace std;


int main(){

    stack<int>s;

   s.push(9);
   s.push(10);
   s.push(11);
   s.push(12);
   s.push(13);
   s.push(14);
   s.push(15);
   s.push(16);
   s.push(17);
   s.push(18);
   s.push(19);
   s.push(20);

    cout<<"Printing the top of element:"<<s.top()<<endl;
    if(s.empty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }
    
    cout<<"Size of stack:"<<s.size()<<endl;


    return 0;
}