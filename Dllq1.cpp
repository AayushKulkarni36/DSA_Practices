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

Node *ConstructDll(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        prev->next = temp;
        // temp->prev=prev;
        prev = temp;
    }
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
    cout << "NULL";
}

int main()
{
    vector<int> arr = {10, 20, 30, 40};
    Node *head = ConstructDll(arr);
    display(head);
}