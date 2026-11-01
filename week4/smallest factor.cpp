#include <iostream>
int smallest_factor(int n){
    for(int i=2; i<n; i++){
        if(n%i==0)
        return i;
    }
    return 0;

}
int main(){
   
    std::cout<<(smallest_factor(14)==2);
}