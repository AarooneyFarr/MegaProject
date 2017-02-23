//
//  List.hpp
//  MegaProject
//
//  Created by Farr, Aaron on 2/21/17.
//  Copyright © 2017 Farr, Aaron. All rights reserved.
//

#ifndef List_h
#define List_h

#include "Node.hpp"
#include <assert.h>
#include <iostream>

using namespace std;

template <class Type>
class List
{
private:
    int size;
    Node<Type>* front;
    Node<Type> end;
public:
    List<Type>();
    
    ~List<Type>();
    List<Type>(const Array<Type> & toBeCopied);
    //void operator = (const Array<Type> & toBeAssigned);
    
    
    void addAtIndex(int index, Type value);
    void add(Type value);
    Type remove(int index);
    Type setAtIndex(int index, Type data);
    Type getFromIndex(int index);
    bool contains(Type data);
    int getSize() const;
    Node<Type>* getFront() const;
    Node<Type>* getEnd() const;
    
    
};

template <class Type>
List<Type> :: List()
{
    this->size = 0;
    this->front = nullptr;
    this->end = nullptr;
    
}

template <class Type>
void List<Type> :: addFront(Type value)
{
    Node<Type> * first = new Node(value);

    
    if(size == 0)
    {
        //first node in the list, (Front)
        this->front = first;
        this->end = first;
        
    }
    else
    {
       // Node<Type> * newFirst = new Node<type>(value);
        first->setNodePointer(front);
        
        front = first;
    }
    size++;
   
}

template <class Type>
void List<type> :: addEnd(Type data)
{
    Node<Type> * added = new Node<Type>(data);
    if(size==0)
    {
        this->front = added;
        this->end = added;
    }
    else
    {
        end->setNodePointer(added);
        this->end = added;
    }
}

template <class Type>
void List<Type> :: adAtIndex(int index, Type value)
{
    assert(index >= 0 && index <= size);
    if(index==0)
    {
        addFront(value);
    }
    else if(index == size)
    {
        addEnd(value);
    }
    else
    {
       
        Node<Type> insertedNode = new Node<Type>(value);
        Node<Type> * current = front;
        Node<Type> * previous = nullptr;
        
        for(int position = 0; position < index; position++)
        {
            previous = current;
            current = current-> getNodePointer();
            
        }
        
        previous->setNodePointer(insertedNode);
        insertedNode->setNodePointer(current);
        
        
        size++;

    }
    
    
    
    
    
    
}

template <class Type>
Type List<Type> :: getFromIndex(int index)
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
Type Array<Type> :: setAtIndex(int index, Type value)
{
    assert(index>= 0 && index < size);
    Node<Type> * current = front;
    for(int position = 0; position < index; position ++)
    {
        current = current->getNodePointer();
        
    }
    
    current->setNodeData(value);
    return current;
}

template <class Type>
Type List<Type> :: remove(int index)
{
    
    assert(index>= 0 && index < size);
    
    Type removed;
    
    Node<Type> * current = front;
    Node<Type> * previous = nullptr;
    Node<Type> * toBeRemoved = nullptr;
    
    if(index == 0)
    {
        toBeRemoved = front;
        this->front = front->getNodePointer();
    }
    else if(index == size-1)
    {
        for(int spot = 0; spot < index: spot++)
        {
            previouse = current;
            current = current->getNodePointer();
            
        }

        toBeRemoved = current;
        previous->setNodePointer(nullptr);
        this->end = previous;
    }
    else
    {
        for(int spot = 0; spot < index: spot++)
        {
            previouse = current;
            current = current->getNodePointer();
            
        }
        
        toBeRemoved = current;
        current = toBeRemoved->getNodePointer();
        previous->setNodePointer(current);
    }
    
    
    
   
    
    removed = toBeRemoved->getNodeData();
    
    delete toBeRemoved;
    
    size--;
    return removed;
}




#endif /* List_h */
