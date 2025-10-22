#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
     Node *prev;

    Node(int data, Node *next = NULL , Node *prev = NULL)
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
        if (arr[i] < 0)
            continue;
        Node *temp = new Node(arr[i]);
        prev->next = temp;
         temp->prev=prev;
        prev = temp;
    }
    return head;
}

Node* ReverseDLL(Node* head)
{
    Node* temp=head;
    if(!head) return NULL;
    else{
        Node* prev= NULL;

        while(temp)
        {
          Node* nextNode = temp->next;
          Node*tem=temp->next;
          temp->next = temp->prev;
          temp->prev = tem; 
          prev=temp;
          temp =nextNode;
        }
        return prev;

    }

}

Node * RevDLLStack(Node* head) //T.c= O(2N),S.c =O(N) 
{
    Node *temp = head;
    stack<int> st;
    if(!head)return NULL;
    while(temp)
    {
        st.push(temp->data);
        temp=temp->next;
    }
    temp=head;
    while(temp)
    {
        temp->data=st.top();
        st.pop();
        temp=temp->next;
    }
    return temp;

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
    vector<int> arr = {10, 20, 30, 40, -1};
    Node *head = ConstructDll(arr);
    display(head);
    puts("");
    RevDLLStack(head);
    display(head);
    ReverseDLL(head);

}