#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data, Node *next = NULL)
    {
        this->data = data;
        this->next = next;
    }
};
Node *changetoLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
Node *deletemid(Node *head, int pos)
{
    int cnt = 0;
    Node *temp = head;
    Node *prev = NULL;
    if (head == NULL)
        return head;
    if (pos == 0)
    {
        Node *todel = head;
        head = head->next;
        delete todel;
        return head;
    }
    while (temp)
    {

        if (cnt == pos)
        {
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        cnt++;
        temp = temp->next;
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
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    Node *head = changetoLL(arr);
    display(head);
    Node *Nhead = deletemid(head, 0);
    display(Nhead);
}