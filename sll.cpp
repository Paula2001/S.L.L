#include "sll.h"
#include <iostream>
using namespace std ;
sll::sll()
{

}
sll::add_b_i(int index,char c)
{
    Node *newnode = new Node(c);
    if(index == 0)
    {
        newnode->next = head ;
        head = newnode ;
    }
    else
    {
        Node *pointer = head ;
        for(int i = 0; i < index - 1; i++)
        {
            pointer = pointer->next ;
            cout << "sad";
        }
        newnode->next = pointer->next;
        pointer->next = newnode;
    }
}
sll::print_all()
{
    Node *pointer = head;
    while(pointer)
    {
        cout << pointer->value << " " ;
        pointer = pointer->next;
    }
}
sll::delete_all()
{
    head = NULL ;
    cout << NULL <<endl;
}
sll::delete_b_i(int index)
{
    Node *pointer = head ;
    if(index == 0)
    {
        head = pointer->next ;
    }
    else
    {
        for(int i = 0; i < index - 1; i++)
        {
            pointer = pointer->next ;
        }
        pointer->next = pointer->next->next ;
    }
}
sll::print_b_i(int index)
{
    Node *pointer = head ;
    for(int i = 0; i < index; i++)
    {
        pointer = pointer->next ;
    }
    cout << pointer->value <<endl;
}

