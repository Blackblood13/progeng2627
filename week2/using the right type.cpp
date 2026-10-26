#include <iostream>
#include <string>
int main(){
    double n,m;
    std::cout<<"please enter a number"<<std::endl;
    std::cin>>n;
    m=n%2;
    std::cout<<"in the following line 0 means even and 1 means odd"<<std::endl;
    std::cout<<m; // doesn't work cause n is in double it must be in int for applyin % this func
}