#include <iostream>
using namespace std;

class Car {
private:
    string brand;
    string model;
    int yearOfModel;

public:
    
    Car(string b, string m, int y) : brand(b), model(m), yearOfModel(y) {}

   
    void displayDetails() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << yearOfModel << endl;
    }
};

int main() {
    
    Car myCar("Toyota", "Corolla", 2021);

   
    myCar.displayDetails();

    return 0;
}
