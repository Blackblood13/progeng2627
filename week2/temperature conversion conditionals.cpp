#include <iostream>
#include <string>
int main(){
    double T0;
    std::string unit;
    std::cin>>T0>>unit;
    if(unit=="C")
    std::cout<<T0*9/5.0+32<<" "<<"F";
    else if(unit=="F")
    std::cout<<(T0-32)*5/9.0<<" "<<"C"; 
    else
    std::cout << "error, unit not recognised";
}