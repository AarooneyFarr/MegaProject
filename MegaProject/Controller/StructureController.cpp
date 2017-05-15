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
#include "../Model/List.hpp"
#include "../Model/Meme.hpp"
#include "../Model/Tree.hpp"
#include "../Model/BinarySearchTree.hpp"


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
    //cout << "Going to test the IntNodeArray" << endl;
    //testIntArray();
    //cout << "Finished IntNodeArray" << endl;
   // testListIntro();
    //testListTiming();
    //testMemeQueue();
    //testLists();
    //testIntStack();
    testBinarySearchTreeOperations();
   

}

void StructureController :: testListIntro()
{
    List<int> sample;
    sample.addFront(2);
    sample.addEnd(3);
    sample.addFront(1);
    cout << "this should go 1, 2, 3." << endl;
    
    
    
}

void StructureController :: testListTiming()
{
    DoubleList<int> timingList;
    
    for(int index = 0; index < 10000; index++)
    {
        timingList.add(rand());
    }
    
    long slowTime [1000];
    long fastTime [1000];
    double averageSlow = 0.00, averageFast = 0.00;
    Timer doubleTimer;
    
    for(int index = 0; index < 1000; index++)
    {
        int randomIndex = rand() % 10000;
        doubleTimer.startTimer();
        timingList.getFromIndex(randomIndex);
        doubleTimer.stopTimer();
        slowTime[index] = doubleTimer.getExecutionTimeInMicroseconds();
        doubleTimer.resetTimer();
        
        doubleTimer.startTimer();
        timingList.getFromIndexFast(randomIndex);
        doubleTimer.stopTimer();
        fastTime[index] = doubleTimer.getExecutionTimeInMicroseconds();
        doubleTimer.resetTimer();
       
        averageSlow += slowTime[index];
        averageFast += fastTime[index];

    }
    
    averageSlow = averageSlow/1000.00;
    averageFast = averageFast/1000.00;
  
    cout << "The average speed for the getFromIndex method was: " << averageSlow << " microseconds."<< endl;
    cout << "The average speed for the getFromIndexFast method was: " << averageFast << " microseconds."<< endl;
    
    cout << "A time savings?? of: " << averageSlow - averageFast << " microseconds."<< endl;
    
   
}

void StructureController :: testMemeQueue()
{
    Meme firstMeme("toddler fist! with pinwheel");
    Queue<Meme> memeQueue;
    memeQueue.add(firstMeme);
    memeQueue.add(firstMeme);
    Meme secondMeme;
    secondMeme.setDankness(8453);
    memeQueue.enqueue(secondMeme);
    memeQueue.peek();
    
    cout << "Size should be 3 and is: " << memeQueue.getSize() << endl;
    memeQueue.remove(0);
   
    cout << "Size should be 2 and is: " << memeQueue.getSize() << endl;
    
    
    Meme temp = memeQueue.dequeue();
    cout << "this should be 27 and is: " << temp.getDankness() << endl;
    
    
}

void StructureController :: testLists()
{
    List<int> sample;
    
    sample.addFront(2);
    sample.addFront(1);
    sample.addEnd(3);
    sample.setAtIndex(2,5);
    sample.remove(0);
    sample.addAtIndex(0,0);
    cout << "This should be 1 and is: "<< sample.contains(2) << endl;
    cout << "This should be 025 and is: " << sample.getFromIndex(0) << sample.getFromIndex(1) << sample.getFromIndex(2) << endl;
    cout << "This should be 0 and is: " << sample.getFromIndex(0) << endl;
    
    
}

void StructureController :: testIntStack()
{
    int firstInt = 1;
    Stack<int> intStack;
    intStack.push(firstInt);
    int secondInt = 2;
    intStack.push(secondInt);
    intStack.pop();
    cout << "This should be 1 and is " << intStack.peek() << endl;
    intStack.add(2);
    intStack.remove(1);
    
}

void StructureController :: testBinarySearchTreeOperations()

{
    
    BinarySearchTree<int> numbers;
    
    numbers.insert(9843);
    
    numbers.insert(10);
    
    numbers.insert(43);
    
    numbers.insert(-123);
    
    numbers.insert(23465);
    
    numbers.insert(10); // won't go in
    
    numbers.insert(43243);
    
    numbers.insert(-45677654);
    
    numbers.insert(92165);
    
    
    
    cout << "Size should be 8 and is: " << numbers.getSize() << endl;
    
    cout << "In order traversal should be: \n\t-45677654 \n\t-123 \n\t10 \n\t43 \n\t9843 \n\t23465 \n\t43243 \n\t92165" << endl;
    
    numbers.inOrderTraversal();
    
    
    
    cout << "Height should be 4 and is: " << numbers.getHeight() << endl;
    
    cout << "Balanced should be false || 0 and is: " << numbers.isBalanced() << endl;
    
}


