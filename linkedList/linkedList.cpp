#include <iostream>
using namespace std;

// ADIGUN SAMUEL OLUWADABIRA 20/2005
// COMPUTER SCIENCE GROUP A
// Inserting, Searching and deleting from a linked list;

struct Node
{
    int data;
    Node *next;
};

Node *insertNode(Node *head, int val)
{
    // Create new node
    Node *newNode = new Node;
    // assign new value to node
    newNode->data = val;
    newNode->next = nullptr;

    if (head == nullptr)
    {
        // if list is empty new node becomes first node
        head = newNode;
        return head;
    }

    Node *temp = head;

    // else traverse through the list
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    // change the next of the last node
    temp->next = newNode;
    return head;
}

bool searchNode(Node *head, int val)
{
    Node *temp = head;
    // traverse through array till value is found
    while (temp != nullptr)
    {
        if (temp->data == val)
        {
            return true;
        }
        temp = temp->next;
    }

    // else return false
    return false;
}

Node *deleteNode(Node *head, int val)
{
    if (head == nullptr)
    {
        return head;
    }
    if (head->data == val)
    {
        cout << val << " is the first value. \n";
        Node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    Node *curr = head;
    while (curr->next != nullptr)
    {
        if (curr->next->data == val)
        {
            Node *temp = curr->next;
            cout << "Deleting Node with int value: " << val << endl;
            curr->next = curr->next->next;
            delete temp;
            return head;
        }
        curr = curr->next;
    }
    return head;
}

void displayList(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "nullptr\n";
}

int main()
{
    cout << "Hello world \n";
    Node *Head = nullptr;
    Head = insertNode(Head, 20);
    Head = insertNode(Head, 40);
    Head = insertNode(Head, 60);
    Head = insertNode(Head, 80);
    Head = insertNode(Head, 100);
    Head = insertNode(Head, 120);

    displayList(Head);

    Head = deleteNode(Head, 20);

    displayList(Head);

    if (searchNode(Head, 40))
    {
        cout << "The value 40 is present. \n";
    }

    // cleanup memory for efficient memory management
    Node *temp = Head;
    while (temp != nullptr)
    {
        Node *toDelete = temp;
        temp = temp->next;
        delete toDelete;
    }

    return 0;
}