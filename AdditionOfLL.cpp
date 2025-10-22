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
class Linked_List
{
    Node *head = NULL;

public:
    void begininsert(int data)
    {
        Node *newNode = new Node(data);
        if (!head)
            head = newNode;
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    Node *ADD(Node *node1, Node *node2)
    {
        Node *t1 = node1;
        Node *t2 = node2;
        Node *dummy = new Node(-1);
        Node *curr = dummy;
        int carry = 0;

        while (t1 != NULL || t2 != NULL)
        {
            int sum = carry;
            if (t1)
                sum += t1->data;
            if (t2)
                sum += t2->data;
            Node *nextNode = new Node(sum % 10);
            carry = sum / 10;
            curr->next = nextNode;
            curr = curr->next;
            if (t1)
                t1 = t1->next;
            if (t2)
                t2 = t2->next;
        }
        if (carry)
        {
            Node *newNode = new Node(carry);
            curr->next = newNode;
        }
        head = dummy->next;
        return head;
    }
    void display()
    {
        Node *temp = head;
        while (temp)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
    Node *gethead()
    {
        return head;
    }

   void reverse(Node* head)
   {
    if(!head)return ;
    
    reverse(head->next);
    cout<<head->data<<"->";
   }
};

int main()
{
    Linked_List l1;
    Linked_List l2;
    Linked_List sum;
    l1.begininsert(6);
    l1.begininsert(4);
    l1.begininsert(2);
    l1.display();

    l2.begininsert(7);
    l2.begininsert(8);
    l2.begininsert(3);
    l2.display();

    Node *head = sum.ADD(l1.gethead(), l2.gethead());
    sum.reverse(head);
    cout<<"NULL";

}