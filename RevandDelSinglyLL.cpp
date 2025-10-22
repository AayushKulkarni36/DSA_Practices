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
    Node *head = nullptr;

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
    Node *deletehead()
    {
        Node *temp = head;
        if (head == NULL)
            return head;
        head = head->next;
        delete temp;
        return head;
    }
    Node *deletetail()
    {
        Node *temp = head;
        if (head == NULL || head->next == NULL)
            return NULL;

        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = nullptr;
        return head;
    }
    Node *deletemidKthvalue(int k)
    {
        int count = 0;
        Node *temp = head;
        Node *prev = nullptr;
        if (k == 1)
        {
            Node *tempo = head;
            head = head->next;
            delete tempo;
        }

        while (temp)
        {

            count++;
            if (k == count)
            {
                prev->next = prev->next->next;
                delete temp;
                break;
            }
            prev = temp;
            temp = temp->next;
        }
        puts("\nMid kth element Deleted:");
        return head;
    }

    Node *deletemidElement(int k)
    {
        Node *temp = head;
        Node *prev = nullptr;
        if (head == NULL)
            return head;
        if (head->data == k)
        {
            head = head->next;
            delete temp;
            puts("\nHead Element Deleted");
            return head;
        }

        while (temp)
        {
            if (temp->data == k)
            {
                prev->next = prev->next->next;
                delete temp;
                break;
            }
            prev = temp;
            temp = temp->next;
        }
        puts("\nMid element Deleted:");
        return head;
    }
    Node *reverse()
    {
        Node *temp = head;
        Node *prev = nullptr;
        Node *next;
        while (temp)
        {
            next = temp->next;
            temp->next = prev;
            prev = temp;
            temp = next;
        }
        puts("");
        head = prev;
        return prev;
    }

    void display()
    {
        Node *temp = head;
        while (temp)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "Null";
    }
};

int main()
{
    Linked_list l1;
    l1.insertbegin(40);
    l1.insertbegin(20);
    l1.insertbegin(10);
    l1.insertbegin(50);

    puts("Original:");
    l1.display();
    l1.deletemidElement(30);
    l1.display();
    l1.deletemidKthvalue(2);
    l1.display();
    ;

    /*l1.reverse();
    puts("Reversed:");
    l1.display();
    Node* head =l1.deletehead();
    puts("");
    puts("Head Deleted:");
     l1.display();
    Node* head1 =l1.deletetail();
    puts("\nTail Deleted:");
    l1.display();*/
}
