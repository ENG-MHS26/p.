
#include <iostream>

using namespace std;
struct A{
    int i =0;
    int &value()
    {return i;}
};
struct B{
    int i=0;
    int&value()
    {return i;}
    
};

int main()
{
A a;
a.value()=20;
cout<<a.i;
B b;
b.value ()=40;
cout <<b.i<<endl;
cout<<a.i and b.i;
cout<<a.i && b.i;
int sum = a.i+b.i;
cout <<sum<<endl;
    return 0;
}