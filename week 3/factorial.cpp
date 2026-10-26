#include <iostream> 
int main(){
    int n,mul=1;
    std::cin>>n;
    for(int i=n; i>0; i--)
    mul*=i;
    std::cout<<mul;
}