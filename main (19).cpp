#include <iostream>
using namespace std;

class ABC {
    public:
        ABC() { 
            cout << "In constructor" << endl;
        }
        ~ABC() { 
            cout << "In destructor" << endl;
        }
};

int main() {
    ABC cc1;
    cout << "main is terminating...." << endl;
    
    return 0;
}


