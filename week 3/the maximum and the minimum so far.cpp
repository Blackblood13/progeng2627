#include <iostream>

int main(){
    int n, curmax,curmin;

    std::cout << "please enter number:" << std::endl;
    std::cin >> n;
    curmax=n;
    curmin=n;

    std::cout << "maximum so far: " <<"\t"<<curmax << std::endl;
    std::cout << "minimum so far: " <<"\t"<<curmin<< std::endl;
    while(n != 0){

        std::cout << "please enter number:" << std::endl;
        std::cin >> n;

        // if the current number is greater than the current max...
        if(n>curmax){
            curmax=n;
        }
        if(n<curmin){
            curmin=n;
        }

        std::cout << "maximum so far: " <<curmax<< std::endl;
        std::cout << "minimum so far: " <<curmin<< std::endl;
    }

}