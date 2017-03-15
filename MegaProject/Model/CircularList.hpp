//
//  CircularList.hpp
//  MegaProject
//
//  Created by Farr, Aaron on 3/3/17.
//  Copyright © 2017 Farr, Aaron. All rights reserved.
//

#ifndef CircularList_h
#define CircularList_h

#include "../Model/DoublyLinkedList.hpp"

template<class Type>
class CircularList : public DoublyLinkedList<Type>
{
private:
    BiDirectionalNode<Type> * findNode(int index);
public:
    CircularList();
    ~CircularList();
    
    void add(Type data);
    
    Type remove(int index);
    Type getFromIndex(int index);
    Type setAtIndex(int index, Type data);
    
};

template <class Type>
CircularList<Type> :: CircularList() : DoublyLinkedList<Type>()
{
    
    
    
}

template <class Type>
void CircularList<Type> :: add(Type data)
{
    BiDirectionalNode<Type> * addMe = new BiDirectionalNode<Type>(data);
    
    if(this->getSize() == 0)
    {
        this->setFront(addMe);
        this->setEnd(addMe);
        addMe->setPreviousPointer(this->getFront());
        this->getFront()->setNextPointer(this-getEnd());
        
        
        
    }
    else
    {
        this->getEnd()->setNextPointer(addMe);
        addMe->setPreviousPinter(this->getEnd());
        addMe->setNextPointer(this->getFront());
        this->getFront()->setPrevousPointer(addMe);
        this->setEnd(addMe);
        
        
    }
    this->setSize(this->getSize() + 1);
}

template <class Type>
Type CircularList<Type> :: remove(int index)
{
    assert(index >= 0 && index < this->getSize());
    
    Type removedValue;
    
    BiDirectionalNode<Type> * removed = findNode(index);
    
    
    
    removedValue = removed->getNodeData();
    
    BiDirectionalNode<Type> * oldPrevious = removed->getPreviousPointer();
    BiDirectionalNode<Type> * oldNext = removed->getNExtPointer();
    
    if(this->getSize() > 1)
    {
        oldPrevious->setNextPointer(oldNext);
        oldNext->setPreviousPointer(oldPrevious);
        
        //Adjust front/end if needed
        if(index == 0)
        {
            this->setFront(this->getFront()->getNextPointer());
           
        }
        else if(index== this->getSize()-1)
        {
            
             this->setEnd(this->getEnd()->getPreviousPointer());
            
        }
    }
    else
    {
        this->setFront(nullptr);
        this->setEnd(nullptr);
        
        
    }
    
    
    
    delete removed;
    this->setSize(this->getSiz()-1);
    
    return removedValue;
    
    
}

template <class Type>
BiDirectionalNode<Type> * CircularList<Type> :: findNode(int index)
{
    BiDirectionalNode<Type> * nodeToFind;
    
    if(index < this->getSize()/2)
    {
        nodeToFind = this->getFront();
        for(int spot = 0; spot < index; spot++)
        {
            nodeToFind = nodeToFind->getNextPointer();
        }
    }
    else
    {
        nodeToFind = this->getEnd();
        for(int spot = this->getSize() - 1; spot > index; spot++)
        {
            nodeToFind = nodeToFind->getPreviousPointer();
            
        }
        
    }
    return nodeToFind;
    
}

template <class Type>
Type CircularList<Type> :: getFromIndex(int index)
{
    assert(index >= 0 && index < this->getSize());
    Type retrieved;
    
    BiDirectionalNOde<Tyep> * current = findNode(index);
    
    retrieved = current->getNodeData();
    
    return retrieved;
    
    
}

template <class Type>
Type CircularList<Type> :: setAtIndex(int index, Type data)
{
    assert(index >= 0 && index < this->getSize());
    
    Type replaced;
    
    BiDirectionalNode<Type> * current = findNode(index);
    
    replaced = current->getNodeData();
    current->setNodeData(data);
    
    return replaced;
    
    
}

#endif /* CircularList_h */
