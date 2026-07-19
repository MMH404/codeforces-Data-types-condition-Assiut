#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if(ch>=0 && ch<=64)
    cout<<"IS DIGIT";
    else if(ch>=65 && ch<=96)
    cout<<"ALPHA"<<endl<<"IS CAPITAL";
    else if(ch>=97 && ch<=123)
    cout<<"ALPHA"<<endl<<"IS SMALL";
    return 0;
}