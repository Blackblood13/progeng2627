#include <iostream>
#include <fstream>
int main(){
    std::ifstream x;
    x.open("Text_file.txt");
    if(x.is_open()){
    int tmp;
    x>>tmp;
    std::cout<<tmp<<std::endl;
    x>>tmp;
    std::cout<<tmp<<std::endl;
    x.close();
    }
    else
    std::cout<<"error opening file" << std::endl;
}