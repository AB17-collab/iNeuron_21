#include<iostream>
using namespace std;
struct student{
    string name;
    string UID;
    string branch;
    /*student(string n,string ID,string b){
        name = n;
        ID = UID;
        branch = b;
    }*/
};
void display(student list[],int n){
    for(int i=0;i<n;i++){
        cout<<list[i].name<<" "<<list[i].UID<<" "<<list[i].branch<<"\n";
    }
}
int main(){
    int n;
    cout<<"Enter the number of students:";
    cin>>n;
    student list[n]; 
    for(int i=0;i<n;i++){
        cout<<"Enter the name:";
        getline(cin>>ws,list[i].name); 
        cout<<"Enter the UID:";
        getline(cin>>ws,list[i].UID); 
        cout<<"Enter the branch:";
        getline(cin>>ws,list[i].branch);
    }
    display(list,n);
    return 0;
}