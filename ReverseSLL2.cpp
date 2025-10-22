#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    // Node *prev;

    Node(int data, Node *next = NULL) //, Node *prev = NULL)
    {
        this->data = data;
        this->next = next;
        // this->prev = prev;
    }
};
Node *ConstructDll(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] < 0)
            continue;
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
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
}

/*void printReverse(Node *&head)
{
    Node *curr = head;;
    Node * prev=NULL;
    Node* nextNode;

    while(curr)
    {
        nextNode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextNode;
    }
    head=prev;
    puts("");
    Node* temp=head;
    while(temp)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"Null";
}
    */

void printReverse(Node *head) // using recursion
{
    if (head == NULL)
        return;
    printReverse(head->next);
    cout << head->data << "->";
}

int main()
{
    vector<int> arr = {10, 20, 30, 40, -1};
    Node *head = ConstructDll(arr);
    display(head);
    puts("");
    printReverse(head);
    cout << "NULL";
}