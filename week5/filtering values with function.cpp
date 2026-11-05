#include <iostream>
#include <vector>


void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout){

    for(int i = 0; i < vin.size(); i++){
        if(vin.at(i)<t)
        vout.push_back(vin.at(i));
    }

}

int main(){
   std::vector<double> vin{1,7,8,15};
   double t=7.5;
   std::vector<double> vout;
   filter_v(vin, t, vout);
   std::cout<<(vout==std::vector<double>{1,7});
    }
