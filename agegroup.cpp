#include<iostream>
using namespace std;

int main(){

    int age;
    cin >> age;
    cout << "Enter age:"<<age<< endl;

    if(age<12){
        cout<<"Child"<<endl;
    }
    else if(age>=12 && age<=18){
        cout<<"Teenager"<<endl;
    }
    else{
        cout<<"Adult"<<endl;
    }
    return 0;
}