#include<iostream>

using namespace std;

int main() {
    int age;
    cout<<"Enter your age: ";
    cin>> age ;
    if (age<=18) {
        
        cout<< "You can't go to the party!";
    }
    else {
        cout<<"You are not allowed!";
    }
    return 0; 

}