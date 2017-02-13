//
//  StructureController.hpp
//  MegaProject
//
//  Created by Farr, Aaron on 2/8/17.
//  Copyright © 2017 Farr, Aaron. All rights reserved.
//

#ifndef StructureController_hpp
#define StructureController_hpp

#include "Node.hpp"


class StructureController
{
private:
    Node<string> wordNode;
    Node<int> numberNode;
    
    void testIntArray();
    void testNodeTypes();
public:
    StructureController();
    void start();
    
};

#endif /* StructureController_hpp */
