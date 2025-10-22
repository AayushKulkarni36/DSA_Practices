#include <bits/stdc++.h>
using namespace std;
// how to converte a array to linked list and traverse and print it..
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

Node *ChangeArrtoLL(vector<int> &arr)
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

int LengthofLL(Node *head)
{
    int cnt = 0;
    Node *temp = head;
    while (temp)
    {
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

int found(Node *head, int key)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        if (temp->data == key)
            return 1;
        temp = temp->next;
    }
    return 0;
}
int main()
{
    vector<int> arr = {10, 2, 3, 4, 7, 4, 5};
    int count = 0;
    int key = 0;
    cin >> key;
    // Node* n1 = new Node(arr[0],nullptr);
    // cout<<n1->data;
    Node *head = ChangeArrtoLL(arr);
    // cout<<head->data;
    Node *temp = head;
    while (temp != nullptr) // traversing and printing LL
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << "\nTotal nodes:" << LengthofLL(head);
    if (found(head, key))
        cout << "\nFound";
    else
        cout << "\nNot found";
}
