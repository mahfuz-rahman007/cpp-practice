#include <iostream>
using namespace std;

int main() {

    try
    {
       if(false) {
         cout << "Right Pace";
       } else {
        throw ("error");
       }
    }
    catch(const exception& e)
    {
        cerr << e.what() << '\n';
    }
    


}