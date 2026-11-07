#include <iostream> 
#include <fstream>
int main(){
    std::ifstream x2;
    x2.open("Text_file2.txt");
    if(x2.is_open()){
        int tmp;
        x2>>tmp;
        std::cout<<tmp<<std::endl;
        x2>>tmp;
        std::cout<<tmp<<std::endl;
        x2.close();
    }
    else
    std::cout<<"error opening file"<<std::endl;
}