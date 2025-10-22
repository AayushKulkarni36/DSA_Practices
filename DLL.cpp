#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;

public:
    Node(int data)
    {
        this->data = data;
        next = nullptr;
        prev = nullptr;
    }
};
class Linked_list
{
    Node *head = NULL;

public:
    Node *ChangeARRtoLL(vector<int> &arr)
    {
        head = new Node(arr[0]);

        Node *curr = head;

        for (int i = 1; i < arr.size(); i++)
        {
            Node *temp = new Node(arr[i]);
            curr->next = temp;
            temp->prev = curr;
            curr = temp;
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

    Node *deletebegin()
    {
        if (head == nullptr)
            return NULL;
        Node *temp = head;
        head = head->next;
        if (head != nullptr)
            head->prev = NULL;
        
        delete temp;
        puts("\ndelete begin");   
        return head;
    }
    Node *deleteend()
    {
        if (head == nullptr || head->next == nullptr)
            return nullptr;
        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->prev->next = nullptr;
        delete temp;
        puts("\ndelete end");
        return head;
    }
    Node *deletemid(int k)
    {
        int cnt=1;
        Node* temp=head;
        if(head==NULL)return NULL;
        if(k==1) return deletebegin();

        while(cnt!=k)
        {
            temp=temp->next;
            cnt++;
        }
        if(!temp)
            cout<<"element is out of Bounds";
        if(temp->next==NULL) return deleteend();

        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        delete temp;
        puts("Mid kth Element deleted");
        return head;
    }
        
};

int main()
{
    vector<int> arr = {10, 20, 30, 40, 50};
    Linked_list l1;
    l1.ChangeARRtoLL(arr);
    l1.display();
    l1.deletebegin();
    l1.display();
    l1.deleteend();
    l1.display();
    l1.deletemid(2);
    l1.display();
}