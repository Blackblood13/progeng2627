#include <iostream>
#include <cmath>
int main() {
    double a,b,c;
    std::cin>>a>>b>>c;
    if(a+b>c && a+c>b && c+b>a){
        std::string type;
        if(a==b && b==c)
          type="equilateral";
        else if(a==b || a==c || b==c)
          type="isosceles";
        else
          type="scalene";
        std::cout<<"it is a valid "<<type<<" triangle"<<std::endl;
        double P=a+b+c;
        std::cout<<"Perimeter: "<<P<<std::endl<<"Area: "<<std::sqrt((P/2)*(P/2-a)*(P/2-b)*(P/2-c));

    }
    else
     std::cout<<"it is not a valid triangle";
      

}