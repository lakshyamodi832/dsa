#include<iostream>
using namespace std;

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if (op == '^')              return 3;
    return 0;
}

int main(){
    char infix[100], postfix[100];
    char stk[100];    
    int top = -1;
    int k = 0;        
    cout << "Enter infix expression: ";
    cin >> infix;
    for (int i = 0; infix[i] != '\0'; i++) {
        char ch = infix[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
            postfix[k++] = ch;
        }
        else if (ch == '(') {
            stk[++top] = ch;
        }
        else if (ch == ')') {
            while (top >= 0 && stk[top] != '(') {
                postfix[k++] = stk[top--];
            }
            top--;  
        }   
        else {
            while (top >= 0 && precedence(stk[top]) >= precedence(ch)) {
                postfix[k++] = stk[top--];
            }
            stk[++top] = ch;
        }
    }   
    while (top >= 0) {
        postfix[k++] = stk[top--];
    }
    postfix[k] = '\0';
 
    cout << "Postfix expression: " << postfix << endl;   
    return 0;
}