#include<iostream>
using namespace std;
struct time{
    int hours;
    int mins;
    int secs;
};
void difference(time &t3,time start,time stop){
    if(start.secs > stop.secs){
        --stop.mins;
        stop.secs += 60;
    }
    t3.secs = stop.secs-start.secs;
    if(start.mins > stop.mins){
        --stop.hours;
        stop.mins += 60;
    }
    t3.mins = stop.mins-start.mins;
    t3.hours = stop.hours-start.hours;
}
int main(){
    time t1;
    cout<<"Enter the starting time period in hours:mins:seconds format - ";
    cin>>t1.hours;
    cin>>t1.mins;
    cin>>t1.secs;
    cout<<"\n";
    time t2;
    cout<<"Enter the ending time period in hours:mins:seconds format - ";
    cin>>t2.hours;
    cin>>t2.mins;
    cin>>t2.secs;
    cout<<"\n";
    time t;
    difference(t,t1,t2);
    cout<<"The starting time is - "<<t1.hours<<":"<<t1.mins<<":"<<t1.secs<<"\n";
    cout<<"The starting time is - "<<t2.hours<<":"<<t2.mins<<":"<<t2.secs<<"\n";
    cout<<"The difference between the two time is - "<<t.hours<<":"<<t.mins<<":"<<t.secs; 
    return 0;
}