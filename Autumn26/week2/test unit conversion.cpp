#include <iostream>
#include <string>
int main(){
    double length0;
    std::string unit0;
    const double mile_to_km=1.609;
    std::cin>>length0>>unit0;
    if(unit0=="mile")
    std::cout<<length0*mile_to_km<<" "<<"km";
    else if(unit0=="km")
    std::cout<<length0/mile_to_km<<" "<<"mile";
    else
    std::cout << "error, unit not recognised";
}