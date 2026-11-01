#include <iostream>
double mypow(double base, int exp){
double result=1;
if(exp>0){
for(int i=0; i<exp; i++)
result*=base;}
else if(exp<=0){
for(int i=0; i>exp; i--)
result=result/base;}
return result;
}
int main(){
    std::cout<<"2^(-2)= "<<mypow(2,-2)<<std::endl;
    std::cout<<"5^0= "<<mypow(5,0);
}