#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int printFile(string f)
{
    ifstream inputFile("grocery_list.txt"); //opens .txt in reading mode

    if(!inputFile)
    {
        return -1; //error!
    }
    else
    {
        int counter = 0; //counter to registrer the number of lines
        while(getline(inputFile, f)) //while lines are read on the file
        {
            cout << "line[" << counter << "]: " << f << endl; 
            counter += 1; //adds 1 to the counter to register iterations
        }
        
        inputFile.close();
        return 0; //everything ok!
    }
}

int countCharacters(string f)
{
    ifstream inputFile("grocery_list.txt"); //opens .txt in reading mode

    if(!inputFile)
    {
        return -1; //error!
    }
    else
    {
        int counter = 0; //counter to register the number of characters
        while(getline(inputFile, f)) //while characters are read on the file
        {
            counter += f.length(); //adds 1 to the counter
        }
        
        cout << "The total number of characters is: " << counter << endl; 
        inputFile.close();
        return 0; //everything ok!
    }
}

int main()
{
    string linha; //string that registers the line read at every call of getline()

    printFile(linha); //calls the printFile function
    countCharacters(linha); //calls the countCharacters function

    return EXIT_SUCCESS;
