#include <iostream>
#include <string>
using namespace std;

class Car {
    public:
        int year;
        string brand;
        string model;
        Car(int x, string y, string z) {
            year = x;
            brand = y;
            model = z;
        }
};

int main() {

    Car car1(1, "Audi", "KSJ23");

    Car car2(342, "Sujuki", "Gyt%^");

    cout << car1.year << " " << car1.brand << " " << car1.model <<endl;
    cout << car2.year << " " << car2.brand << " " << car2.model <<endl;
    return 0;
}




