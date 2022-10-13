#include <iostream>

using namespace std;

class student{
    public:             // By default data members are prive in a class.
    string name;                    //Need to make them pbulic for access them outside the class.
    int age;
    bool gender;

    void studentInfo(){
        cout << "Name: ";
        cout << name << endl;
        cout << "Age: ";
        cout << age << endl;
        cout << "Gender: ";
        cout << gender << endl;
    }
};

int main(){

    student arr[3];
    cout << "Please enter the information" << endl;
    for(int i=0; i<3; i++){
        cout << "Enter " << i+1 <<" name: ";
        cin >> arr[i].name;
        cout << "Enter " << i+1 <<" age: ";
        cin >> arr[i].age;
        cout << "Enter " << i+1 <<" gender: ";
        cin >> arr[i].gender;
    }

    for(int i=0; i<3; i++){
        arr[i].studentInfo();
    }

    return 0;
}