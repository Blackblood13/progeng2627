#include <iostream>
#include <vector>
int search_vector(int n, const std::vector<int>& vin){
    
    if(vin.size()==0)
    return -1;
    else{
    
   
    for(int i=0; i<vin.size(); i++){
    if(vin.at(i)==n){
    return i;}
}
    
    }
    return -1;

}

int main(){
    std::vector<int> v;
    int a;
    int c,n;
    std::cin>>c;
    std::cin>>n;
    for(int i=0; i<n; i++){
        std::cin>>a;
    v.push_back(a);}

    std::cout<< search_vector(c,v)<<std::endl;

}