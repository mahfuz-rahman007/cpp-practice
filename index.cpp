#include <iostream>
#include <string>
using namespace std;

int main() {
    
    struct CarModel
    {
       int number;
       string color;
       string model; 
    } car1, car2 ;

    car1.number = 1;
    car1.color = "red";
    car1.model = "BMW";
    
    car2.number = 2;
    car2.color = "green";
    car2.model = "Audi";

    CarModel car3;

    car3.number = 3;
    car3.color = "blue";
    car3.model = "Hyundai";


    cout << car1.number << " " << car1.color << " " << car1.model << endl;
    cout << car2.number << " " << car2.color << " " << car2.model << endl;
    cout << car3.number << " " << car3.color << " " << car3.model << endl;


    return 0;
}
