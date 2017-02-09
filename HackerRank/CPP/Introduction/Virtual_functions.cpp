#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person {
public:
    string name;
    int age;

    virtual void getdata() { }
    virtual void putdata() { }

};

class Professor : public Person{
public:
    static int id;
    int publications;
    int cur_id;

    void getdata()
    {
        cin >> name >> age >> publications;
        cur_id = ++id;
    }

    void putdata()
    {
        cout << name << " " << age << " " << publications << " " << cur_id;
        cout << '\n';
    }

};

class Student : public Person {
public:
    static int id;
    int arr[6];
    int cur_id;

    void getdata()
    {
        cin >> name >> age;
        for (int i = 0; i < 6; i++)
        {
            cin >> arr[i];
        }
        cur_id = ++id;
    }

    void putdata()
    {
        cout << name << " " << age << " ";
        cout << arr[0] + arr[1] + arr[2] + arr[3] + arr[4] + arr[5] <<  " " << cur_id;
        cout << '\n';
    }
};

int Professor::id = 0;
int Student::id = 0;

//Stub provided
int main(){
    int n, val;
    cin >> n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0; i < n; i++) {
        cin>>val;
        if(val == 1) {
            // If val is 1 current object is of type Professor
            per[i] = new Professor;
        }
        else per[i] = new Student; // Else the current object is of type Student
        per[i]->getdata(); // Get the data from the user.
    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;
}
