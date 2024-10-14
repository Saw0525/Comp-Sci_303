#include <iostream>
#include <vector>
#include "stack.h" // Include the header file

using namespace std;


int main() {
    vector<int> mystack;
    int choice, value;

    while (true) {
        cout <<"Choose the Following Operations to Perform Operations\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Check the stack is empty or not\n";
        cout << "4. Insert some integer values to the stack\n";
        cout << "5. Remove some integer values from the stack\n";
        cout << "6. Find the top element of the stack\n";
        cout << "7. Find the average of the stack\n";
        cout << "8. Exit\n";
        
        cin >> choice;

        switch (choice) {
            case 1:
                push(mystack, value);
                break;
            case 2:
                pop(mystack);
                break;
            case 3:
                checkIfEmpty(mystack);                
                break;                
            case 4:
                insertValues(mystack);                
                break;
            case 5:
                removeValues(mystack);
                break;
            case 6:
                find_Top(mystack);
                break;
            case 7:
                findAverage(mystack);
                break;
            case 8:
                cout << "Exiting program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
            
        }
        display(mystack);
        cout << " " << endl;
    }
    
}

    
