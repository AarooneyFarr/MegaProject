//
//  Stack.hpp
//  MegaProject
//
//  Created by Farr, Aaron on 3/1/17.
//  Copyright © 2017 Farr, Aaron. All rights reserved.
//

#ifndef Stack_h
#define Stack_h

template <class Type>
class Stack :: DoublyLinkedList<Type>
{
private:
public:
    Stack();
    ~Stack();
    
    void add(Type value);
    
    Type remove(int index);
    Type pop();
    Type peek();
    Type push(Type data);
}

/*
 The add method only adds to the end of the stack. never at an index
 */
template <class Type>
void Stack<Type> :: add(Type valueToAdd) : DoublyLinkedList<Type> :: add(valueToAdd)
{
    push(valueToAdd);
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
    BiDirectionalNode<Type> * addToStack = new BiDirectionalNode(addedThing);
    
    if(this->size == 0 || this->front == nullptr || this->end == nullptr)
    {
        this->front = addToStack;
      
    }
    else
    {
        this->end->setNextPointer(addToStack);
        addToStack->setPreviousPointer(this->end);
      

    }
    
    
      this->end = addToStack;
    this->size++;
    
}

#endif /* Stack_h */
