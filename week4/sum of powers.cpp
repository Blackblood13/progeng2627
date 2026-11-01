#include <iostream>
#include <cmath>
int main(){
    int x,n,sum=0;
    std::cin>>x>>n;
    for(int i=1;i<=n; i++)
    sum+=std::pow(x,i);
    std::cout<<sum;
}