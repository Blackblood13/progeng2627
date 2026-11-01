#include <iostream>


void sort_two_numbers(double& n1, double& n2){
    if(n1>n2){
        double temp;
        temp=n1;
        n1=n2;
        n2=temp;
    }
}
int main(){
    double n1,n2;
    std::cin>>n1>>n2;
    sort_two_numbers(n1,n2);
    std::cout<<n1<<" "<<n2;
}