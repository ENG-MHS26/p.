
#include <iostream>
using namespace std;
struct Student {
	string fullName;
	float gpa;
	short year;
	int studentID;
};


int main()
{
Student s;
getline(cin, s.fullName);
cin >> s.studentID >> s.gpa >> s.year;
s.fullName.erase(s.fullName.length()-1);
if (s.gpa > 2)
	cout << "Hello "+s.fullName+", your GPA is Good";
else
	cout << "Hello "+s.fullName+", I believe you can do better";


    return 0;
}