#include <iostream>
void myswap(int& n1, int& n2){
    int temp;
    temp=n1;
    n1=n2;
    n2=temp;
}
int main(){
    int n1,n2;
    std::cin>>n1>>n2;
    myswap(n1,n2);
    std::cout<<n1<<" "<<n2;
}