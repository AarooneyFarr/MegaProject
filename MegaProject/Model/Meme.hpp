//
//  Meme.hpp
//  MegaProject
//
//  Created by Farr, Aaron on 3/13/17.
//  Copyright © 2017 Farr, Aaron. All rights reserved.
//

#ifndef Meme_hpp
#define Meme_hpp

#include <string>
using namespace std;

#include <stdio.h>
class Meme
{
private:
    string title;
    int dankness;
    double hipsterQuotient;
    bool mainstream;
public:
    Meme();
    Meme(string title);
    int getDankness();
    double getHipsterQuotient();
    bool isMainstream();
    string getTitle();
    
    
    void setTitle(string title);
    void setDankness(int dank);
    void setHipsterQuotient(double HipsterQuotient);
    void setMainstream(bool mainstream);
};
#endif /* Meme_hpp */
