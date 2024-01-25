#include<iostream>
using namespace std;

class Student{
    public:
        string name;
        int age; 
        float GPA;

};

int main(){
Student student1;

    student1.name = "Tawhid";
    student1.age = 25;
    student1.GPA = 3.964;

    cout << "Name of the student : " << student1.name << endl;
    cout << "Age of the student : " << student1.age << endl;
    cout << "GPA of the student : " << student1.GPA << endl;

return 0;
}
