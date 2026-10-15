#include <iostream> 
int main(){
    int n,sum=0;
    double count=0;
    std::cout<<"enter a number"<<std::endl;
    std::cin>>n;
    
    
    while(n!=0){
        sum=sum+n;
        count++;
        std::cout<<"the average so far is:"<<std::endl<<sum/count;
        
        std::cout<<"enter a number"<<std::endl;
        std::cin>>n;
    }
    }