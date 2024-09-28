#include <iostream>
#include <string>
using namespace std; 
class student {
 private:
    string name;
    int age;
    float gpa;
    public:
    student(string n, int a, float g) : name(n), age(a), gpa(g) {}
        string getName() const { return name;}
        int getAge() const {return age; } 
        float getGPA() const {return gpa;}
        void setName(string n) {name = n;}
        void setAge(int a) {age = a;}
        void setGPA(float g) {gpa = g;}
        void displayInfo() const {
            cout << "Tên:" << name << endl;
            cout << "Tuổi:" << age << endl;
            cout << "GPA:" << gpa << endl;
        }
} ;
int main() {
    student s1("Nguyen Van A", 20, 3.5);
    cout << "Thông tin sinh viên:" << endl;
    s1.displayInfo();
    s1.setGPA(3.8);
    cout << "\nThông tin sau khi cập nhật GPA:" << endl;
    s1.displayInfo();
    return 0;
}