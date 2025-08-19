// insertion on doubly linked list
#include <iostream>
using namespace std;

// define the node structure
struct Node
{
    int data;
    Node *prev;
    Node *next;
};

// create a new node
Node *createNode(int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->prev = nullptr;
    newNode->next = nullptr;

    return newNode;
}

// insert a node at the beginning
void insertAtBeginning(Node *&head, int data)
{
    Node *newNode = createNode(data);
    if (head == nullptr)
    {
        head = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

// insert a node at the end
void insertAtEnd(Node *&head, int data)
{
    Node *newNode = createNode(data);
    if (head == nullptr)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

// display the linked list
void displayList(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
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