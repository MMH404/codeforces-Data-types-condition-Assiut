#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    int firstdigit = n/1000;
    if(firstdigit % 2 == 0){
       cout<<"EVEN";
    }
    else{
        cout<<"ODD";
    }
    return 0;
}                                                                                                         