//
//  StructureController.hpp
//  MegaProject
//
//  Created by Farr, Aaron on 2/8/17.
//  Copyright © 2017 Farr, Aaron. All rights reserved.
//

#ifndef StructureController_hpp
#define StructureController_hpp

#include "../Model/Node.hpp"
#include "../Model/Array.h"

#include <string>

using namespace std;

class StructureController
{
private:
   Node<string> wordNode;
   Node<int> numberNode;
   Array<int> numberArray;
    
    void testIntArray();
    void testNodeTypes();
    void testArrayTemplate();
public:
    StructureController();
    void start();
    
};

#endif /* StructureController_hpp */
