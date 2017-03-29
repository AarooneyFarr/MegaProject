//
//  Meme.cpp
//  MegaProject
//
//  Created by Farr, Aaron on 3/13/17.
//  Copyright © 2017 Farr, Aaron. All rights reserved.
//

#include "Meme.hpp"

Meme :: Meme()
{
    this->title = "booooring";
    this->dankness = 0;
    this->hipsterQuotient = -.999;
    this->mainstream = true;
    
    
}

Meme :: Meme(string title)
{
    this->title = title;
    this->dankness = title.length();
    this->hipsterQuotient = 3.14;
    this->mainstream = true;
    
}

string Meme :: getTitle()
{
    return title;
    
}

bool Meme :: isMainstream()
{
    return mainstream;
}

int Meme :: getDankness()
{
    return dankness;
    
    
}

void Meme :: setDankness(int dank)
{
    this->dankness = dank;
    
}


void Meme :: setTitle(string title)
{
    
    this->title = title;
    
}

double Meme :: getHipsterQuotient()
{
    
    
    return hipsterQuotient;
}

void Meme :: setHipsterQuotient(double quotient)
{
    
    this->hipsterQuotient= quotient;
    
}

void Meme :: setMainstream(bool isMain)
{
    
    this->mainstream = isMain;
}

bool Meme :: operator < (Meme & comparedMeme)
{
    if(this->isMainstream() && comparedMeme.isMainstream())
    {
        if(this->getDankness() < comparedMeme.getDankness())
        {
            return true;
            
        }
        return false;
        
    }
    
    return false;
}

