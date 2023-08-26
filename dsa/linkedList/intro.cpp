#include<iostream>
using namespace std;

//We can use a class or structure to create a linked list

class Node{ //it should contain a data field and a pointer field
    public:
    int data; //first field
    //if pointing towards integer int *ptre
    // here we need a pointer that points towards a node (the whole thing NODE (data + address))
    Node *next;

    //constructor method
    Node(int val) //this will be called automatically whenever an object is created
    {
        data = val;
        next = NULL; 
    }
    //STRUCTURE OF NODE GIVEN ABOVE
};

void insertAtTail(Node* &head, int val)
{
    Node* n = new Node(val); // * because dynamically

    Node* temp = head;

    if(head == NULL)
    {
        head = n;
        return;
    }

    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void insertAtHead(Node* &head,int val)
{
    Node* n = new Node(val);
    n->next=head;
    head=n;
}

void display(Node* head)
{
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout<<"NULL";
}

void deletion(Node* &head, int val)
{
    Node* temp = head;

    if(head == NULL)
    {
        return;
    }

    while(temp->next != NULL && temp->next->data != val)
    {
        temp=temp->next;
    }

    if(temp->next == NULL)
    {
        return;
    }

    Node* toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}

//deletion at head
void deletionAtHead(Node* &head)
{
    Node* toDelete = head;
    head = head->next;
    delete toDelete;
}

int main()
{
    Node *head = NULL; //empty linked list for now
    //never move the head
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtHead(head,10);
    insertAtHead(head,20);
    deletion(head,10);
    display(head);
    deletion(head, 8);
    display(head);  
}