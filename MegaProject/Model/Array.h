//
//  Array.h
//  MegaProject
//
//  Created by Farr, Aaron on 2/15/17.
//  Copyright © 2017 Farr, Aaron. All rights reserved.
//

#ifndef Array_h
#define Array_h

#include "Node.hpp"
#include <assert.h>

template <class Type>
class Array
{
private:
    Node<Type>* front;
    int size;
public:
    Array<Type>();
    Array<Type>(int size);
    int getSize();
    Type getFromIndex(int index);
    void setAtIndex(int index, Type value);
    
};

#endif /* Array_h */

    /*
     Creates an array of specified size
     */
template <class Type>
Array<Type> :: Array(int size)
    {
        assert(size > 0);
        this->size = size;
        
        this->front = new Node<Type>();
        
        for(int index = 1; index < size; index++)
        {
            Node<Type> * currentNode = new Node<Type>();
            currentNode->setNodePointer(front);
            front = currentNode;
        }
        
    }
    template <class Type>
       Array<Type> :: Array()
    {
        //DO NOT USE!!
    }

template <class Type>
    Type Array<Type> :: getFromIndex(int index)
    {
        assert(index >= 0 && index < size);
        Type value;
        
        Node<Type> * current = front;
        
        for(int position = 0; position < index; position++)
        {
            current = current->getNodePointer();
        }
        value = current->getNodeData();
        return value;
       
        
    }

template <class Type>
    int Array<Type> :: getSize()
    {
        return size;
    }
    
    
template <class Type>
    void Array<Type> :: setAtIndex(int index, Type value)
    {
        assert(index>= 0 && index < size);
        Node<Type> * current = front;
        for(int position = 0; position < index; position ++)
        {
            current = current->getNOdePointer();
            
        }
        
        current->setNodeData(value);
    }




