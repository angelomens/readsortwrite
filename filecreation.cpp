#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

using namespace std;

int main()
{
    ofstream file("textfile.txt");

    if(!file)
    {
        cerr << "File could not be created"<< endl;
        return 1;
    }
    for(int i = 0; i< 100; i++)
    {
        file << ( rand() % 1000 + 1 ) << " ";
    }
    file.close();
    cout << "File has been created successfully" << endl;
    return 0;


}