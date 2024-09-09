#include<iostream>
using namespace std;

class node
{
    public:
        int data;
        node* next;

        node(int val)
        {
            data = val;
            next = NULL;
        }
};

void insert_at_start(node* &head, int value)
{
    node* n = new node(value);

     if(head == NULL)
    {
        head = n;
        n -> next = NULL;
        return;
    }

    n -> next = head;
    head = n;

}

void insert_at_last(node* &head, int value)
{
    node* n = new node(value);

    if(head == NULL)
    {
        head = n;
        n -> next = NULL;
        return;
    }

    node* temp = head;
    while(temp -> next != NULL)
    {
        temp = temp -> next;
    }
    temp -> next = n;
}

void insert_at_mid(node* &head,int key, int value)
{
    node* n = new node(value);

    node* temp = head;
    while(temp -> data != key)
    {
        temp = temp -> next;
    }
    n -> next = temp -> next;
    temp -> next = n;
}

void display(node* head)
{
    node* temp = head;
    while(temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}

void delete_last(node* &head)
{
    node* temp = head;
    while(temp -> next -> next != NULL)
    {
        temp = temp -> next;
    }
    delete temp -> next -> next;
    temp -> next = NULL;
}

void delete_start(node* &head)
{
    node* temp = head;
    head = head -> next;
    delete temp;
}

void delete_mid(node* &head, int value)
{
    node* temp = head;
    node* prev = NULL;
    while(temp -> data != value)
    {
        prev = temp;
        temp = temp -> next;
    }
    prev -> next = temp -> next;
    delete temp;
}

int main()
{
    node* head = NULL;

    insert_at_start(head, 1);
    insert_at_start(head, 2);
    insert_at_start(head, 3);
    insert_at_last(head , 4);
    insert_at_last(head , 5);
    insert_at_last(head , 6);
    insert_at_mid(head, 4, 7);
    delete_mid(head, 4);
    delete_mid(head, 7);
    // delete_last(head);
    // delete_last(head);
    // delete_start(head);
    // delete_start(head);
    display(head);

    return 0;
}