#include <iostream>
#include "lista.h"

using namespace std;

int main()
{
    BidirectionalList<char> bidirectionalList;
    bidirectionalList.pushFront('a');
    bidirectionalList.pushFront('b');
    bidirectionalList.pushFront('c');
    bidirectionalList.pushBack('d');
    bidirectionalList.pushBack('e');


    bidirectionalList.print();
    bidirectionalList.popBack();
    bidirectionalList.popFront();
    bidirectionalList.popBack();
    bidirectionalList.print();
}
