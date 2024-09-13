
#include <iostream>
using namespace std;

//function to search the number in the array and print the index
void findIndex(int arr[], int size, int num) {
    int num; // declare the user input number
    cout << "\nEnter a number to search: ";
    cin >> num;
  
    for (int i = 0; i < size; i++) { // loop through the array
        if (arr[i] == num) { // check if the number is found
        std::cout << "\nNumber Entered " << num << " Is Found At Index\n" << i << std::endl; // output the index of the number
            return; // exit the function if the number is found
        }
    }
    cout << "\nNumber " << num << " not found." << std::endl; // print if the number is not found
}
//function to modify the array
void modifyArray( int arr[], int size, int modIndex, int modValue) {
    cout << "\nEnter the Index you wnat to Modify: ";
    cin >> modIndex ;
    if (modIndex < 0 || modIndex >= size) {
        cout << "Invalid Index" << endl;
        return;
    }
    cout << "\nEnter the Value you want to Modify: ";
    cin >> modValue;
    if (modValue < 0) {
        cout << "Invalid Value" << endl;
        return;
    }
    arr[modIndex] = modValue;
    cout << "New Value: " << modValue << endl;
    cout << "Old Value: " << modIndex +1 << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}
//function to add number at the end of the array
void addNumber(int arr[], int size, int newnum) {
    if (newnum < 0) {
        cout << "Invalid Number" << endl;
        return;
    }
    arr[size] = newnum;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
//function to remove the number
void removeArray(int arr[], int& size, int index, int removedvalue) {
    if (index >= 0 && index < size) {
        if (removedvalue == 0) {
            arr[index] = 0; // Replace the value with 0
        } else {
            // Remove the integer altogether by shifting elements to the left
            for (int i = index; i < size - 1; ++i) {
                arr[i] = arr[i + 1];
            }
            --size; // Decrease the size of the array
        }
    } else {
        cout << "Invalid index" << endl;
    }
}
