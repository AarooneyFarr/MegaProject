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
    
    
};

#endif /* List_h */
