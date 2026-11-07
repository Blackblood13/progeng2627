#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>

int main(){
    std::ifstream infile; 
    infile.open("Text_file2.txt");

    std::vector<int> v;

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    int tmp;

    while(infile >> tmp){
        v.push_back(tmp); 
    }

    infile.close(); 

    std::ofstream outfile;
    outfile.open("Text_file4.txt");
     if(!outfile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    for(int i=v.size()-1; i>=0; i--)
    outfile <<v[i]<< std::endl;
    

    outfile.close();

}