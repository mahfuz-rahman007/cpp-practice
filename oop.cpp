#include <iostream>
#include <string>
using namespace std;

class Car {
    public:
        int year;
        string brand;
        string model;
};

int main() {

    Car car1;

    car1.year = 1;
    car1.brand = "Audi";
    car1.model = "KSJ23";


    Car car2;

    car2.year = 342;
    car2.brand = "Sujuki";
    car2.model = "Gyt%^";

    cout << car1.year << " " << car1.brand << "" << car1.model <<endl;
    cout << car2.year << " " << car2.brand << "" << car2.model <<endl;
    return 0;
}




