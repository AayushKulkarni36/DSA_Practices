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
    Node *head = nullptr; // pointer to 1st node
public:
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

    void ReverseSLL()
    {

        Node *prev = nullptr;
        Node *curr = head;
        Node *nextNode;
        while (curr != nullptr)
        {
            nextNode = curr->next; // store the next node
            curr->next = prev;     // reverse the link
            prev = curr;           // move prev ahead
            curr = nextNode;       // move curr ahead
        }
        puts("");
        while (prev != nullptr)
        {
            cout << prev->data << "->";
            prev = prev->next;
            if (curr == head)
                break;
        }
        cout << "Null";
    }

    void display()
    {
        Node *temp = head;
        // int count = 0;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            // count++;
            temp = temp->next;
        }
        // cout << endl<< count;
    }
};

int main()
{
    Linked_list l1;
    l1.insertbegin(10);
    l1.insertbegin(45);
    l1.insertbegin(35);
    l1.insertbegin(11);
    l1.insertbegin(42);
    l1.insertbegin(36);
    l1.display();
    l1.ReverseSLL();
}