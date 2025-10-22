#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node* prev;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
class Linked_list
{
    Node *head = nullptr;
    Node* prev =nullptr;

public:
    void insertbegin(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
            head = newNode;
        else
        {
            newNode->next = head;
            head->prev=newNode;
            head = newNode;
        }
    }

    Node *insertMidAtK(int data, int k)
    {
        Node *newNode = new Node(data);
        Node *temp = head;
        int cnt = 0;
        if (head == NULL)
        {
            head = newNode;
            prev= newNode;
            return head;
        }
        if(k==1)
        {
            newNode->next=head;
            head->prev=newNode;
            head=newNode;
            return head;
        }
        while (temp)
        {
            cnt++;
            if (cnt == k - 1)
            {
                newNode->next = temp->next;
                newNode->prev=temp;
                temp->next = newNode;
                break;
            }
            temp = temp->next;
        }
        return head;
    }
    Node *insertMidAfterEl(int data, int k)
    {
        Node *temp = head;
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            return head;
        }
        else
        {
            while (temp->data != k)
            {
                temp = temp->next;
            }
            newNode->next = temp->next;
            newNode->prev=temp;
            temp->next = newNode;
            
        }
        return head;
    }
    Node *insertMidBeforeEl(int data, int k)
    {
        Node *temp = head;
        Node *newNode = new Node(data);
        if (head == NULL)
            return NULL;
        if(temp->data==k)
        {
            newNode->next=head;
            head->prev=newNode;
            head=newNode;
        }
        else
        {
            while (temp)
            {
                if(temp->next->data==k)
                {
                newNode->next=temp->next;
                newNode->prev=temp;
                temp->next = newNode;
                break;  
                }   
                temp=temp->next;
                
            }     
        }
        return head;
    }
    void display()
    {
        Node *temp = head;
        while (temp)
        {
            cout << temp->data << "<->";
            temp = temp->next;
        }
        cout << "Null";
    }
};

int main()
{
    Linked_list l1;
    l1.insertbegin(40);
    l1.insertbegin(30);
    l1.insertbegin(20);
    l1.insertbegin(10);
    l1.insertMidAtK(15, 2);
    l1.insertMidAfterEl(12, 10);
    l1.insertMidBeforeEl(5,20);

    l1.display();
}