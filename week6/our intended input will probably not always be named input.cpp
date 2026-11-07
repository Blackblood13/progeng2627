#include <iostream>
#include <fstream>
#include <cstdlib>
int main(){
    std::ifstream x;
    std::string file_name;
    std::cin>>file_name;
    x.open(file_name);
    if(!x.is_open()){
    std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
}
    int tmp; 
    while(x>>tmp)
    std::cout<<tmp<<std::endl;
    x.close();
}