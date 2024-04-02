#include <iostream>
#include <stack>

void sortStack(std::stack<int>& originalStack) {
    std::stack<int> tempStack;

    while (!originalStack.empty()) {
        int current = originalStack.top();
        originalStack.pop();

        while (!tempStack.empty() && tempStack.top() > current) {
            originalStack.push(tempStack.top());
            tempStack.pop();
        }

        tempStack.push(current);
    }

    // Copy sorted elements back to the original stack
    while (!tempStack.empty()) {
        originalStack.push(tempStack.top());
        tempStack.pop();
    }
}

int main() {
    std::stack<int> myStack;

    // Push elements onto the stack
    myStack.push(5);
    myStack.push(10);
    myStack.push(2);
    myStack.push(8);
    myStack.push(1);

    std::cout << "Original stack elements:" << std::endl;
    while (!myStack.empty()) {
        std::cout << myStack.top() << " ";
        myStack.pop();
    }
    
    std::cout << std::endl;

    // Sort the stack
    sortStack(myStack);

    std::cout << "Sorted stack elements:" << std::endl;
    while (!myStack.empty()) {
        std::cout << myStack.top() << " ";
        myStack.pop();
    }

    return 0;
}
