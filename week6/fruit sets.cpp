#include <iostream>
#include <fstream>
#include <cstdlib>
#include<vector>
int search_vector(std::string s, const std::vector<std::string>& vin){
    for(int i=0; i<vin.size(); i++){
    if(vin[i] == s)
            return i;}
            return -1;
}
void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for(int i=0; i<vin1.size(); i++){
        if(search_vector(vin1[i],vin2)!=-1){
           if(search_vector(vin1[i],vout)==-1) 
        vout.push_back(vin1[i]);
        }
          
        }
    }
    void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for(int i=0; i<vin1.size(); i++){
           if(search_vector(vin1[i],vout)==-1) 
        vout.push_back(vin1[i]);
        
        }
         for(int j=0; j<vin2.size(); j++){
            if(search_vector(vin2[j],vin1)==-1){
           if(search_vector(vin2[j],vout)==-1) 
        vout.push_back(vin2[j]);
        }
         }
    }
int main(){
    std::ifstream x1;
    std::ifstream x2;
    x1.open("warehouse1.txt");
    x2.open("warehouse2.txt");
     if(!x1.is_open() || !x2.is_open()){
       std:: cout << "Error opening input files" << std::endl;
     return EXIT_FAILURE;
    }
    std::vector<std::string> vin1,vin2;
    std::string tmp;
    while(x1 >> tmp){
        vin1.push_back(tmp);
    }

    while(x2>>tmp){
        vin2.push_back(tmp);
    }

    x1.close();
   x2.close();
   std:: vector<std::string> v_union;
    std::vector<std::string> v_intersection;
     union_vector(vin1, vin2, v_union);
    intersection_vector(vin1, vin2, v_intersection);
     std::ofstream union_file;
     union_file.open("union.txt");

    if(!union_file.is_open()){
        std::cout << "Error creating union.txt" << std::endl;
        return EXIT_FAILURE;
    }

    for(int i = 0; i < v_union.size(); i++){
        union_file << v_union[i] <<std::endl;
    }

    union_file.close();

    std::ofstream intersection_file;
    intersection_file.open("intersection.txt");

    if(!intersection_file.is_open()){
        std::cout << "Error creating intersection.txt" << std::endl;
        return EXIT_FAILURE;
    }

    for(int i = 0; i < v_intersection.size(); i++){
        intersection_file << v_intersection[i] << std::endl;
    }

    intersection_file.close();

}
