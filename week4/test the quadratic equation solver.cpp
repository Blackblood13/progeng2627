#include <iostream>
#include <cmath>
bool quadsolve(double a, double b, double c, double& x1, double& x2){
    bool realsol;
    double delta=b*b-4*a*c;
    if(delta<0)
       realsol=false;
    else{
        realsol=true;
       x1 = (-b + std::sqrt(delta)) / (2 * a);
       x2 = (-b - std::sqrt(delta)) / (2 * a);

    }
    return realsol;
}
int main(){
    double a,b,c;
    std::cin>>a>>b>>c;
    double s1,s2;
     if(quadsolve(a, b, c, s1, s2)){
        std::cout << s1 << std::endl;
        std::cout << s2 << std::endl;
    }
    else{
        std::cout << "there are no real solutions" << std::endl;
    }

}
 