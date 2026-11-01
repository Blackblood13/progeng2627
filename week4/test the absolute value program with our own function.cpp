#include <iostream>
double module(double n){
    double abs;
    if(n<0)
     abs=-n;
    else
     abs=n;
     return abs;
}
int main(){
    double a;
    std::cout<<"please enter a number"<<std::endl;
    std::cin>>a;
    std::cout<<"|"<<a<<"|="<<module(a);
}