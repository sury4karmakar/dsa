// insertion in linked list (first and last position)
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

// insert a node at the top
void insertAtBeginning(Node *&head, int value)
{
    // create a new node
    Node *newNode = new Node();
    // assign value to the new node
    newNode->data = value;
    // make the new node point to the current head
    newNode->next = head;
    // update head to point to the new node
    head = newNode;
}

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

    // inserting at the beginning
    insertAtBeginning(head, 10);
    insertAtBeginning(head, 20);
    insertAtBeginning(head, 30);

    cout << "list after inserting at the beginning: ";
    displayList(head);

    // inserting at the end
    insertAtEnd(head, 40);
    insertAtEnd(head, 50);

    cout << "list after inserting at the end: ";
    displayList(head);

    return 0;
}