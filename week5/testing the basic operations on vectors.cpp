#include <iostream>
#include <vector>
int main(){
    std::vector<int> v;
    v.push_back(10);
    v.push_back(20);
    std::cout<<v[0]<<std::endl; //it should be 10
    v[0]=15;
    std::cout<<v[0]<<std::endl; //it should be 15
    v.push_back(30);
    std::cout<<v.size()<<std::endl; //it should be 3

}