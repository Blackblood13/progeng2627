#include <iostream>


void sort_three_numbers(double& n1, double& n2,double& n3){
    if(n1>n2){
        double temp;
        temp=n1;
        n1=n2;
        n2=temp;
    }
    if(n2>n3){
        double temp;
        temp=n2;
        n2=n3;
        n3=temp;
    }
    if(n1>n2){
        double temp;
        temp=n1;
        n1=n2;
        n2=temp;
    }
     
}
int main(){
    double n1=12.5,n2=16,n3=9;
    sort_three_numbers(n1,n2,n3);
    std::cout<<(n1==9 && n2==12.5 && n3==16);
}