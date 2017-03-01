//
//  DoublyLinkedList.hpp
//  MegaProject
//
//  Created by Farr, Aaron on 3/1/17.
//  Copyright © 2017 Farr, Aaron. All rights reserved.
//

#ifndef DoublyLinkedList_h
#define DoublyLinkedList_h

#include "BiDirectionalNode.hpp"

template <class Type>
class DoublyLinkedList
{
private:
    BiDirectionalNode<Type> * front;
    BiDirectionalNode<Type> * end;
    int size;
public:
    virtual void add(Type value) = 0;
    virtual Type remove(int index) = 0;
    virtual DoublyLinkedList();
   
    virtual ~DoublyLinkedList() = 0;
    
    int getSize() const;
    BiDirectionalNode<Type> * getFront() const;
    BiDirectionalNode<Type> * getEnd() const;
    
};

template <class Type>
DoublyLinkedList<Type> :: DoublyLinkedList()
{
    this->size = 0;
    this->front = nullptr;
    this->end = nullptr;
}

template <class Type>
DoublyLinkedList<Type> :: getFront()
{
    return this->front;
}

template <class Type>
DoublyLinkedList<Type> :: getEnd()
{
    return this->end;
}



#endif /* DoublyLinkedList_h */
