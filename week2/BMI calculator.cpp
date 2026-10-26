#include <iostream>
int main(){
    double weight, height, BMI;
    std::cin>>weight>>height;
    BMI=weight/(height*height);
    std::cout<<BMI;
}