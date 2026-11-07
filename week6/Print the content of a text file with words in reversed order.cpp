#include <iostream> 
#include <fstream>
#include <cstdlib>
#include <vector>
int main(){
    std::ifstream x2;
    x2.open("Text_file3.txt");
    if(!x2.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
        std::string tmp;
        std::vector<std::string> v;
        while(x2>>tmp)
        v.push_back(tmp);
        for(int i=v.size()-1; i>=0;i--)
        std::cout<<v[i]<<std::endl;
        x2.close();
}