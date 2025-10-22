#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    //Node *prev;
    Node(int data, Node *next = NULL)//, Node *prev = NULL)
    {
        this->data = data;
        this->next = next;
       // this->prev = prev;
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
       // temp->prev = curr;
        curr = temp;
    }
    return head;
}
void RevRec(Node* head)
{
    if(head==NULL)return ;
    RevRec(head->next);
    cout<<head->data<<"->";
}


void display(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << "->";
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
    RevRec(head);
    cout<<"Null";


}