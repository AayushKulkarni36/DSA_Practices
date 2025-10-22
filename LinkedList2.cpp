#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = nullptr;
    }
};

class Linked_list
{
private:
    Node *head = nullptr;

public:
    void insertbegin(int data)
    {
        Node *NewNode = new Node(data);
        if (head == nullptr)
            head = NewNode;
        else
        {
            NewNode->next = head; // make newnode point to current head of list
            head = NewNode;
        }
    }
    void insertend(int data)
    {
        Node *newNode = new Node(data);
        Node *temp = head;
        if (head == nullptr)
        {
            head = newNode;
        }
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void insertmid(int data, int key)
    {
        Node *newNode = new Node(data);
        if (head == nullptr)
            newNode = head;
        else
        {
            Node *temp = head;
            while (temp->next != nullptr && temp->data != key)
            {
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }

    int mid_value()
    {
        Node *slow = head;
        Node *fast = head;
        while (fast != nullptr && fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow->data;
    }
    void display()
    {
        Node *temp = head;
        while (temp)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL";
    }

    void deletelist()
    {
        Node *curr = head;
        Node *newNode;
        while (curr)
        {
            newNode = curr->next;
            delete curr;
            curr = newNode;
        }
        head = nullptr;
        cout << "\nLinked list Deleted Successfully";
    }
};

int main()
{
    Linked_list l1;
    l1.insertbegin(40);
    l1.insertbegin(30);
    l1.insertbegin(20);
    l1.insertbegin(10);
    l1.insertend(50);
    l1.insertend(60);
    l1.insertmid(25, 20);
    l1.display();
    cout << endl
         << l1.mid_value();
    l1.deletelist();
}