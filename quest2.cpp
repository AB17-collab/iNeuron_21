#include<iostream>
using namespace std;
struct Employee{
    int Eid;
    string Ename;
    int salary;
    Employee(int id,string name,int sal){
        Eid = id;
        Ename = name;
        salary = sal;
    }
};
void display(Employee E1){
    cout<<"ID of the employee:"<<E1.Eid<<"\n";
    cout<<"Name of the employee:"<<E1.Ename<<"\n";
    cout<<"Salary of the employee:"<<E1.salary<<"\n";
}
int main(){
    int id,salary;
    string name;
    cout<<"Enter the id of the employee: ";
    cin>>id;
    cout<<"Enter the name of the employee: ";
    getline(cin>>ws,name);
    cout<<"Enter the salary of the employee: ";
    cin>>salary;
    Employee E1 = {id,name,salary};
    display(E1);
    return 0;
}