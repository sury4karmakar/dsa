// search an element in linked list
#include <iostream>
using namespace std;

struct Node
{
    // holds the data of the node
    int data;
    // pointer to the next node
    Node *next;
};

// insert a node at the end
void insertAtEnd(Node *&head, int value)
{
    // create a new node
    Node *newNode = new Node();
    // assign value to the new node
    newNode->data = value;
    // the new node will point to null
    newNode->next = nullptr;

    // if the list is empty then, make the new node the head
    if (head == nullptr)
    {
        head = newNode;
    }
    else
    {
        Node *temp = head;
        // traverse to the last node
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        // link the last node to the new node
        temp->next = newNode;
    }
}

// search for an element in the linked list
bool searchElement(Node *head, int key)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        if (temp->data == key)
        {
            // retun true if element found
            return true;
        }
        // move to the next node
        temp = temp->next;
    }
    // retun false if element not found
    return false;
}

// display the linked list
void displayList(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "Null" << endl;
}

int main()
{
    // initialize an empty list
    Node *head = nullptr;

    // inserting elements into the linked list
    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    insertAtEnd(head, 40);
    insertAtEnd(head, 50);

    cout << "list after inserting elements: ";
    displayList(head);

    // search for an element
    int key;
    cout << "enter the element to seach: ";
    cin >> key;

    if (searchElement(head, key))
    {
        cout << "element " << key << " found in the list" << endl;
    }
    else
    {
        cout << "element " << key << " not found in the list" << endl;
    }

    return 0;
}