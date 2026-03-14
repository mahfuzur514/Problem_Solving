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
    }
    tail->next = newnode;
    tail = newnode;
}

void delete_tail(node* head, node* &tail)
{
    if(head == NULL)
    {
        return;
    }
    node* deletenode = tail;
    node* temp = head;
    while(temp->next != tail)
    {
        temp = temp->next;
    }
    tail = temp;
    temp->next = NULL;
    delete deletenode;
}

void print_node(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    node* head = NULL;
    node* tail = NULL;
    int val;
    while(1)
    {
        cin >> val;
        if(val == -1)
        {
            break;
        }
        insert_tail(head, tail, val);
    }
 print_node(head);
    delete_tail(head, tail);
    print_node(head);
    return 0;
}