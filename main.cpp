#include <iostream>
#include "sll.h"
using namespace std;

int main()
{
    sll *s = new sll();
    s->add_b_i(0 ,'c');
    s->add_b_i(1 ,'A');
    s->add_b_i(1 ,'1');
    s->print_all();
    s->print_b_i(2);



    return 0;
}
