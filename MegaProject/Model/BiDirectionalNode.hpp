//
//  BiDirectionalNode.hpp
//  MegaProject
//
//  Created by Farr, Aaron on 2/27/17.
//  Copyright © 2017 Farr, Aaron. All rights reserved.
//

#ifndef BiDirectionalNode_h
#define BiDirectionalNode_h

#include "Node.hpp"

template <class Type>
class BiDirectionalNode : public Node<Type>
{
private:
    //Type Data;
    BiDirectionalNode<Type> * nextPointer;
    BiDirectionalNode<Type> * previousPointer;
    
public:
    BiDirectionalNode();
    BiDirectionalNode(Type data);
    BiDirectionalNode(Type data, BiDirectionalNode<Type> * previous, BiDirectionalNode<Type> * next);
    
    
//    Type getNodeData();
    BiDirectionalNode<Type> * getNextPointer();
    BiDirectionalNode<Type> * getPreviousPointer();
    
//    void setNodeData(Type data);
    void setNextPointer(BiDirectionalNode<Type> * next);
    void setPreviousPointer(BiDirectionalNode<Type> * previous);
    
};

template <class Type>
BiDirectionalNode<Type> :: BiDirectionalNode() : Node<Type>()
{
    this->previous = nullptr;
    this->nextPointer = nullptr;
}

template <class Type>
BiDirectionalNode<Type> :: BiDirectionalNode(Type data) : Node<Type>(data)
{
    this->previousPointer = nullptr;
    this->nextPointer = nullptr;

}

template <class Type>
BiDirectionalNode<Type> :: BiDirectionalNode(Type data, BiDirectionalNode<Type> * previous, BiDirectionalNode<Type> * next) : Node<Type>(data, next)
{
    this->next = next;
    this->previous = previous;
    
}

template <class Type>
BiDirectionalNode<Type> * BiDirectionalNode<Type> :: getNextPointer()
{
    return this->nextPointer;
}


template <class Type>
BiDirectionalNode<Type> * BiDirectionalNode<Type> :: getPreviousPointer()
{
    return this->previousPointer;
}

template <class Type>
void BiDirectionalNode<Type> :: setNextPointer(BiDirectionalNode<Type> * next)
{
    this->nextPointer = next;
}

template <class Type>
void BiDirectionalNode<Type> :: setPreviousPointer(BiDirectionalNode<Type> * previous)
{
    this->previousPointer = previous;
}


#endif /* BiDirectionalNode_h */

