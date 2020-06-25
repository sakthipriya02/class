#include<iostream>
using namespace std;
class hms
{
	
private:
int hour,min,sec;
public:
enter();
displaydata()
{
cout<<"The time is =";
cout<<hour<<":"<<min<<":"<<sec<<endl;
}
cal();
};
hms::enter()
{
cout<<"enter hour,min,sec:";
cin>>hour;
cin>>min;
cin>>sec;
}
hms::cal()
{
int h,m,time;
h=hour*3600;
m=min*60;
time=h+m+sec;
cout<<"Time in total seconds:"<<time;
}
int main()
{
hms h;
h.enter();
h.displaydata();
h.cal();
return 0;
}
