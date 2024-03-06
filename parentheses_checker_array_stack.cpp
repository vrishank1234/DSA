#include <iostream>
using namespace std;
class Stack {
private:
    char data[1000];
    int top;

public:
    Stack() : top(-1) {}

    void push(char c) {
        data[++top] = c;
    }

    void pop() {
        if (top >= 0) {
            --top;
        }
    }

    char peek() const {
        return (top >= 0) ? data[top] : '\0';
    }

    bool isEmpty() const {
        return top == -1;
    }
};

bool isMatching(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '[' && close == ']') ||
           (open == '{' && close == '}');
}

bool isParenthesesBalanced(const char* expression) {
    Stack stack;

    for (int i = 0; expression[i] != '\0'; ++i) {
        char bracket = expression[i];
        if (bracket == '(' || bracket == '[' || bracket == '{') {
            stack.push(bracket);
        } else if (bracket == ')' || bracket == ']' || bracket == '}') {
            if (stack.isEmpty() || !isMatching(stack.peek(), bracket)) {
                return false;// Unmatched closing bracket
            }
            stack.pop(); // Matching pair found
        }
    }

    return stack.isEmpty(); 
    // Stack should be empty for balanced parentheses
}

int main() {
    char expression[1000];
    cout << "Enter an expression with parentheses: ";
    cin >> expression;

    if (isParenthesesBalanced(expression)) {
        cout << "Parentheses are balanced." << endl;
    } else {
        cout << "Parentheses are not balanced." << endl;
    }

    return 0;
}
