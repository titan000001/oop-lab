#include<bits/stdc++.h>
using namespace std;

void greeting(string name, int age){
    cout << "Welcome " << name << ", you are " << age << " years old";
}

int main(){
    string name;
    int age;

    cout << "Enter your name : " << endl;
    cin >> name;

    cout << "Enter your age : " << endl;
    cin >> age;

    greeting(name , age);

    return 0;
}