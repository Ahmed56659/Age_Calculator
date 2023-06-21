#include <iostream>

using namespace std;

int main() {
    cout<<"enter your age: ";
    int age;
    cin>>age;
    int age_in_days = age * 365;
    int age_in_hours = age_in_days * 24;
    int age_in_sec = age_in_days * age * 60;
    int age_in_min = age_in_hours * 60;

    cout<<"your age in days is: " << age_in_days <<endl;
    cout<<"your age in hours is: " << age_in_hours <<endl;;
    cout<<"your age in sec is: " << age_in_sec <<endl;;
    cout<<"your age in min is: " << age_in_min <<endl;;
    return 0;
}