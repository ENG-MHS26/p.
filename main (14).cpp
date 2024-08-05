#include <iostream>
using namespace std;

int main() {
    int x[] = {10, 20, 30, 40, 50};
    cout << "x: " << x << endl;
    
    cout << "*x: " << *(x) << endl;
   
    cout << "x + 1: " << x + 1 << endl;

    cout << "*(x + 1): " << *(x + 1) << endl;
    cout << "x + 2: " << x + 2 << endl;
    cout << "*(x + 3): " << *(x + 3) << endl;

    return 0;
}
