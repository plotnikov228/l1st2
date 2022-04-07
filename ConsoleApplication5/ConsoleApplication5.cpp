#include <iostream>
#include <cstdlib>

using namespace std;

class Node
{
public:
    Node* next;
    int data;
    Node();
    ~Node();
    void print();
    
};

class LinkedList
{
public:
    int length;
    Node* head;

    LinkedList();
    ~LinkedList();
    void add(int data);
    void remove(int data);
    void toArray(int arr[], int len);
    void add_back(int data);
    void print();

};

Node::Node() {
    //set default values;
}

Node::~Node() {
    cout << "NODE DELETED" << endl;
}

void Node::print() {
    Node* node = this;
    if (node != NULL) {
        cout << "===============================" << endl;
        cout << this->data << endl;
        cout << "===============================" << endl;
    }
}

LinkedList::LinkedList() {
    this->length = 0;
    this->head = NULL;
}

LinkedList::~LinkedList() {
    cout << "LIST DELETED" << endl;
}

void LinkedList::add(int data) {
    Node* node = new Node();
    node->data = data;
    node->next = this->head;
    this->head = node;
    this->length++;
}


void LinkedList::print() {
    if (this->length == 0) {
        cout << "The list is empty" << endl;
    }
    else {

        Node* head = this->head;
        int i = 0;
        cout << "List:" << endl;
        cout << "===============================" << endl;
        while (head) {
            cout << i << ": " << head->data << endl;
            head = head->next;
            i++;
        }
        cout << "===============================" << endl;
    }
}


void LinkedList::toArray(int arr[], int len) {
        Node* head = this->head;
        arr[len];
        for (int i = 0; i < len; i++) {
            arr[i] = head->data;
            head = head->next;
        }         
}


int main(int argc, char const* argv[])
{
    LinkedList* list = new LinkedList();
    const int length = 7;

    list->add(2);
    list->add(4);
    list->add(5);
    list->add(7);
    list->add(10);
    list->add(13);
    list->add(15);


    int Array[length];


    

    list->print();


    list->toArray(Array, length);

    int n = sizeof(Array) / sizeof(int);
    int j = 0;
    for (int i = 0; i < n; i++)
        if ((Array[i] % 2) == 0)
            Array[j++] = Array[i];
    n = j;
    cout << "List after filter:" << endl;
    cout << "===============================" << endl;
    for (int i = 0; i < n; i++) {
        cout << i << ": " << Array[i] << endl;
    }
    cout << "===============================" << endl;

    return 0;
}
