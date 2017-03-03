//
//  IntNode.hpp
//  MegaProject
//
//  Created by Farr, Aaron on 2/6/17.
//  Copyright © 2017 Farr, Aaron. All rights reserved.
//

#ifndef IntNode_hpp
#define IntNode_hpp

class IntNode
{
private:
    int nodeData;
    IntNode * nextPointer;
public:
    //Constructors
    IntNode();
    IntNode(int value);
    IntNode(int value, IntNode* nextNode);
    
    int getNodeData();
    IntNode * getNextPointer();
    
    void setNodeData(int value);
    void setNextPointer(IntNode* nextNode);
};

#endif /* IntNode_hpp */
