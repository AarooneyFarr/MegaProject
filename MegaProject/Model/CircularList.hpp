//
//  CircularList.hpp
//  MegaProject
//
//  Created by Farr, Aaron on 3/3/17.
//  Copyright © 2017 Farr, Aaron. All rights reserved.
//

#ifndef CircularList_h
#define CircularList_h

#include "../Model/DoublyLinkedList.hpp"

template<class Type>
class CircularList : public DoublyLinkedList<Type>
{
private:
    BiDirectionalNode<Type> * front;
    BiDirectionalNode<Type> * end;
    int size;
public:
    CircularList();
    ~CircularList();
    
    void add(Type data);
    void addAtIndex(int index, Type data);
    
    Type remove(int index);
    
    
}
#endif /* CircularList_h */
