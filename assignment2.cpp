#include <iostream>
using namespace std;
#include "list.h"



int main() {
    Single_Linked_List list;
    int arr[30];
    for (int i = 0; i < 30; ++i) {
        arr[i] = i + 1; // Populate array with integers 1 to 30
    }

    for (int i = 0; i < 30; ++i) { // Add the elements of the array to the list
        list.push_back(arr[i]);
    }

    cout << "Initial list: "; // Display the initial list
    list.display();

    int choice, value;
    while (true) {
        cout<< "Enter your choice to perform the operations of functions\n";
        cout<< "1.Add the number to Front\n";
        cout<< "2.Add the number to Back\n";
        cout<< "3.Remove the number from Front\n";
        cout<< "4.Remove the number from Back\n";
        cout<< "5. Get the First and Last element of the list\n ";
        cout<< "6. Empty the list\n";
        cout<< "7.Insert item at position index (starting at 0). \n";
        cout<< "8.Remove item at position index\n";
        cout<< "9.Exit\n";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the value to add at front: ";
                cin >> value;
                list.push_front(value);
                break;
            case 2:
                cout << "Enter the value to add at back: ";
                cin >> value;
                list.push_back(value);
                break;
            case 3:
                cout << "Remove the value from front: ";
                list.pop_front();
                break;
            case 4:
                cout << "Remove the value from back: ";                
                list.pop_back();
                break;
            case 5: 
                cout << "First element of the list: ";
                list.front();
                cout << "Last element of the list: ";
                list.back();
                break;
            case 6:
                cout << "empty the list\n";
                list.empty();
            case 7:
                cout << "Enter the value to insert: ";
                cin >> value;
                cout << "Enter the index to insert: ";
                cin >> choice;
                list.insert(choice, value);
                break;
            case 8:cout << "Enter the index to remove: ";
                cin >> choice;
                if (list.remove(choice)) {
                    cout << "Element removed successfully." << endl;
                } else {
                    cout << "Invalid index." << endl;
                }
                break;
            case 9:
                return 0; // Exit the program
            default:
                cout << "Invalid choice. Please try again." << endl;
                continue; // Prompt for choice again
        }

        cout << "Updated list: ";
        list.display();
        cout << " " << endl;
    }

    return 0;
}
