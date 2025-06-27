#include <iostream>
#include <string>
using namespace std;


//defining class
class Teacher{
//using public access modifier
public:
    string name;
    string dept;
    string subject;
    double salary;

    //methods/member functions
    void changeDept(string newdept) {
        dept = newdept;
    }

};


int main() {
    Teacher teacher1;
    teacher1.name = "Sanya";
    teacher1.dept = "Computer Science";
    teacher1.subject = "OOPs";
    teacher1.salary = 500000000;
    
    cout << teacher1.name;
    return 0;
}