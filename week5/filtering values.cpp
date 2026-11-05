#include <iostream>
#include <vector>

int main(){
    std::vector<int> v; 
    int a,n,t;
    std::cin>>n;
    for(int i=0; i<n;i++){
        std::cin>>a;
        v.push_back(a);
    }
    std::vector<int> y;
    std::cin>>t;
    for(int i=0; i<n;i++){
        if(v.at(i)<t)
        y.push_back(v.at(i));
    }
    for(int i=0; i<y.size();i++)
    std::cout<<y[i]<<" ";
}