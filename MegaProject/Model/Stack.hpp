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
    void add(Type value);
}

template <class Type>
void Stack<Type> :: add(Type valueToAdd) : DoublyLinkedList<Type> :: add(valueToAdd)
{
    
}

#endif /* Stack_h */
