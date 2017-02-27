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
    
    
    Type getNodeData();
    BiDirectionalNode<Type> * getNextPointer();
    BiDirectionalNode<Type> * getPreviousPointer();
    
    void setNodeData(Type data);
    void setNextPointer(BiDirectionalNOde<Type> * next);
    void setPreviousPointer(BiDirectionalNode<Type> * previous);
    
};

#endif /* BiDirectionalNode_h */

