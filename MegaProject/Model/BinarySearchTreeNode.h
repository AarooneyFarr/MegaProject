//
//  BinarySearchTreeNode.h
//  MegaProject
//
//  Created by Farr, Aaron on 4/11/17.
//  Copyright © 2017 Farr, Aaron. All rights reserved.
//

#ifndef BinarySearchTreeNode_h
#define BinarySearchTreeNode_h

#include "Node.hpp"

template <class Type>
class BinarySearrchTreeNode : public Node<Type>
{
private:
    BinarySearchTreeNode<Type> * root;
    BinarySearchTreeNode<Type> * leftChild;
    BinarySearchTreeNode<Type> * rightChild;
    
public:
    BinarySearchTreeNode();
    BinarySearchTreeNode(Type data);
    
    
    BinarySearchTreeNode<Type> * getRootPointer();
    BinarySearchTreeNode<Type> * getLeftChild();
    BinarySearchTreeNode<Type> * getRightChild();
    
    void setRootPointer(BinarySearchTreeNode<Type> * root);
    void setLeftChild(BinarySearchTreeNode<Type> * left);
    void setRightChild(BinarySearchTreeNode<Type> right);
    
};

template <class Type>
BinarySearchTreeNode :: BinarySearchTreeNode()
{
    this->root = nullptr;
    this->leftChild = nullptr;
    this->rightChild = nullptr;
    
    
}

template <class Type>
BinarySearchTreeNode :: BinarySearchTreeNode(Type data) : Node<Type>(data)
{
    this->root = nullptr;
    this->leftChild = nullptr;
    this->rightChild = nullptr;
    
    
}

template <class Type>
BinarySearchTreeNode<Type> * BinarSearchTreeNode<Type> :: getRootPointer()
{
    return  this->root;
    
    
}

template <class Type>
BinarySearchTreeNode<Type> * BinarSearchTreeNode<Type> :: getLeftChild()
{
    return  this->leftChild;
    
    
}

template <class Type>
BinarySearchTreeNode<Type> * BinarSearchTreeNode<Type> :: getRightChild()
{
    return  this->rightChild;
    
    
}
#endif /* BinarySearchTreeNode_h */
