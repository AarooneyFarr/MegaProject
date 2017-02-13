//
//  Node.hpp
//  MegaProject
//
//  Created by Farr, Aaron on 2/13/17.
//  Copyright © 2017 Farr, Aaron. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp


template <class Type>
class Node
{
private:
    Type nodeData;
    Node<Type>* nodePointer;
    
public:
    Node<Type>();
    Node<Type>(Type data);
    Node<Type>(type data, Node<Type> * nextPointer);
    
    Type getNodeData();
    Node<Type> * getNodePointer();
    void setNodeData(Type value);
    void setNodePointer(Node<Type> * nextPointer);
    
};

#endif /* Node_hpp */
