#include <iostream> 
int main(){
    bool found =false;
    int h,l,guess;
    std::cin>>l>>h;
    while(l<=h){
    guess=(l+h)/2;
    std::cout<<"Is your number > or < or = to "<<guess<<std::endl;
    std::string ans;
    std::cin>>ans;
    if(ans==">")
    l=guess+1;
    else if(ans=="<")
    h=guess-1;
    else if(ans=="="){
    std::cout<<"guessed number is: "<<guess;
    found=true;
    break;}
    }
    if(found!=true)
    std::cout<<"number doesn't exist between interval";
}