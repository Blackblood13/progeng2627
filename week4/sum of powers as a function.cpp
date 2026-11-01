#include <iostream>
double mypow(double base, int exp){
double result=1;
for(int i=0;i<exp;i++)
result*=base;
return result;
}
int mysum(double x, int n){
    double sum=0;

for(int j=1; j<=n; j++)
sum+=mypow(x,j);
return sum;
}
int main(){
   std::cout<<(mysum(2,3)==14)<<std::endl;
}