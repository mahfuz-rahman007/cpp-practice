#include <iostream>
#include <string>
using namespace std;

int myFunc(int num1, int num2){
    return num1+num2;
}

double myFunc(double num1, double num2){
    return num1+num2;
}

int main() {
    
    cout << myFunc(2,3) <<endl;

    cout << myFunc(2.54,3.98) <<endl;

    return 0;
}
