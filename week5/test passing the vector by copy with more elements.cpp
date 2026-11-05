#include <iostream>
#include <vector>
double sum_vector(std::vector<double> vin){

    double sum = 0;

    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }

    return sum;

}

int main(){
    std::vector<double> v;

    int n;
    double a;
    std::cin>>n;
    for(int i=0; i<n;i++){
    std::cin>>a;
    v.push_back(a);}

    std::cout << "the sum is: " << sum_vector(v) << std::endl;

}