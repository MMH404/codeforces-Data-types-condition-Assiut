#include<iostream>
using namespace std;
int main(){
    float n1, n2;
    cin>> n1 >> n2;
    if(n1==0 & n2==0)
    cout<<"Origem";
    if(n1>0 & n2==0)
    cout<<"Eixo X";
    if(n1<0 & n2==0)
    cout<<"Eixo X";
    if(n1==0 & n2>0)
    cout<<"Eixo Y";
    if(n1==0 & n2<0)
    cout<<"Eixo Y";
    if(n1>0 & n2>0)
    cout<< "Q1";
    if(n1<0 & n2>0)
    cout<<"Q2";
    if(n1<0 & n2<0)
    cout<<"Q3";
    if(n1>0 & n2<0)
    cout<<"Q4";
    return 0;
}