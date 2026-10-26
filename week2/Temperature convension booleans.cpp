#include <iostream>
#include <string>
int main(){
    double T0,T;
    std::string unit0, unit;
    std::cin>>T0>>unit0;
    bool valid_unit0=true;
    if(unit0=="C" || unit0=="c"){
    unit="F";
    T=T0*9/5.0+32;}
    else if(unit0=="F" || unit0=="f"){
    unit="C";
    T=(T0-32)*5/9.0;}
    else
    valid_unit0=false;

    if(valid_unit0)
    std::cout<<T<<" "<<unit;
    else
    std::cout<<"error, unit not recognised";
}