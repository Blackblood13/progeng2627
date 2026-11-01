#include <iostream>
int main(){
    int n1, n2;
    std::cin>>n1>>n2;
    int temp;
    temp=n1;
    n1=n2;
    n2=temp;
    std::cout<<n1<<" "<<n2;
}