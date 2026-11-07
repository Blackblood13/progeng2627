#include <iostream> 
#include <fstream>
#include <cstdlib>
int main(){
    std::ifstream x2;
    x2.open("Text_file2");
    if(!x2.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
        int tmp;
       
        while(x2>>tmp)
        std::cout<<tmp<<std::endl;
        x2.close();
}