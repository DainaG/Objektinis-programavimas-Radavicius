#include <iostream>
#include <array>
#include <vector>
#include <string>
using namespace std;

class Student{
    private:
        string name, school;
        int year, cantClasses;
        float avgGrade;
    public:
        static int objectCount;
        Student(string n, string s, int y, int c){
            name = n;
            school = s;
            year = y;
            cantClasses = c;
            objectCount++;
        }
        float Average(int grades[]){
            int total;
            for (int i = 0; i < cantClasses; i++)
                total += grades[i];
            avgGrade = total/cantClasses;
        }
        ~Student(){
            objectCount--;
        }
}
int main(){
    Student stud = new Student("Pepe", "ORT", 2, 6);
}
