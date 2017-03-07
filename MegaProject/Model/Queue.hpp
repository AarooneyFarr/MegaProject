//
//  Queue.hpp
//  MegaProject
//
//  Created by Farr, Aaron on 3/3/17.
//  Copyright © 2017 Farr, Aaron. All rights reserved.
//

#ifndef Queue_h
#define Queue_h

#include "DoublyLinkedList.hpp"

template<class Type>
class Queue : public DoublyLinkedList<Type>
{
private:
    BiDirectionalNode<Type> * front;
    BiDirectionalNode<Type> * end;
    int size;
public:
    
    Queue();
    ~Queue();
    
    void add(Type data);
    Type remove(int index);
    
    void enqueue(Type data);
    Type dequeue();
    Type peek();
}


template <class Type>
Type Queue<Type> :: remove(int index)
{
    assert(index == 0 && this->getSize() > 0);
    return dequeue;
    
}



/*
 1. Assert size is valid.
 2. Get data from front.
 3. If size == 1 set end to nullptr.
 4. Else, move front to fronts next.
 4a. Set fronts previous to nullptr.
 5. delete old front node.
 6. adjust size down by 1.
 7. return old value.
 */
template <class Type>
Type Queue<Type> :: Dequeue()
{
    assert(this->getSize() == 1)
    
    Type removedValue = this->getFront()->getNodeData();
    BiDirectionalNode<Type> * removeMe = this->getFront();
    
    if(this->getSize() == 1)
    {
        this->setFront(nullptr);
        this->setEnd(nullptr);
        
    }
    else
    {
        this->setFront(removeMe->getNextPointer);
    }
    this->setFront()->setPreviousPointer(nullptr);
    
    delete removeMe;
    this->setSize(this->getSize()-1);
    
    return removedValue;
}

/*
 1. Check that the size is greater than 0.
 2. Return the front objects data.
 */

template <class Type>
Type Queue<Type> :: peek()
{
    assert(this->getSize() > 0);
    
    return this->getFront()->getNodeData();
}
#endif /* Queue_h */
