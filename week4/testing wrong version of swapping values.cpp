#include <iostream>
int main(){
    int n1, n2;
    std::cin>>n1>>n2;
    int temp;
    
    n1=n2;
    n2=n1;  // here n2 will be equal to new value of n1 which is n2. so n2 will not change
    std::cout<<n1<<" "<<n2;
}