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
    void insertend(int data)
    {
        Node *newNode = new Node(data);
        Node *temp = head;
        if (head == nullptr)
            head = newNode;
        else
        {
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
    void display()
    {
        Node *temp = head;
        while (temp)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
    Node *addition(Node *l1, Node *l2)
    {
        Node *dummyhead = new Node(0);
        Node *curr = dummyhead;
        int carry = 0;
        while (l1 != nullptr || l2 != nullptr || carry != 0)
        {
            int x = (l1 != nullptr) ? l1->data : 0;
            int y = (l2 != nullptr) ? l2->data : 0;
            int sum = x + y + carry;
            carry = sum / 10;
            int digit = sum % 10;
            curr->next = new Node(digit);
            curr = curr->next;

            if (l1 != nullptr)
                l1 = l1->next;
            if (l2 != nullptr)
                l1 = l2->next;
        }
        return dummyhead->next;
    }
};
int main()
{
    Linked_list l1;
    Linked_list l2;
    l1.insertend(10);
    l2.insertend(20);
    l1.display();
    l2.display();
}