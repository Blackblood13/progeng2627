#include<iostream>
#include<vector>
int main(){
    std::vector<int> sequence;
    int term=1;
    while(term!=0){
        std::cin>>term;
        sequence.push_back(term);
    }
    std::cout<<"sequence: ";
    for(int i=0; i<sequence.size();i++)
    std::cout<<sequence[i]<<" ";
    std::cout<<std::endl;
    std::cout<<"sequence in reverse order"<<" ";
    for(int j=sequence.size()-1; j>=0; j--)
    std::cout<<sequence[j]<<" ";

}