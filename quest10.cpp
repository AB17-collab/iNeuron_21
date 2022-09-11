#include<iostream>
using namespace std;
struct subjects{
    string name;
    string UID;
    int chem_marks;
    int math_marks;
    int phy_marks;
};
void display(subjects list[],int n){
    for(int i=0;i<n;i++){
        cout<<list[i].name<<" "<<list[i].UID<<" "<<"Marks in chemistry,maths and physics: "<<list[i].chem_marks<<" "<<list[i].math_marks<<" "<<list[i].phy_marks<<"\n";
    }
}
int main(){
    int n;
    cout<<"Enter the number of students:";
    cin>>n;
    subjects st[n];
    cout<<"Enter the details of the students:\n";
    for(int i=0;i<n;i++){
        cout<<"Enter the name of student "<<i+1<<":";
        getline(cin>>ws,st[i].name); 
        cout<<"Enter the UID of student "<<i+1<<":";
        getline(cin>>ws,st[i].UID);
        cout<<"Enter the marks in chemistry:";
        cin>>st[i].chem_marks;
        cout<<"Enter the marks in maths:";
        cin>>st[i].math_marks;
        cout<<"Enter the marks in physics:";
        cin>>st[i].phy_marks;
    }
    display(st,n);
    return 0;
}