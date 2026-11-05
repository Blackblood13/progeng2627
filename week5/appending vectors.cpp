#include <iostream>
#include <vector>


void append_vectors(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout){

    for(int i = 0; i < vin1.size(); i++){
        vout.push_back(vin1.at(i));
    }
     for(int j = 0; j < vin1.size(); j++){
        vout.push_back(vin2.at(j));
    }

}

int main(){
   std::vector<int> vin1{1,7,8};
   std::vector<int> vin2{19,27,99};
   std::vector<int> vout;
   append_vectors(vin1, vin2, vout);
   std::cout<<(vout==std::vector<int>{1,7,8,19,27,99});
    }
