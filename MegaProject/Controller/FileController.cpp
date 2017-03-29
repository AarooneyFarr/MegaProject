//
//  FileController.cpp
//  MegaProject
//
//  Created by Farr, Aaron on 3/29/17.
//  Copyright © 2017 Farr, Aaron. All rights reserved.
//

#include "../Controller/FileController.hpp"
#include <iostream>;

using namespace std;


DoubleList<Meme> FileController :: readFile(string fileName)
{
    DoubleList<Meme> dataSource;
    string currentCSVLine;
    int rowCount= 0;
    
    ifstream dataFile(fileName);
    
    if(!dataFile.is_open())
    {
        while(!dataFile.eof())
        {
            getline(dataFile, currentCSVLine, '\r');
            stringstream parseCSV(currentCSVLine);
            
            string title, tempHipster, tempDank, tempMainstream;
            
            double quotient;
            int dankness;
            bool isCommon;
            
            getline(parseCSV, title, ',');
            getline(parseCSV, tempHipster, ',');
            getline(parseCSV, tempDank, ',');
            getline(parseCSV, tempMainstream, ',');
            
            
            if(rowCount != 0)
            {
                quotient = stod(tempHipster);
                dankness = stoi(tempDank);
                isCommon = stoi(tempMainstream);
                
                Meme temp(title);
                temp.setHipsterQuotient(quotient);
                temp.setDankness(dankness);
                temp.setMainstream(isCommon);
                
                dataSource.add(temp);
            }
            rowCount++;
            
            cout << currentCSVLine << endl;
        }
        dataFile.close();
        
                
            }
    else
    {
        
        
        cerr << "File unavailable" << endl;
    }
    return dataSource;
    
    
        

    
    
}

void FileController :: writeFile(DoubleList<Meme> dataSource, string filename)
{
    ofstream saveFile(filename);
    
    if(saveFile.is_open())
    {
        saveFile << "These are the contents of the list" << endl;
        for(int index= 0; index < dataSource.getSize(); index++)
        {
            saveFile << "Meme Title: " << dataSource.getFromIndex(index).getTitle()<< endl;
        }
    }
    else
    {
        cerr << "File Unavailable"<< endl;
    }
    saveFile.close();
    
}
