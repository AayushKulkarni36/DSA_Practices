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
/*// BRUTE FORCE APPROACH
Node* SortLL(Node* head)
{
    int cnt0=0;
    int cnt1=0;
    int cnt2=0;
    Node* temp=head;
    while(temp)
    {
        if(temp->data==0) cnt0++;
        else if(temp->data==1) cnt1++;
        else cnt2++;
        temp=temp->next  ;
    }

    temp=head;
    while(temp)
    {
        if(cnt0)
        {
            temp->data=0;
            cnt0--;
        }
        else if(cnt1)
        {
            temp->data=1;
            cnt1--;
        }
        else
        {
            temp->data=2;
            cnt2--;
        }
        temp=temp->next;

    }
    return head;

} */

Node *SortLL(Node *head)
{
    Node *temp = head;
    Node *zerohead = new Node(-1);
    Node *onehead = new Node(-1);
    Node *twohead = new Node(-1);
    Node *zero = zerohead;
    Node *one = onehead;
    Node *two = twohead;

    while (temp)
    {
        if (temp->data == 0)
        {
            zero->next = temp;
            zero = temp;
        }
       else if (temp->data == 1)
        {
            one->next = temp;
            one = temp;
        }
        else
        {
            two->next = temp;
            two = temp;
        }
        temp = temp->next;
    }
        zero->next = onehead->next ? onehead->next : twohead->next;

        one->next = twohead->next;
        two->next = NULL;
    
    head = zerohead->next;
    return head;
}

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
    vector<int> arr = {2, 0, 2, 1, 0, 2, 1};
    Node *head = ChangetoDLL(arr);
    display(head);
     head= SortLL(head);
    display(head);
}