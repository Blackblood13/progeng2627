#include <iostream>
double mypow(double base, int exp){
    double result=1;
    for(int i=0; i<exp; i++)
    result*=base;
    return result;
}
int main(){
    std::cout<<"(0.5)^3= "<<mypow(0.5,3);
}