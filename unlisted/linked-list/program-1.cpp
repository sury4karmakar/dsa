// add node in singly linked list
#include <iostream>
using namespace std;

// Define the structure of a node
struct Node
{
    int data;
    Node *next;
};

// insert a node at the end of the linked list
void insertNode(Node *&head, int data)
{
    // create a new node
    Node *newNode = new Node{data, nullptr};

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

// print the linked list
void printList(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << "-> ";
        temp = temp->next;
    }
    cout << "nullptr" << endl;
}

int main()
{
    // initialize the head of the list to nullptr
    Node *head = nullptr;

    // insert 5 node into the linked list
    insertNode(head, 10);
    insertNode(head, 20);
    insertNode(head, 30);
    insertNode(head, 40);
    insertNode(head, 50);

    // print the linked list
    printList(head);

    // free up alocated memory
    Node *temp;
    while (head != nullptr)
    {
        // store current node
        temp = head;
        // move head to next node
        head = head->next;
        // free memory for the stored node
        delete temp;
    }

    return 0;
}