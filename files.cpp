#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream MyFile("mylife.txt");

    MyFile << "Hello I am A Software Developer \n I am Working At Bibtyte Technology";

    MyFile.close();

    return 0;
}