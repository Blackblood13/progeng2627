#include <iostream>
bool leap_year(int year){
    bool ly=false;
    if(year%100==0 && year%400==0)
    ly=true;
    else if(year%4==0 && year%100!=0)
    ly=true;
 return ly;

}
int main(){
    int input_year;

    std::cout << "please enter a year" << std::endl;
    std::cin >> input_year;
    if(leap_year(input_year))
        std::cout << "it's a leap year" << std::endl;
    else
        std::cout << "it's not a leap year" << std::endl;
}