#include <iostream>
double maxi(double x, double y, double z){
    int res;
    if(x>=y && x>=z)
    res=x;
    else if(x<=y && y>=z)
    res=y;
    else if(x<=z && y<=z)
    res=z;
    return res;
}
int main(){
    std::cout<<(maxi(15,19,18)==18)<<std::endl;
    std::cout<<(maxi(15,18,18)==18)<<std::endl;
}