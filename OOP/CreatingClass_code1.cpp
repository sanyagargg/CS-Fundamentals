#include <iostream>
#include <string>
using namespace std;


//defining class
class Teacher{
private:
    double salary;

//using public access modifier
public:
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
};


int main() {
    Teacher teacher1;
    teacher1.name = "Sanya";
    teacher1.dept = "Computer Science";
    teacher1.subject = "OOPs";
    teacher1.setSalary(500000000);
    
    cout << teacher1.name << endl;
    cout << teacher1.getSalary() << endl;
    return 0;
}