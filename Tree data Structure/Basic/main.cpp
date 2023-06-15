#include <iostream>

using namespace std;

    struct Node {
        int data;
        Node* left;
        Node* right;
    };

    Node* createNode(int _data){

        Node* newNode = new Node();
        newNode->data = _data;

        newNode->left=newNode->right = nullptr;
        return newNode;
    }


int main () {
    
    //THe node principal is called Root and dont have Parents
    //THe node than dont have children are called 'Leaf'

//        1                lvl 1
//       / \ 
//      2   3              lvl  2
//     /
//    4                    lvl3


    Node* root = createNode(1); //lvl1
    root->left = createNode(2); //lvl2
    root->right = createNode(3); //lvl2
    root->left->left = createNode(4); //lvl3


    

    return 0;
}