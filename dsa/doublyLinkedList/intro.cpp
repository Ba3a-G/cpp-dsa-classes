#include<iostream>
using namespace std;

// Doubly Linked List
// We can use a class or structure to create a doublt linked list

class Node{ //it should contain a data field and a pointer field
    public:
    int data;
    Node *next;
    Node *prev;

    //constructor method
    Node(int val)
    {
        data = val;
        next = NULL; 
        prev = NULL;
    }
};

void display(Node* head) {
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

void displayFromTail(Node* tail) {
    // takes the tail as temp and keeps printing the data in reverse order till temp->prev is not NULL
    Node* temp = tail;
    cout<<"NULL";
    while(temp != NULL){
        cout << "<-" << temp->data;
        temp = temp->prev;
    }
    cout << endl;
}

void insertAtHead(Node* &head, int val) {
    Node* n = new Node(val);
    n->next = head;
    if(head != NULL) {
        head->prev = n;
    }
    head = n;
}

void insertAtTail(Node* &head, int val) {
    if(head == NULL) {
        insertAtHead(head, val);
        return;
    }
    Node* n = new Node(val);
    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}

void insertAtTailPtr(Node* &tail, int val) {
    Node* n = new Node(val);
    tail->next = n;
    n->prev = tail;
    tail = n;
}

void getTail(Node* &head, Node* &tail) {
    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    tail = temp;
    cout << "Set tail to: " << tail->data << endl;
}

int main() {
    Node* tail;
    Node* head = new Node(10);
    Node* temp1 = new Node(20);
    Node* temp2 = new Node(30);

    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;
    getTail(head, tail);
    display(head);
    displayFromTail(tail);
    return 0;
};