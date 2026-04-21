// Stack using List

#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
     Node(int value){
        data = value;
        next = NULL;
     }
};
class Stack{
    Node* top;
    public:
     Stack(){
        top = NULL;
     }

     void push(int value){
        Node *newNode = new Node(value);
        newNode->next = top;
        top = newNode;
     }

     bool isEmpty(){
        return top == NULL;
     }

     int peek(){
        if(isEmpty()){
            cout << "Satck is Empty." << endl;
            return -1;
        }
        return top->data;
     }
     void pop(){
        if(isEmpty()){
            cout << "Stack underflow" << endl;
            return;
        }
        Node *temp = top;
        top = top->next;
        delete temp;
     }

     void display(){
            for( Node* t = top;t != NULL;t = t->next){
                cout << t->data << " " << endl;
            }
            cout << " NULL " << endl;
     }
};