#include <iostream>
int main(){
    int x0,y0,x,y;
    std::cin>>x0>>y0>>x>>y;
    if((x0>=1 && x0<=8 && y0>=1 && y0<=8) && (x>0 && x<9 && y>0 && y<9)){
        if(((x==x0-2 || x==x0+2) && (y==y0+1 || y==y0-1)) || ((x==x0-1 || x==x0+1) && (y==y0+2 || y==y0-2)))
        std::cout<<"It is a valid move";
        else
        std::cout<<"It isnot a valid move";
    }
    else 
     std::cout<<"It isnot a valid move";

}