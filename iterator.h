#include"node.h"

class Iterator
{
    Node* position;

public:
    Iterator();
    ~Iterator();
    int getBegin();
    int getEnd();
    int getNext();
    int getPrev();
    int getVal();
    int getDistance(Iterator&);
};