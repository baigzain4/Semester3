#include<iostream>
using namespace std;

#define MAXelements 100

class Stack{
    char arr[MAXelements];
    int top;
   public:
    Stack(){
        top = -1;
    }

    bool isFull(){
        return top == MAXelements -1;
    }
    bool isEmpty(){
        return top == -1;
    }

    void push(char value){
        if(isFull()){
            cout << "Stack Overflow." << endl;
            return;
        }
        arr[++top] = value;
    }

    void pop(){
        if(isEmpty()){
            cout << "Stack underflow" << endl;
            return;
        }
        top--;
    }

    int peek(){
        if(isEmpty()){
            cout << "Stack is Empty. " << endl;
            return -1;
        }
        return arr[top];
    }

    void display(){
        for(int i = top;i>=0;i--){
            cout << arr[i] << " "; 
        }
        cout << endl;
    }

    int postfixSolver(string input){
        int result = 0;
        for(int i = 0;i<input.length();i++){
            char current = input[i];
            if(current != '+' && current != '*' && current != '-' && current != '*'){
                push(current);
            }
            else{
                int num1 = arr[top] - '0';
                pop();
                int num2 = arr[top] - '0';
                pop();

                if(current == '+'){
                    result = num1+num2;
                    push(result + '0');
                }
                else if(current == '-'){
                    result = num1-num2;
                    push(result + '0');
                }
                else if(current == '*'){
                    result = num1*num2;
                    push(result + '0');
                }
                else if(current == '/'){
                    result = num1/num2;
                    push(result + '0');
                }
            }
        }

        int output = arr[top] - '0';
        return output;
    }

};

int main(){
    Stack s1;
    string input = "23+5*";
    cout << "After Evaluation:" << s1.postfixSolver(input);
}