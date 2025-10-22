#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int data)
    {
        this->data = data;
        next = nullptr;
        prev = nullptr;
    }
};
class Linked_list
{
    Node *head = nullptr;

public:
    void insertend(int data)
    {

        Node *newNode = new Node(data);
        if (head == nullptr)
        {
            head = newNode;
            return;
        }

        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
    void inserbegin(int data)
    {
        Node *newNode = new Node(data);
        if (head == nullptr)
        {
            head = nullptr;
            return;
        }

        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    void insertmid(int data, int key)
    {
        Node *newNode = new Node(data);
        Node *temp = head;
        if (head == nullptr)
        {
            head = newNode;
            return;
        }
        while (temp->next != nullptr && temp->data != key)
        {
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
    }
    void deleteLL()
    {
        Node *curr = head;
        Node *newNode;
        while (curr != nullptr)
        {
            newNode = curr->next;
            delete curr;
            curr = newNode;
        }
        cout << "\nList deleted!";
    }
    void count()
    {
        int count = 0;
        Node *temp = head;
        while (temp != nullptr)
        {
            count++;
            temp = temp->next;
        }
        cout << "\nTotal Nodes:" << count;
    }
    int search(int key)
    {
        Node *temp = head;
        while (temp)
        {
            if (temp->data == key)
                return 1;
            temp = temp->next;
        }
        return 0;
    }

        void reverse()
    {
         Node* temp=head;
         Node* previ=nullptr;
         Node* next;

         while(temp!=nullptr)
         {
            next=temp->next;
            temp->next=previ;
            previ=temp;
            temp=next;
         }
         puts("");
    }
        void display()
    {
        Node *temp = head;
        while (temp != nullptr)
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
    l1.insertend(10);
    l1.insertend(20);
    l1.insertend(30);
    l1.inserbegin(5);
    l1.insertmid(25, 20);
    
    l1.display();
    l1.count();
    l1.reverse();
     l1.display();
 
    if (l1.search(290))
        cout << "\nFound";
    else
        cout << "\nNot found";
    l1.deleteLL();
}