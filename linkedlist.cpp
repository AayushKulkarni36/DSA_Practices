#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next; // pointer to the next node
    
    Node(int data)
    {
        this->data = data;
        next = nullptr;
    }
};

class Linked_list
{
private:
    Node *head=nullptr;   // pointer to 1st node
public:
    void insertend(int data)
    {
        Node *newNode = new Node(data);
        if (head == nullptr)
            head = newNode; // empty
        else
        {
            Node *temp = head;
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
    void insert_mid(int t, int data)
    {
        Node *temp = head;
        Node *newNode = new Node(data);
        while (temp->data != t)
        {
            temp = temp->next;
        }
        newNode->next = temp->next; //linking
        temp->next = newNode;
    }
    void insertbegin(int data)
    {
        Node *newNode = new Node(data);
        if (head == nullptr)
            head = newNode;
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void display()
    {
        Node *temp = head;
        int count = 0;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            count++;
            temp = temp->next;
        }
        cout << endl
             << count;
    }

    int mid_value()
    {
        Node* slow =head;
        Node* fast =head;
        while(fast!=nullptr && fast->next!=nullptr)
        {
            slow=slow->next;
            fast = fast->next->next;
        }
        return slow->data;
    }
};

int main()
{
    Linked_list l1;
    l1.insertend(30);
    l1.insertend(40);
    l1.insert_mid(20, 50);
    l1.insertbegin(20);
    l1.insertbegin(10);
    l1.display();
    //cout<<endl<<l1.mid_value();
}
