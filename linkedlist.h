#include"node.h"

class LinkedList
{
    Node* front;
    Node* back;
    unsigned int size;

public:
    LinkedList();
    void pushBack(int val);
    void pushFront(int val);
    void popBack();
    void popFront();
    bool isEmpty();
    unsigned int getSize();
    //point to front of list
    //point to end of list
    //remove node from anywhere in list (take iterator as param)
    //insert node into anywhere in list (take iterator as param)
    ~LinkedList();
};