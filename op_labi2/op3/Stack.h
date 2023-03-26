#ifndef STACK_H
#define STACK_H

class Stack {
public:
    Stack();
    void push(int n);
    int pop();
    bool isEmpty() const;
    bool isFull() const;
    void display() const;
    friend Stack& operator<<(Stack& stack, int n);
    friend Stack& operator>>(Stack& stack, int& n);
private:
    int stack[100];
    int size;
};

#endif // STACK_H
