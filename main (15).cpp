
#include <iostream>
using namespace std;
void addNumbers(int array[], int size){
	double sum = 0;
	for(int i=0;i<size;i++)
		array[i] = array[i] + 3;
}
int main()
{
   int array[] = {10,15,30,5};
int size = sizeof(array) / sizeof(array[0]);
addNumbers(array,size);
for(int i=0;i<size;i++)
	cout<< array[i] << " ";


    return 0;
}