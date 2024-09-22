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
    temp->next = head;
    head = temp;
}

void insertattail(Node* &tail, int d){  // Pass tail by reference
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertatposition(Node* &tail, Node* &head, int position, int d){
    if(position == 1){
        insertathead(head, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    // Traverse to the node just before the desired position
    while(cnt != position-1 && temp->next != NULL){
        temp = temp->next;
        cnt++;
    }

    // If the next node is NULL, we're at the end of the list
    if(temp->next == NULL){
        insertattail(tail, d);
        return;
    }

    Node* nodeToinsert = new Node(d);
    nodeToinsert->next = temp->next;
    temp->next = nodeToinsert;
}

void deletenode(int position , Node* &head){
    if(position==1){
        Node* temp = head;       //ANCHOR - First & start Node to be deleted
        head = head->next;       //FIXME - Move head to the next node
        temp->next = NULL;       //FIXME - Make the next node NULL
        delete temp;             
    }

    //NOTE - Deleting middle or any positional or last node
    Node* curr = head;
    Node* prev = NULL;

    int cnt = 1;
    while(cnt<= position){
        prev = curr;
        curr  = curr->next;
        cnt++;
    
    }
    prev -> next = curr -> next;
    curr -> next = NULL;    
    delete curr;

}

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main(){
    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;  // Initialize tail with the first node

    insertathead(head, 45);
    insertattail(tail, 50);
    insertattail(tail, 30);
    insertattail(tail, 100);

    insertatposition(tail, head, 7, 55);


    deletenode(3, head);

    print(head);

    return 0;
}
