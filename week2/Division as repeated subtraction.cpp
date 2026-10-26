#include <iostream> 
int main(){
    int a,b,q=0,r;
    std::cin>>a>>b;
    while(a>=b){
        a=a-b;
        q++;
    }
    
    r=a;
    std::cout<<q<<" "<<r;
    }