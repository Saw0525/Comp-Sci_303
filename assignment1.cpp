#include <iostream>
#include <fstream>
#include "function.h"

using namespace std;



int main() {
    const int ArraySize = 200; // set constant array size 200 
    int arr[ArraySize]; //declare array with fixed size
    int size = 0; //initialize the array to keep truck of number 
    int choseOption; // store the user option
    int num = 0; // store the number to search
    int modIndex; // store index to modify
    int modValue; // store modified value 
    int newnum; // store the number to add at the end of the array
    ifstream inputFile("A1input.txt"); // Open the inputfile
    if (!inputFile) {// check if the file is not found
        cout << "Error: File Not Found." << endl;
        return 1;
    }
    else {
        while (inputFile >> arr[size]) {///read and store the number in the array
            cout << arr[size] << " ";
            size++;
        }
    }
    inputFile.close(); //close the file after reading the numbers

    //prompt the user to choose the options
   do {
        cout << "\n\nChoose the following options: \n";
        cout << "1. Search the number in the array and print the index\n";
        cout << "2. Modify the array\n";
        cout << "3. Add number at the end of the array\n";
        cout << "4. Remove the Number\n";
        cin >> choseOption;
        
        //switch statement to choose the option
        switch (choseOption) {
            case 1: 
                
                findIndex(arr, size, num); // call the function findIndex ()
                break;
            case 2: 
                modifyArray(arr, size, modIndex, modValue); // call the function modifyArray ()
                break;
            case 3: 
                
                addNumber(arr, size, newnum); // call the function addNumber ()
                break;

            case 4: removeArray(arr, size, modIndex, modValue); // call the function removeArray ()
                break;
        
            default: cout << "Invalid Option" << endl; // print if the option is invalid
            }
   } 
   while(choseOption != 3); // loop until the user choose the option 3

    return 0;
}

