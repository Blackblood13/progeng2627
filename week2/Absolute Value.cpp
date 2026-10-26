#include <iostream>
int main(){
    int n, absolute;
    std::cin>>n;
    if(n<0)
    absolute=-n;
    else
    absolute=n;
    std::cout<<"|"<<n<<"|"<<"="<<absolute;
}