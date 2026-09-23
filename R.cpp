#include<iostream>
using namespace std;
int main(){
int n;
cin>> n;
int years = n/365;
int reminder = n%365;
int months = reminder/30;
int days = reminder % 30;

cout<<years<<" years"<<endl;
cout<<months<<" months"<<endl;
cout<<days<<" days";
return 0;
}