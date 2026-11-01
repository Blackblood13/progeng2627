#include <iostream>
int myfactorial(int in){
    int fact;
    int res=1;
    
     for(int i=1; i<=in;i++)
     res*=i;
     fact=res;
     return fact;

}
int main(){
    int n; 
    std::cout << "please enter a number" << std::endl;
    std::cin >> n;
    std::cout << "factorial of " << n << ": " << myfactorial(n) << std::endl;
    
}