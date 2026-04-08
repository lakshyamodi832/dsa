#include<iostream>
#define MAX 5
using namespace std;

class Stack{
    int top;
    int arr[MAX];
public:
    Stack(){
        top = -1;
    }
    bool push(int x){
        if (top >= MAX - 1) {
            cout << "Stack Overflow! Cannot push " << x << endl;
            return false;
        }
        arr[++top] = x;
        cout << x << " pushed into stack" << endl;
        return true;
    }
    int pop() {
        if (top < 0) {
            cout<<"Stack Underflow! Nothing to pop." << endl;
            return -1;
        }
        int val = arr[top--];
        cout << val << "popped into stack" << endl;
        return val;
    }
    void peep(int i) {
        if (top - i + 1 < 0) {
            cout << "Invalid position!" << endl;
        } else {
            cout << "Element at position " << i << ": " << arr[top - i + 1] << endl;
        }
    }
    void change(int i, int newVal) {
        if (top - i + 1 < 0) {
            cout << "Invalid position!" << endl;
        } else {
            arr[top - i + 1] = newVal;
            cout << "Element at position " << i << " changed to " << newVal << endl;
        }
    }
    void display() {
        if (top < 0) { cout << "Stack is empty." << endl; return; }
        cout << "Stack (top to bottom): ";
        for (int i = top; i >= 0; i--) cout << arr[i] << " ";
        cout << endl;
    }
};

int main(){

    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.peep(2);         
    s.change(1, 99);   
    s.display();
    s.pop();
    s.display();
    
    return 0;
}