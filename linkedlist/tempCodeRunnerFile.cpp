#include<iostream>
using namespace std;


class Node{

public:
int data;
Node* next;

Node(int data){
this->data = data;
this->next = NULL;
}
};


void insertathead(Node* &head, int d){
 Node* temp = new Node(d);
 temp->next=head;
 head = temp;
};
void insertintail(Node* &tail , int d){
Node* temp = new Node(d);
tail->next = temp;
tail = temp;
};

void insertatposition(Node* & tail, Node* &head, int position, int d){
  if(position==1){
 // Node* temp = new Node(d);
 // temp->next = head;
 // head = temp;        
  insertathead(head,d);

  return;
}


 Node* temp = head;
 int cnt = 1;

 while(cnt!= position-1 && temp->next != NULL){
 temp = temp->next;
 cnt++;
}

if(temp->next == NULL){
 insertintail(tail,d);
 return;
}

Node* nodeToinsert = new Node(10);
nodeToinsert->next = temp->next;
temp->next = nodeToinsert;

}


void deletenode(int position , Node* &head){
if(position == 1){
Node* temp = head;
head = head->next;
temp->next = NULL;
delete temp;
}

Node* curr = head;
Node* prev = NULL;

int cnt = 1;
while(cnt<=position){
prev = curr;
curr = curr->next;
cnt++;
}
prev->next = curr->next;
curr -> next = NULL;
delete curr;
}

void print(Node* head){
Node* temp = head;

while(temp!= NULL){
  cout<<temp->data<<"->";
  temp = temp->next;
}

 cout<<"NULL"<<endl;

};


int main(){
Node* node1 = new Node(10);
 Node* head = node1;
Node* tail = node1;  // Initialize tail with the first node


insertathead(head,45);
insertintail(tail,30);


};