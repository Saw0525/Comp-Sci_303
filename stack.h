#include <vector>
#include <iostream>

using namespace std;

void checkIfEmpty(const vector<int>& mystack) {
    if (mystack.empty()) {
        cout << "Stack is empty. Choose the option 4. first!" << endl;
    } else {
        cout << "Stack is not empty." << endl;
    }
}

void push(vector<int>& mystack, int value) {
    cout << "Enter value to push: ";
    cin >> value;
    mystack.push_back(value);
    cout << "Pushed " << value << " onto the stack." << endl;
}

void pop(vector<int>& mystack) {
    if (mystack.empty()) {
        cout << "Stack is empty. Cannot pop." << endl;
    } else {
        int value = mystack.back();
        mystack.pop_back();
        cout << "Popped " << value << " from the stack." << endl;
    }
}

void insertValues(vector<int>& mystack) {
    int num_item, value;
    cout << "Enter the number of values to insert: ";
    cin >> num_item;
    for (int i = 0; i < num_item; ++i) {
        cout << "Enter value " << i + 1 << ": ";
        cin >> value;
        mystack.push_back(value);
    }
}

void removeValues(vector<int>& mystack) {
    int num_item;
    cout << "Enter the number of values to remove: ";
    cin >> num_item;
    for (int i = 0; i < num_item; ++i) {
        pop(mystack);
    }
}

void find_Top(const vector<int>& mystack) {
    if (mystack.empty()) {
        cout << "Stack is empty. No top element." << endl;
    } else {
        cout << "Top element is " << mystack.back() << endl;
    }
}

void findAverage(vector<int>& mystack) {
    if (mystack.empty()) {
        cout << "Stack is empty. Please insert Some Integers." << endl;
        insertValues(mystack); // call insert fun to Insert some values to compute average
        if (!mystack.empty()) { // Check if stack is still empty, if not compute average
            int sum = 0;
            for (int value : mystack) {
                sum += value;
            }
            double average = static_cast<double>(sum) / mystack.size();
            cout << "Average value of stack elements is " << average << endl;
        }
        int sum = 0;
        for (int value : mystack) {
            sum += value;
        }
        return;
    }

    int sum = 0;
    for (int value : mystack) {
        sum += value;
    }

    double average = static_cast<double>(sum) / mystack.size(); // Compute average
    cout << "Average value of stack elements is " << average << endl;
}


void display(const vector<int>& stack) {
    if(stack.empty()) {
        //cout << "Stack is empty." << endl;
        return;
    }
    else{
        cout << "Stack Elements: ";
        for (int value : stack) {
            cout << value << " ";
        }
        cout << endl;
    } 
}