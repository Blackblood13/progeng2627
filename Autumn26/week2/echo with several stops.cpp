#include <iostream> 
#include <string>
int main(){
    std:: string n;
    std::cin>>n;
    bool x=true;
    
    while(x){
        if(n=="STOP" || n=="stop" || n=="Stop")
        x=false;
        else{
        std::cout<<n<<std::endl;
        std::cin>>n;}
    }
    
}