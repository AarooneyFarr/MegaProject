//
//  BiDirectionalNode.hpp
//  MegaProject
//
//  Created by Farr, Aaron on 2/27/17.
//  Copyright © 2017 Farr, Aaron. All rights reserved.
//

#ifndef BiDirectionalNode_h
#define BiDirectionalNode_h

template <class Type>
class BiDirectionalNode : public Node<Type>
{
private:
    Type Data;
    BiDirectionalNode<Type> * nextPointer
    BiDirectionalNode<Type> * previousPointer
    
public:
    BiDirectionalNode();
    BiDirectionalNode(Type data);
    BiDirectionalNode(Type data, BiDirectionalNode<Type> * previous, BiDirectionalnode<Type> * next);
    
    
//    Type getNodeData();
    BiDirectionalNode<Type> * getNextPointer();
    BiDirectionalNode<Type> * getPreviousPointer();
    
//    void setNodeData(Type data);
    void setNextPointer(BiDirectionalNOde<Type> * next);
    void setPreviousPointer(BiDirectionalNode<Type> * previous);
    
};

template <class Type>
BiDirectionalNode :: BiDirectionalNode() : Node()
{
    this->previous = nullptr;
    this->nextPointer = nullptr;
}

template <class Type>
BiDirectionalNode :: BiDirectionalNode(Type data) : Node(data)
{
    this->previous = nullptr;
    this->nextPointer = nullptr;

}

template <class Type>
BiDirectionalNode<Type> :: BiDirectionalNode(Type data, BiDirectionalNode<Type> * previous, BiDirectionalNode<Type> * next) : Node(data, next)
{
    this->nextPointer = next;
    this->previous = previous;
    
}

template <class Type>
BiDirectionalNode<Type> * BiDirectionalNode<Type> :: getNextPointer()
{
    return this->next;
}


template <class Type>
BiDirectionalNode<Type> * BiDirectionalNode<Type> :: getPreviousPointer()
{
    return this->previous;
}

template <class Type>
void BiDirectionalNode<Type> :: setNextPointer(BiDirectionalNode<Type> * next)
{
    this->next = next;
}

template <class Type>
void BiDirectionalNode<Type> :: setPreviousPointer(BiDirectionalNode<Type> * previous)
{
    this->previous = previous;
}


#endif /* BiDirectionalNode_h */

