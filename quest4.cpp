#include<iostream>
using namespace std;
struct Employee{
    int Eid;
    string Ename;
    int salary;
    /*Employee(int id,string name,int sal){
        Eid = id;
        Ename = name;
        salary = sal;
    }*/
};
void display(Employee E1){
    cout<<"ID of the employee:"<<E1.Eid<<"\n";
    cout<<"Name of the employee:"<<E1.Ename<<"\n";
    cout<<"Salary of the employee:"<<E1.salary<<"\n";
}
int findHighestSalary(Employee E[],int n){
    int highest = 0;
    for(int i=0;i<n;i++){
        if(E[i].salary>highest)
            highest = E[i].salary;
    }
    return highest;
}
int main(){
    int n;
    cout<<"Enter the number of employees you want:";
    cin>>n; 
    Employee *E = new Employee[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the id of the employee: ";
        cin>>E[i].Eid;
        cout<<"Enter the name of the employee: ";
        getline(cin>>ws,E[i].Ename);
        cout<<"Enter the salary of the employee: ";
        cin>>E[i].salary;
        display(E[i]);
    }
    cout<<"The highest salary offered to any employee in the company is:"<<findHighestSalary(E,n);
    return 0;
}