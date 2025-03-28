#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

int main()
{
    ifstream inFile("textfile.txt");
    if(!inFile) 
    {
        cerr << "File could not open" << endl;
        return 1;
    }
    vector < int > numbers;
    string line;
    string num;
    while( getline(inFile, line))
    {
        istringstream iss(line);

        while( iss >> num)
        {
            numbers.push_back(stoi(num));
        }

    }

    inFile.close();

    sort(numbers.begin(), numbers.end());

    ofstream outFile("textfile.txt");
    if(!outFile) 
    {
        cerr << "File could not open to write into" << endl;
        return 1;
    }
    for(int i : numbers)
    {
        outFile << i <<" ";
    }
    outFile.close();
    cout << "File sorted successfully" << endl;
    return 0;



  

}