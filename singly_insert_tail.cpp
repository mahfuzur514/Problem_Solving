#include <bits/stdc++.h>
using namespace std;
class node
{
    public:
    int val;
    node* next;

    node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_tail(node* &head, node* &tail, int val)
{
    node* newnode = new node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    
    tail->next = newnode;
    tail = newnode;
}

void print_node(node* head)
{
    node* temp = head;
    while(temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}
int main()
{
    node* head = new node(10);
    node* a = new node(20);
    node* tail = new node(30);

    head->next = a;
    a->next = tail;

    insert_tail(head, tail, 40);
    print_node(head);
    return 0;
}