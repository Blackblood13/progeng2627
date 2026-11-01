#include <iostream>
void integ_divison(int a, int b, int& q, int& r){
 q=a/b;
 r=a%b;
}
int main(){
    int a=15,b=7;
    int q,r;
    integ_divison(a,b,q,r);
    std::cout<<(q==2 && r==1);
}