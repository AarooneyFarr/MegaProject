//
//  IntNodeArray.cpp
//  MegaProject
//
//  Created by Farr, Aaron on 2/8/17.
//  Copyright © 2017 Farr, Aaron. All rights reserved.
//

#include "../Model/IntNodeArray.hpp"
#include <assert.h>

IntNodeArray :: IntNodeArray(int size)
{
    assert(size > 0);
    this->size = size;
    
    this->head = new IntNode();
    
    for(int index = 1; index < size; index++)
    {
        IntNode * currentNode = new IntNode();
        currentNode->setNextPointer(head);
        head = currentNode;
        
    }
}

int IntNodeArray :: getFromIndex(int index)
{
    assert(index >= 0 && index < size);
    int value = 0;
    IntNode * current = head;
    
    for(int position = 0; position < index; position++)
    {
        current = current->getNextPointer();
    }
    
    value = current->getNodeData();
    
    return value;
}

void IntNodeArray :: setAtIndex(int index, int value)
{
    assert(index >= 0 && index < size);
    IntNode * current = head;
    
    for(int position = 0; position < index; position ++)
    {
        current = current->getNextPointer();
        
    }
    
    current->setNodeData(value);
    
}

int IntNodeArray :: getSize()
{
    return size;
}
