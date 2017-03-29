//
//  FileController.hpp
//  MegaProject
//
//  Created by Farr, Aaron on 3/29/17.
//  Copyright © 2017 Farr, Aaron. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include "../Model/DoubleList.hpp" //Default structure
#include "../Model/Meme.hpp"
#include "../Model/CrimeData.hpp"
#include <string> // String Type
#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;

class FileController
{
private:
    DoubleList<Meme> memeList;
    
public:
    DoubleList<Meme> readFile(string fileName);
    void writeFile(DoubleList<Meme> source, string fileName);
    
    
};


#endif /* FileController_hpp */
