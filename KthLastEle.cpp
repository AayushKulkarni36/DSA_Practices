#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next = nullptr;
    Node(int data, Node *next = nullptr)
    {
        this->data = data;
        this->next = next;
    }
};

Node *changeToLL(vector<int> &arr)
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
Node *KthlastEle(Node *head, int k)
{
    Node *dummy = new Node(-1);
    dummy->next = head;

    Node *slow = dummy;
    Node *fast = dummy;

    if (!head)
        return NULL;
    for (int i = 0; i < k; i++)
    {
        fast = fast->next;
    }
    while (fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next;
    }
    Node *todel = slow->next;
    slow->next = slow->next->next;
    delete todel;
    return dummy->next;
}
void printall(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL\n";
}
int main()
{
    vector<int> arr{1, 2, 3, 4, 5};
    Node *head = changeToLL(arr);
    printall(head);

    head = KthlastEle(head, 2);
    printall(head);
}