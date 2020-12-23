#include <iostream>
using namespace std;

int dayinmonth(int month,int year){
	int day=0;
	if (month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
        day=31;
    else if (month==4 || month==6 || month==9 || month==11)
        day=30;
    else{
        if (year%400==0 && year%4==0)
            if (year%100!=0)
                day=29;
        else
            day=28;
	}
	return day;
}

int dayofweek(int d,int m,int y){ 
    int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 } ;
    y -= m < 3;
    return (( y + ((int)y / 4) - ((int)y / 100) + ((int)y / 400) + t[m - 1] + d) % 7);
}

int main(){
	int y,m,t,day,a,i,j;
	cout<<"Enter Year : ";
	cin>>y;
	cout<<"Enter Month (in Number) : ";
	cin>>m;
	t=dayofweek(1,m,y);
	day=dayinmonth(m,y);
	cout<<"M\tT\tW\tTh\tF\tS\tS"<<endl;
	a=1;
	for (i=1;i<7;i++){
		if (a>day)
			break;
		for (j=1;j<8;j++){
			if (i==1){
				if (j>=t){
					cout<<a<<"\t";
					a+=1;
				}
				else
					cout<<" \t";
			}
			else{
				cout<<a<<"\t";
				a+=1;
			}
			if(a>day)
				break;
		}
		cout<<"\n";
	}
	return 0;
}