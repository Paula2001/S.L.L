#ifndef SLL_H
#define SLL_H
#include "Node.h"
#include <iostream>
using namespace std ;
class sll
{
    public:
        sll();
        add_b_i(int index ,char c);
        delete_b_i(int index);
        print_b_i(int index);
        print_all();
        delete_all();
    protected:

    private:
        Node *head = NULL ;
};

#endif // SLL_H
