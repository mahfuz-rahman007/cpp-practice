#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string mytext;

    ifstream myFile("mylife.txt");

    while (getline(myFile, mytext))
    {
        cout << mytext;
    }


    myFile.close();

    return 0;
}