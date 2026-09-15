#include <iostream>
using namespace std;

void insertionBeg(Node *head,int value){\
    Node*N = new Node;
    N -> data = value;
    if(head==nullptr){
        head = N;
        N -> next = head;
        return;
    }
    else{
        Node *temp = head;
        while(temp -> next != head){
            temp = temp -> next;
        }
        N -> next = head;
        head = N;
        temp -> next = N;
        return;
    }

}