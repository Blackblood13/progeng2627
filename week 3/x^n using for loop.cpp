#include <iostream> 
int main(){
    int x,n,mul=1;
    std::cin>>x>>n;
    for(int i=0; i<n;i++)
    mul=mul*x;
    std::cout<<mul;
}