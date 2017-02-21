//
//  StructureController.cpp
//  MegaProject
//
//  Created by Farr, Aaron on 2/8/17.
//  Copyright © 2017 Farr, Aaron. All rights reserved.
//

#include "../Model/IntNodeArray.hpp"
#include "StructureController.hpp"
#include <iostream>
#include "../Model/Timer.hpp"

using namespace std;

StructureController :: StructureController()
{
    wordNode = Node<string>("derpy");
    numberNode = Node<int>();
    this->numberArray = Array<int>(9);
}

void StructureController :: testArrayTemplate()
{
    cout << "Array Template" << endl;
    Timer arrayTimer;
    arrayTimer.startTimer();
    int test [9];
    arrayTimer.stopTimer();
    arrayTimer.displayTimerInformation();
    arrayTimer.resetTimer();
    arrayTimer.startTimer();
    numberArray = Array<int>(9);
    arrayTimer.stopTimer();
    arrayTimer.displayTimerInformation();
    
}

void StructureController :: testAdvancedFeatures()
{
    int showDestructor = 0;
    
    if(showDestructor <1)
    {
        Array<string> words = Array<string>(4);
        cout << "There should be messages about destuctor next." << endl;
    }
    
    Array<string> words = Array<string>(4);
    words.setAtIndex(0, "at zero");
    words.setAtIndex(3, "in the last spot");
    Array<string> copiedWords = Array<string>(words);
    
    cout << "These should match: " << endl;
    cout << words.getFromIndex(0) << " should be the same as " << copiedWords.getFromIndex(0) << endl;
    
    copiedWords.setAtIndex(3,"Changed the contents of the copied Array");
}

void StructureController :: testIntArray()
{
    cout << "Creating an IntNodeArray" << endl;
    IntNodeArray temp = IntNodeArray(3);
    
    
    
    for(int spot = 0; spot < 3; spot++)
    {
        temp.setAtIndex(spot,spot);
    }
    
    for(int spot = 0; spot < temp.getSize(); spot++)
    {
        cout << temp.getFromIndex(spot) << " is at " << spot << endl;
        
    }
}

void StructureController:: testNodeTypes()
{
    
}

void StructureController :: start()
{
    cout << "Going to test the IntNodeArray" << endl;
    testIntArray();
    cout << "Finished IntNodeArray" << endl;
}

