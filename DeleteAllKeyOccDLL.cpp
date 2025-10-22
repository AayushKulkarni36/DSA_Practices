#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int data, Node *next = NULL, Node *prev = NULL)
    {
        this->data = data;
        this->next = next;
        this->prev = prev;
    }
};
Node *ChangetoDLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *curr = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        curr->next = temp;
        temp->prev = curr;
        curr = temp;
    }
    return head;
}
/*
Node *deleteOcc(Node *head, int key)
{
    Node *curr = head;
    Node *dummy = new Node(-1);
    dummy->next = head;
    if (head)
        head->prev = dummy;
    while (curr)
    {
        if (curr->data == key)
        {
            // Node *toDelete = curr;
            Node *nextNode = curr->next;
            if (curr->prev)
                curr->prev->next = curr->next;
            if (curr->next)
                curr->next->prev = curr->prev;
            delete curr;
            curr = nextNode;
        }
        curr = curr->next;
    }
    head = dummy->next;
    delete dummy;
    return head;
}*/

Node *deleteOcc(Node *head, int key)
{
    Node *curr = head;
    Node *dummy = new Node(-1);
    Node* previ=dummy;
    dummy->next = head;
    if (head)
        head->prev = dummy;
    while (curr)
    {
        if (curr->data == key)
        {
            // Node *toDelete = curr;
           // Node *nextNode = curr->next;
            if (curr->prev)
                curr->prev->next = curr->next;
            if (curr->next)
                curr->next->prev = curr->prev;
            delete curr;
            curr = previ->next;
            continue;
        }
        previ=curr;
        curr = curr->next;
    }
    head = dummy->next;
    delete dummy;
    return head;
}
void display(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << "<->";
        temp = temp->next;
    }
    cout << "Null";
    puts("");
}

int main()
{
    vector<int> arr = {10, 4, 6, 10, 5};
    Node *head = ChangetoDLL(arr);
    display(head);
    Node *Nhead = deleteOcc(head, 10);
    display(Nhead);
}
