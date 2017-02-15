//
//  Timer.cpp
//  SecondC++Project
//
//  Created by Farr, Aaron on 1/31/17.
//  Copyright © 2017 Farr, Aaron. All rights reserved.
//

#include "Timer.hpp"
#include <iostream>

using namespace std;

Timer :: Timer()
{
    executionTime = 0;
}

void Timer :: resetTimer()
{
    executionTime = 0;
}

void Timer :: startTimer()
{
    executionTime = clock();
    
}

void Timer :: stopTimer()
{
    executionTime = clock() - executionTime;
}

void Timer :: displayTimerInformation()
{
    cout << "The execution time is: " << executionTime << endl;
    cout << "The execution time for humans is: " << executionTime/CLOCKS_PER_SEC << endl;
}

long Timer :: getExecutionTimeInMicroseconds()
{
    return executionTime;
}
