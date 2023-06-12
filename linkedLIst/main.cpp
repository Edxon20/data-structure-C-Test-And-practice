#include <iostream>
#include <queue>

using namespace std;

class Node {
public:
int Value;
Node* Next; 
};

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

return 0;
}
