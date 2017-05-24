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
#include "../Model/Timer.hpp"
#include "../Model/IntNodeArray.hpp"
#include "../Model/List.hpp"
#include "../Model/DoubleList.hpp"
#include "../Model/Stack.hpp"
#include "../Model/Queue.hpp"
#include "../Model/CircularList.hpp"
#include <string>
#include "../Model/BinarySearchTree.hpp"
#include "../Model/Tree.hpp"
#include "../Model/HashTable.hpp"

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
    void testAdvancedFeatures();
    void testListIntro();
    void testListTiming();
    void testMemeQueue();
    void testLists();
    void testIntStack();
    void testBinarySearchTreeOperations();
    void testGraph();
    void testHashTable();
   

public:
    StructureController();
    void start();
    
};

#endif /* StructureController_hpp */
