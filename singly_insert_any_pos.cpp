#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node *next;

    node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_tail(node *&head, node *&tail, int val)
{
    node *newnode = new node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    tail = newnode;
}

void insert_any_pos(node* &head, int ind, int val)
{
    if (ind == 0)
    {

        node *newnode = new node(val);
        newnode->next = head;
        head = newnode;
        return;
    }
    node *newnode = new node(val);
    node *temp = head;
    for (int i = 1; i < ind; i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}

void print_node(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}
int main()
{
    node *head = NULL;
    node *tail = NULL;

    int val;
    while (1)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }

        insert_tail(head, tail, val);
    }
    print_node(head);

    int ind, num;
    cin >> ind >> num;
    insert_any_pos(head, ind, num);
    print_node(head);
    return 0;
}