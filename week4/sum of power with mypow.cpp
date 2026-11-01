#include <iostream>
double mypow(double base, int exp){
double result=1;
for(int i=0;i<exp;i++)
result*=base;
return result;
}
int main(){
    double x,sum=0;
    int n;
    std::cin>>x>>n;
for(int j=1; j<=n; j++)
sum+=mypow(x,j);
std::cout<<sum;
}