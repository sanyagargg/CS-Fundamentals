#include <iostream>
#include <string>
using namespace std;


//defining class
class Teacher{
private:
    double salary;

//using public access modifier
public:
    //creating a constructor (name is same as object and no return type) this is a non-parameterized constructor
    Teacher(){
        dept = "CS";
    }
    //both parameterized and non parameterized constructors can coexist - constructor overloading (concept of polymorphism)

    //creating a parameterized constructor
    //Teacher(string n, string d, string s, double sal) {
    //    name = n;
    //    dept = d;
    //    subject = s;
    //    salary = sal;
    //}

    //need for this pointer
    Teacher(string name, string dept, string subject, double salary) {
        // in this case writing name = name would confuse compiler (which one is the object's property???)
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }

    string name;
    string dept;
    string subject;
    //methods/member functions
    void changeDept(string newdept) {
        dept = newdept;
    }
    //setter (to set private values)
    void setSalary(double s) {
        salary = s;
    }
    //getter (to get private values)
    double getSalary() {
        return salary;
    }

    //getinfo 
    void getInfo() {
        cout << "department : " << dept << endl;
        cout << "salary: " << salary << endl;
    }
};


int main() {
    Teacher teacher1("Sanya", "CS", "OOP", 500000000);
    //teacher1.name = "Sanya";
    //teacher1.dept = "Computer Science"; 
    //teacher1.subject = "OOPs";
    //teacher1.setSalary(500000000);
    //teacher1.getInfo();
    
    Teacher teacher2(teacher1); //default copy constructor is invoked
    teacher2.getInfo();
    //cout << teacher1.dept << endl;
    //cout << teacher1.getSalary() << endl;
    return 0;
}