#include <iostream>
#include <vector>
int min_vector_element(const std::vector<double>& vin){
    int idx=0;
    if(vin.size()==0)
    idx=-1;
    else{
    
    double mini=vin.at(0);
    for(int i=0; i<vin.size(); i++){
    if(vin.at(i)<mini){
    mini=vin.at(i);
    idx=i;}
}
    
    }
    return idx;

}

int main(){
    std::vector<double> v;
    double a;
    int n;
    std::cin>>n;
    for(int i=0; i<n; i++){
        std::cin>>a;
    v.push_back(a);}

    std::cout<< min_vector_element(v)<<std::endl;

}