#include <iostream>
using namespace std;
struct TIME{
    int seconds;
    int minutes;
    int hours;
};
void Difference(TIME t1, TIME t2, TIME *difference);
int main(){
TIME t1, t2, diff;
char decision;
do{cout<<"Welcome to the time measurement app!"<<endl;
cout<<endl;
cout<<"Enter the starting time"<<endl;
cin>>t1.hours>>t1.minutes>>t1.seconds;
cout<<endl;
cout<<"Enter the end time"<<endl;
cin>>t2.hours>>t2.minutes>>t2.seconds;
Difference(t1, t2, &diff);
cout<<endl<<"Time difference: "<<t2.hours<<":"<<t2.minutes<<":"<<t2.seconds;
cout<<" - "<<t1.hours<<":"<<t1.minutes<<":"<<t1.seconds;
cout<<" = "<<diff.hours<<":"<<diff.minutes<<":"<<diff.seconds<<endl;
cout<<"Do you want to measure another time period?"<<endl;
cout<<"Enter Y/y for yes or any other character to end the program"<<endl;
cin>>decision;
}while(decision=='y' || decision=='Y');
    system("pause");
    return 0;
}
void Difference(TIME t1, TIME t2, TIME *difference){
if(t1.seconds>t2.seconds){
    --t2.minutes;
    t2.seconds+=60;
}
difference->seconds= t2.seconds-t1.seconds;

if(t1.minutes>t2.minutes){
    --t2.hours;
    t2.minutes+=60;
}
difference->minutes=t2.minutes- t1.minutes;
difference->hours=t2.hours- t1.hours;
}