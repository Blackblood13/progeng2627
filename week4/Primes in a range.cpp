#include <iostream>
int smallest_factor(int n){
    for(int i=2; i<n; i++){
        if(n%i==0)
        return i;
    }
    return 0;

}
int main(){
    int a,b;
    std::cin>>a>>b;
    for(int j=a; j<=b; j++){
    if(smallest_factor(j)==0)
    std::cout<<j<<std::endl;
    }
    
}