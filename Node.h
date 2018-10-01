#ifndef NODE_H
#define NODE_H


class Node
{
    public:
        Node();
        Node(Node *n ,char c);
    protected:

    private:
        Node *next ;
        char value ;
};

#endif // NODE_H
