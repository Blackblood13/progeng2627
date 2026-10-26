#include <iostream> 
int main(){
    int n,steps=0;
    std::cin>>n;
    
    while(n!=1){
    std::cout<<n<<" ";
    if(n%2==0)
    n=n/2;
    else
    n=n*3+1;
    steps++;
    }
    std::cout<<n<<" ";
    std::cout<<std::endl<<"steps:"<<" "<<steps;
}