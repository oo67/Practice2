#include<iostream>
using namespace std;

int main(){

    int num;
    cin>>num;
    cout<<"Enter num: "<<num<<endl;

    if(num%2==0 && num%3==0){
        cout<<"The value is:"<<num<<endl;
    }
    else{
        cout<<"Not possible"<<endl;
    }

    return 0;
}