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

template <class Type>
void Stack<Type> :: add(Type valueToAdd) : DoublyLinkedList<Type> :: add(valueToAdd)
{
    
}

#endif /* Stack_h */
