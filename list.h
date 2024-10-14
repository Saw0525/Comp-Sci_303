#include <iostream>
using namespace std;

class Single_Linked_List { // Single Linked List class
private:
    struct Node {
        int data;
        Node* next;
    };
    Node* head;
    Node* tail;
    int num_items;

public:
    Single_Linked_List() : head(nullptr), tail(nullptr), num_items(0) {} // Constructor

    ~Single_Linked_List() { // Destructor 
        while (head != nullptr) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

     void push_front(const int value) { // add the element to the front of the list
        Node* new_node = new Node{value, nullptr};
        if (head != nullptr) {
            new_node->next = head;
        }
        head = new_node;
        if (tail == nullptr) {
            tail = head;
        }
        num_items++;
    }

    void push_back(const int value) { // add the element to the end of the list
        if(tail != nullptr){
            tail->next = new Node{value, nullptr};
            tail = tail->next;
            num_items++;
        }
        else{
            push_front(value);
        }
        
   }
    
    void pop_front() { // remove the first element of the list
        if (head == tail) {
            delete head;
            head = tail = nullptr;
        } else {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
        num_items--;
    }
    void pop_back() { // remove the last element of the list
        if (head == tail) {
            delete tail;
            head = tail = nullptr;
        } else {
            Node* current = head;
            while (current->next != tail) {
                current = current->next;
            }
            delete tail;
            tail = current;
            tail->next = nullptr;
        }
        num_items--;
    }
    void front() const { // get the first element of the list
        if (head != nullptr) {
            cout << "Front: " << head->data << endl;
        } else {
            cout << "List is empty." << endl;
        }
    }
    void back() const { // get the last element of the list
        if (tail != nullptr) {
            cout << "Back: " << tail->data << endl;
        } else {
            cout << "List is empty." << endl;
        }
    }

    void empty() {//return true if the list is empty, false otherwise
        while (head != nullptr) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
        tail = nullptr;
        num_items = 0;
    }
    void insert(size_t index, const int& item) { //insert the element at the given index
        if (index == 0) {
            push_front(item);
        } else if (index >= num_items) {
            push_back(item);
        } else {
            Node* new_node = new Node{item, nullptr};
            Node* current = head;
            for (size_t i = 1; i < index; ++i) {
                current = current->next;
            }
            new_node->next = current->next;
            current->next = new_node;
            num_items++;
        }
    }
    bool remove(size_t index) { //remove the element at the given index
        if (index >= num_items) {
            return false;
        }
        if (index == 0) { // Remove the first element
            pop_front();
            return true;
        }
        Node* current = head;
        for (size_t i = 1; i < index; ++i) {
            current = current->next;
        }
        Node* temp = current->next;
        current->next = temp->next;
        if (temp == tail) {
            tail = current;
        }
        delete temp;
        num_items--;
        return true;//return true if the element is removed successfully, false otherwise
    }

    void display() const { //display the list of elements in the list
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

    int size() const { //return the number of elements in the list
        return num_items;
    }
    size_t find(const int& item) const { // Return the position of the first occurrence of item
        Node* current = head;
        size_t index = 0;
        while (current != nullptr) {
            if (current->data == item) {
                return index;
            }
            current = current->next;
            index++;
        }
        return num_items; // Return the size of the list if item is not found
    }
};