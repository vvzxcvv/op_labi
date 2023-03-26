#include <iostream>
#include "Stack.h"

using namespace std;

Stack::Stack() {
    size = 0;
}

void Stack::push(int n) {
    if (size < 100) {
        stack[size] = n;
        size++;
    } else {
        cerr << "stack is full." << endl;
    }
}

int Stack::pop() {
    if (size > 0) {
        size--;
        return stack[size];
    } else {
        cerr << "stack is empty." << endl;
        return 0;
    }
}

bool Stack::isEmpty() const {
    return size == 0;
}

bool Stack::isFull() const {
    return size == 100;
}

void Stack::display() const {
    if (isEmpty()) {
        cout << "stack is empty." << endl;
    } else {
        cout << "stack:" << endl;
        for (int i = size - 1; i >= 0; i--) {
            cout << stack[i] << endl;
        }
    }
}

Stack& operator<<(Stack& stack, int n) {
    stack.push(n);
    return stack;
}

Stack& operator>>(Stack& stack, int& n) {
    n = stack.pop();
    return stack;
}
