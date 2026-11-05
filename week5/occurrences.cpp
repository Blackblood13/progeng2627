#include <iostream>
#include <vector>

int main(){
    std::vector<int> v; 
    int a,n,s;
    std::cin>>n;
    for(int i=0; i<n;i++){
        std::cout<<"please enter a number: "<<std::endl;
        std::cin>>a;
        v.push_back(a);
    }
    int num=0;
    std::cin>>s;
    for(int i=0; i<n;i++){
        if(v.at(i)==s)
        num++;
    }
    
    std::cout<<num;
}