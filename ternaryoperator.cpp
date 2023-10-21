#include<iostream>
using namespace std;

int main(){

    int marks;
    cin>>marks;

    if(marks>33){
        cout<<"Pass"<<endl;
    }
    else{
        cout<<"Fail"<<endl;
    }

    marks>33 ? cout<<"Pass" : cout<<"Fail"<<endl;   //ternary opera

    return 0;
}