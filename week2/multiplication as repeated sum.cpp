#include <iostream> 
int main(){
    int x,n,sum=0,i=0;
    std::cin>>x>>n;
    while(i<n){
        sum=sum+x;
        i++; 
    }
    std::cout<<sum;
}