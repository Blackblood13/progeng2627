#include <iostream>
int main(){
    int n;
    std::cin>>n;
    if(n%4==0){
        if(n%100==0)
        std::cout<<"not a leap year";
        else
        std::cout<<"leap year";
    }
    else
    std::cout<<"not a leap year";
}