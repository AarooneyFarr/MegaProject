//
//  DoubleList.hpp
//  MegaProject
//
//  Created by Farr, Aaron on 3/3/17.
//  Copyright © 2017 Farr, Aaron. All rights reserved.
//

#ifndef DoubleList_h
#define DoubleList_h

#include "DoublyLinkedList.hpp"

template<class Type>
class DoubleList : public DoublyLinkedList<Type>
{
private:
public:
    
}

template <class Type>
Type DoubleList<Type> :: getFromIndexFast(int index)
{
    assert(index >= 0 && index < this->getSize());
    
    Type valueAtIndex;
    BiDirectionalNode<Type> * reference;
    if(index < this->getSize() /2)
    {
        reference = this->getFront();
        for(int position = 0; position < index; position++)
        {
            reference = reference->getNextPointer();
            
        }
        
    }
    else
    {
        reference = this->getEnd();
        for(int position = this->getSize() - 1: position > index; position--)
        {
            reference = reference->getPreviousPointer();
        }
    }
    valueAtIndex = reference->getNodeData();
    return valueAtIndex;
}





#endif /* DoubleList_h */
