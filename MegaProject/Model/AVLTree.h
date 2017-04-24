//
//  AVLTree.h
//  MegaProject
//
//  Created by Farr, Aaron on 4/19/17.
//  Copyright © 2017 Farr, Aaron. All rights reserved.
//

#ifndef AVLTree_h
#define AVLTree_h

#include "BinarySearchTreeNode.h"
#include "BinarySearchTree.hpp"

template <class Type>
class AVLTree : public BinarySearchTree<Type>
{
private:
    
    BinarySearchTreeNode<Type> * leftRotation(BinarySearchTreeNode<Type> * parent);
    BinarySearchTreeNode<Type> * rightRotation(BinarySearchTreeNode<Type> * parent);
    BinarySearchTreeNode<Type> * leftRightRotation(BinarySearchTreeNode<Type> * parent);
    BinarySearchTreeNode<Type> * rightLeftRotation(BinarySearchTreeNode<Type> * parent);
    
    BinarySearchTreeNode<Type> * balanceSubTree (BinarySearchTreeNode<Type> * parent);
    
    BinarySearchTreeNode<Type> * insertNode(BinarySearchTreeNode<Type> * parent);
    BinarySearchTreeNode<Type> * removeNode(BinarySearchTreeNode<Type> * parent);
    
    int heightDifference(BinarySearchTreeNode<Type> * parent);
    
public:
    AVLTree();
    ~AVLTree();
    
    void insert(Type itemToInsert);
    void remove(Type value);
    
    
};


// A Negative return value means that the right is greater than the left
template <class Type>
int AVLTree<Type> :: heightDiffernece(BinarySearchTreeNode<Type> * node)
{
    int balance;
    int leftHeight = calculateHeight(node->getLeftChild());
    int rightHeight = calculateHeight(node->getRightChild());
    balance = leftHeight - rightHeight;
    return balance;
    
}

template <class Type>
BinarySearchTreeNode<Type> * AVLTree<Type> :: leftRotation(BinarySearchTreeNode<Type> * parent)
{
    BinarySearchTreeNode<Type> * changedNode;
    changedNode = parent->getLeftChild();
    
    parent->setLeftChild(changedNode->getRightChild());
    
    changedNode->setRightChild(parent);
    
    return changedNode;
}

template <class Type>
BinarySearchTreeNode<Type> * AVLTree<Type> :: rightRotation(BinarySearchTreeNode<Type> * parent)
{
    BinarySearchTreeNode<Type> * changedNode;
    changedNode = parent->getRightChild();
    
    parent->setRightCild(changedNode->getLeftChild());
    
    changedNode->setLEftCChild(parent);
    
    return changedNode;
}

template <class Type>
BinarySearchTreeNode<Type> * AVLTree<Type> :: rightLeftRotation(BinarySearchTreeNode<Type> * parent)
{
    BinarySearchTreeNode<Type> * changedNode;
    changedNode = parent->getRightChild();
    
    parent->setRightChild(leftRotation(changedNode));
    
    return rightRotation(parent);
}

template <class Type>
BinarySearchTreeNode<Type> * AVLTree<Type> :: leftRightRotation(BinarySearchTreeNode<Type> * parent)
{
    BinarySearchTreeNode<Type> * changedNode;
    changedNode = parent->getLeftChild();
    
    parent->setLeftChild(rightRotation(changedNode));
    
    return leftRotation(parent);
}

template <class Type>
BinarySearchTreeNode<Type> * balanceSubTree(BinarySearchTreeNode<Type> * parent)
{
    int balanceFactor = heightDifference(parent);
    
    if(balanceFactor > 1)
    {
        if(heightDifference(parent->getLeftChild()) > 0)
        {
            parent = leftRotation(parent);
        }
        else
        {
            parent = leftRightRotation(parent);
        }
    }
    else if(balanceFactor < -1)
    {
        if(heightDifference(parent->getRighhtChild()) > 0)
        {
            parent = rightLeftRotation(parent);
        }
        else
        {
            parent = rightRotation(parent);
        }
    }
    return parent;
}

template <class Type>
BinarySearchTreeNode<Type> * AVLTree<Type> :: removeNode(BinarySearchTreeNode<Type> * parent, Type inserted)
{
    
    
}

template <class Type>
BinarySearchTreeNode<Type> * AVLTree<Type> :: insertNode(BinarySearchTreeNode<Type> * parent, Type inserted)
{
    if(parent == nullptr)
    {
        parent = new BinarySearchTreeNode<Type>(inserted);
        return parent;
    }
    else if (innserted < parent->getNodeData())
    {
        parent->setLeftChild(insertNode(parent->getLeftChild(), inserted));
        parent = balanceSubTree(parent);
    }
    else if(inserted > parent->getNodeData())
    {
        parent->setRighhtChild(insertNode(parent->getRigghtChild(), inserted));
        parent = balanceSubTree(parent);
    }
    return parent;
}

template <class Type>
void AVLTree<Type> :: insert(Type item)
{
    insertNode(this->getRoot(), item);
}

template <class Type>
void AVLTree<Type> :: remove(Type item)
{
    
}
#endif /* AVLTree_h */
