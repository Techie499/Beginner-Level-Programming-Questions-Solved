#include<iostream>
using namespace std;
int day(int d,int m,int y){
    int yc=0,day=0;
    int mc[]={0,3,3,6,1,4,6,2,5,0,3,5};
    if(y>=1600 && y<=1699)
        yc=6;
    else if(y>=1700 && y<=1799)
        yc=4;
    else if(y>=1800 && y<=1899)
        yc=2;
    else if(y>=1900 && y<=1999)
        yc=0;
    else if(y>=2000 && y<=2099)
        yc=6;
    
    day=d+mc[m-1]+(y%100)+((y%100)/4)+yc;
    day=day%7;
    return day;
}
void main(){
    int days,d,m,y;
    cout<<"Enter in Numbers"<<endl;
    cout<<"Enter Date : ";
    cin>>d;
    cout<<"Enter Month : ";
    cin>>m;
    cout<<"Enter Year : ";
    cin>>y;
    cout<<"Date : "<<d<<"-"<<m<<"-"<<y<<endl;
    days=day(d,m,y);
    cout<<"The Day is :";
    switch(days){
        case 0:
            cout<<"Sunday";
        break;
        case 1:
            cout<<"Monday";
        break;
        case 2:
            cout<<"Tuesday";
        break;
        case 3:
            cout<<"Wednesday";
        break;
        case 4:
            cout<<"Thursday";
        break;
        case 5:
            cout<<"Friday";
        break;
        case 6:
            cout<<"Saturday";
        break;
    }
}