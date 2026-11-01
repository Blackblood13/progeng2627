#include <iostream>
bool leap_year(int year){
    bool ly;
     if(year%400==0 || (year%4==0 && year%100!=0))
     ly=true;
     else
     ly=false;
     return ly;
}
void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){
    int days;
    if(m1==4 || m1==6 || m1==9 || m1==11)
    days=30;
    
    else if(m1==2){
        if(leap_year(y1))
        days=29;
        else
        days=28;
    }
    else
    days=31;

    if(d1<days){
    d2=d1+1;
    y2=y1;
    m2=m1;}
    else if(d1==days){
        d2=1;
        if(m1==12){
        m2=1;
        y2=y1+1;
        }
        else{
         m2=m1+1;
         y2=y1;
        }
       

    }

    
}
int main(){
    int y1=2011, d1=31,m1=12;
    int y2,m2,d2;
    next_date(d1,m1,y1,d2,m2,y2);
    std::cout<<(y2==2012 && m2==1 && d2==1);
    
    
}