#include <iostream>
double maxi(double x, double y){
    int res;
    if(x>y)
    res=x;
    else if(x<=y)
    res=y;
    return res;
}
int main(){
    std::cout<<(maxi(15,18)==18);
}