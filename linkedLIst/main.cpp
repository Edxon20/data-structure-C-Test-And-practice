#include <iostream>
#include <queue>

using namespace std;

class Node {
public:
int Value;
Node* Next; 
};

void printList(Node *n) {
    while (n!=NULL)
    {
        cout << n->Value <<endl;
        n = n->Next;        
    }    
}

void insertAtFront(Node**head, int newValue) {

    //1. Prepare a newNode
    Node* newNode = new Node();
    newNode->Value = newValue;
    //2. Put it in front of current head
    newNode->Next = *head;
    //3. MOve head of the list to point to the newNode
    *head = newNode;



}

int main () {
//firts element
Node* head = new Node();
Node* second = new Node();
Node* third = new Node();

head->Value = 1;
head->Next = second;

second->Value = 2;
second->Next = third;

third->Value = 4;
third->Next = NULL;

cout<<"LinkedList standar: "<<endl;
printList(head);
cout<<endl;
insertAtFront(&head, -22);
cout<<"LinkedList add a new value in front: "<<endl;
printList(head);

return 0;
}
