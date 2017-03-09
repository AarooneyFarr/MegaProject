//
//  Stack.hpp
//  MegaProject
//
//  Created by Farr, Aaron on 3/1/17.
//  Copyright © 2017 Farr, Aaron. All rights reserved.
//

#ifndef Stack_h
#define Stack_h

#include "../Model/DoublyLinkedList.hpp"

template <class Type>
class Stack : DoublyLinkedList<Type>
{
private:
    BiDirectionalNode<Type> * front;
    BiDirectionalNode<Type> * end;
    int size;
public:
    Stack();
    ~Stack();
    
    void add(Type value);
    Type remove(int index);
    
    Type pop();
    Type peek();
    void push(Type data);
};

template <class Type>
Stack<Type> :: Stack()
{
    
}

template <class Type>
Stack<Type> :: ~Stack()
{
    BiDirectionalNode<Type> * remove = this->getFront();
    while(this->getFront() != nullptr)
    {
        this->setFront(this->getFront()->getNextPointer());
        delete remove;
        remove = this->getFront();
    }
}

/*
 The add method only adds to the end of the stack. never at an index
 */
template <class Type>
void Stack<Type> :: add(Type valueToAdd)
{
    push(valueToAdd);
}

/*
 Used to avoid abstract status.
 Asserts that the size is correct and calls the pop method.
 */
template <class Type>
Type Stack<Type> :: remove(int index)
{
    assert(index == this->getSize() - 1 && this->getSize() > 0);
    return pop();
}

/*
 1. Assert size > 0.
 2. Get data from end node.
 3. Move end to ends previous.
 4. Delete old end node.
 5. Decrease size.
 */
template <class Type>
Type Stack<Type> :: pop()
{
    assert(this->getSize() > 0);
    Type removed =  this->getEnd()->getNodeData();
    
    BiDirectionalNode<Type> * update = this->getEnd();
    update = update->getPreviousPointer();
    
    if(update != nullptr)
    {
    update->setNextPointer(nullptr);
    }
    
    delete this->getEnd();
    
    this->setEnd(update);
    
    this->setSize(this->getSize() -1);
    
    return removed;
}

template <class Type>
Type Stack<Type> :: peek()
{
    assert(this->getSize() > 0);
    return this->getEnd()->getNodeData();
}

/*
 Adds the supplied object to the stack to the end.
 Set new obeject to point to end
 Increases the size by one
 Adjusts the end pointer to reflect the new end of the stack
 */
template <class Type>
void Stack<Type> :: push(Type addedThing)
{
    BiDirectionalNode<Type> * addToStack = new BiDirectionalNode<Type>(addedThing);
    
    if(this->size == 0 || this->getFront() == nullptr || this->getEnd() == nullptr)
    {
        this->setFront() = addToStack;
      
    }
    else
    {
        this->getEnd()->setNextPointer(addToStack);
        addToStack->setPreviousPointer(this->getEnd());
      

    }
    
    
      this->setEnd() = addToStack;
      this->setSize(this->getSize() + 1);
    
}

#endif /* Stack_h */
