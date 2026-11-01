#include<iostream>
bool per_area(double a, double b, double& per, double& area ){
    bool rectangle;
    if(a>0 && b>0){
    rectangle=true;
     per=2*(a+b);
     area=a*b;
    }
    else rectangle= false;
    return rectangle;
}
int main(){
    double a=5,b=4,per,area;
    if (per_area(a,b,per,area)){
        std::cout<<(per==18 && area==20);
    }
    else
    std::cout<<"this is not real";

}
