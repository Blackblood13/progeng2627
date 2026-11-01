#include <iostream>
void myswap(std::string &n1, std::string &n2){
    std::string temp;
    temp=n1;
    n1=n2;
    n2=temp;
}
int main(){
    std::string n1="murad",n2="aliyev";
    myswap(n1,n2);
    std::cout<<(n1=="aliyev" && n2=="murad");
}