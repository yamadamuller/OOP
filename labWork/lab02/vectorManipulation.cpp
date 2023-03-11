#include <iostream>
#include <vector>
#include <fstream> 
#include <algorithm>
#include <string>
using namespace std;

void printString(vector <string> vec)
{
    int stringSize = vec.size();
    for(int i = 0; i < stringSize; i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}

void printFloat(vector <float> vec)
{
    int stringSize = vec.size();
    for(int i = 0; i < stringSize; i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}

vector <string> vecComps(string f)
{
    string line;
    vector <string> carParts;

    ifstream inputfile(f);
    if(inputfile.is_open())
    {
        
        int counter = 0;
        while(getline(inputfile,line))
        {   
            if(counter%2 == 0)
            {
                line.pop_back(); //fix the \r bug in ubuntu
                carParts.push_back(line);
            }

            counter += 1;
        }
    }
    
    inputfile.close();

    return carParts;
}

vector <float> vecPrices(string f)
{
    string line;
    vector <float> priceParts;

    ifstream inputfile(f);
    if(inputfile.is_open())
    {
        int counter = 0;
        while(getline(inputfile,line))
        {   
            if(counter%2 != 0)
            {
                priceParts.push_back(stof(line));
            }

            counter += 1;
        }
    }
    
    inputfile.close();

    return priceParts;
}

int priceComp(string compName, vector<string> comps, vector<float> prices)
{
    vector <string> :: iterator idx = comps.begin();
    idx = find(comps.begin(), comps.end(), compName);
    cout << endl;
    if(idx != comps.end())
    {
        cout << "Price of the component " << compName << " is: "; 
        cout << prices[idx - comps.begin()] << endl;
        
        return 0;
    }
    else
    {
        cout << "Price of the component not found!" << endl; 
        
        return -1;
    }

}

void stringTest(string compName, vector<string> comps, vector<float> prices)
{
    cout << endl;
    for(int i=0; i < comps.size(); i++)
    {
        if(comps[i] == compName)
        {
            cout << "Price of the component " << compName << " is: "; 
            cout << prices[i] << endl;
            
            break;
        }
        else if(comps[i] != compName && i == (comps.size()-1))
        {
            cout << "Price of the component " << compName << " not found!" << endl; 
        }
    }
}

int main()
{
    string file = "autoTable.txt";
    vector <string> parts = vecComps(file);
    //cout << parts.size() <<endl;
    printString(parts);
    vector <float> prices = vecPrices(file);
    printFloat(prices);

    int result;
    result = priceComp("Jante", parts, prices);
    cout << "Return of Jante is: " << result << endl;
    result = priceComp("Retrovisor", parts, prices);
    cout << "Return of Retrovisor is: " << result << endl;
    result = priceComp("Roda", parts, prices);
    cout << "Return of Roda is: " << result << endl;
    result = priceComp("Vidro traseiro", parts, prices);
    cout << "Return of Vidro traseiro is: " << result << endl;

    //string compare test

    stringTest("Jante", parts, prices);
    stringTest("Retrovisor", parts, prices);
    stringTest("Roda", parts, prices);
    stringTest("Vidro traseiro", parts, prices);
} 
