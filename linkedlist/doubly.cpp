#include<iostream>
using namespace std;



class Node {
    public:
      int data;
      Node* next;
      Node* prev;


      Node(int d){
          this->data = d;
          this->next = NULL;
          this->prev = NULL;    
      }

};

void insertathead(Node* &head, int d){
    if(head==NULL){

        Node* temp = new Node(d);
        head = temp;
    }

    else{
      Node* temp = new Node(d);
      temp->next = head;
      head->prev = temp;
      head = temp;
    }
};

void insertattail(Node* &tail, int d){

    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;


}

void insertatposition(Node* head, Node* tail, int position, int d){
    if(position == 1){

        insertathead(head, d);
        return;

    }

    Node* temp = head;
    int cnt = 1;
    while(cnt<=position-1){
        Node* temp = temp->next;
        cnt++;
    }

    if(temp->next == NULL){ 
        insertattail(tail, d);
        return;
    }

    Node* nodeToinsert = new Node(d);
    nodeToinsert->next = temp->next;
    temp->next->prev = nodeToinsert;
    temp->next = nodeToinsert;
    nodeToinsert->prev = temp;  

}


void deletenode(int position , Node* &head){

    if(position == 1){
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
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
    curr->next = NULL;
    delete curr;
    };
    


void print(Node* head){
    Node* temp = head;

    while(temp!=NULL){
       cout<<temp->data<<"->";
       temp = temp->next;
    }
}

int main(){

    Node* node1 =new Node(10);

    Node* head = node1;
    Node* tail = node1;

    insertathead(head, 12);
    insertathead(head, 13);
    insertattail(tail, 15);
    insertattail(tail, 16); 
    insertathead(head, 11);
    insertatposition(head, tail, 2, 14);
    deletenode(1, head);
    deletenode(4,head);
    

    print(head);

}
