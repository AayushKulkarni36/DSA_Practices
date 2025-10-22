#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data, Node *next = nullptr)
    {
        this->data = data;
        this->next = next;
    }
};
Node *changeToarr(vector<int> &arr)
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
void display(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL\n";
}

Node *findTail(Node *head)
{
    if (!head)
        return head;
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    return temp;
}

int len(Node *head)
{
    if (!head)
        return 0;
    Node *temp = head;
    int cnt = 0;
    while (temp)
    {
        cnt++;
        temp = temp->next;
    }

    return cnt;
}
Node *RotateLL(Node *head, int k)
{

    int leng = len(head);
    if (!head)
        return head;
    else if (k % leng == 0)
        return head;

    if (k > leng)
        k = k % leng;

    int res = leng - k;
    Node *temp = head;
    int cnt = 0;
    Node *tail = findTail(head);
    while (temp)
    {
        cnt++;
        if (cnt == res)
        {
            Node *nextnode = temp->next;
            temp->next = NULL;
            tail->next = head;
            head = nextnode;
            return head;
        }
        temp = temp->next;
    }
    return head;
}

int main()
{
    vector<int> arr{1, 2, 3, 4, 5};
    Node *head = changeToarr(arr);
    display(head);
    Node* newhead= RotateLL(head, 2);
    display(newhead);
}
