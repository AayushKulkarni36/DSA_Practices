#include<bits/stdc++.h>
using namespace std;

class Node 
{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data)
    {
        this->data=data;
        this->prev=nullptr;
        next=nullptr;
    }
    
};
class Linked_list
{
    private:
    Node* head = nullptr;
    public:
    void insertBegin(int data)
    {
        Node* newNode= new Node(data);
        if(head==nullptr)
            head=newNode;
        else
        {
            newNode->next=head;
            head->prev=newNode;
            head=newNode;
        }
    }
    void insertend(int data)
    {
        Node* newNode=new Node(data);
        if(head==nullptr)
            head=newNode;
        else{
            Node* temp=head;
            while(temp->next)
            {
                temp=temp->next;
            }
             temp->next=newNode; 
            newNode->prev=temp;
            newNode->next=nullptr;
            
        }
    }
    void display()
    {
        Node* temp=head;
        while(temp)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }

    }

    void count()
    {
        int count=0;
        Node * temp=head;
        while(temp)
        {
            count++;
            temp=temp->next;
        }
        cout<<"\n"<<count;
    }

    int search(int key)
    {
        Node* temp = head;
        while(temp)
        {
            if(temp->data==key) return 1;
            temp=temp->next;
        }
        return 0;

    }
};
int main()
{
    
    Linked_list l1;
    l1.insertBegin(40);
    l1.insertBegin(30);
    l1.insertBegin(20);
    l1.insertBegin(10);
    l1.insertend(40);
    l1.insertend(30);
    l1.insertend(20);
    l1.insertend(10);
    l1.display();
    l1.count();
    if(l1.search(40))
        cout<<endl<<"Found";
    else 
        cout<<endl<<"Not found";
} 