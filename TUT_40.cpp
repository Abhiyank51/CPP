// Multilevel Inheritance

#include<iostream>
using namespace std;

class Student{
    protected:
        int roll_number;
    public:
        void set_roll_number(int);
        void get_roll_number(void);
};

void Student :: set_roll_number(int r){
    roll_number = r;
}
void Student :: get_roll_number(void){
    cout<<"The roll number is: "<<roll_number<<endl;
}

// class exam derived from student
class Exam : public Student{
    protected:
        float maths;
        float physics;
    public:
        void set_marks(float,float);
        void get_marks(void);
};
void Exam :: set_marks(float m1,float m2){
    maths = m1;
    physics = m2;
}
void Exam :: get_marks(){
    cout<<"The marks obtained in maths is "<<maths<<endl;
    cout<<"The marks ontained in physics is "<<physics<<endl;
}

// classresult derived from exam : MULTILEVEL INHERITENCE AS -->>  Student----->Exam------>Result
class Result : public Exam{
    float percentage;
    public:
        void display_result(){
            get_roll_number();
            get_marks();
            cout<<"Your percentage is "<<(maths+physics)/2<<" %"<<endl;
        }
};

int main(){
    Result Abhiyank;
    Abhiyank.set_roll_number(4);
    Abhiyank.set_marks(96.0, 99.0);
    Abhiyank.display_result();
    return 0;
}

// Notes:
// If we are inheriting B from A and C from B:[A--->B---->C]
//    1. A is the base class of B and B is the base class for C.
//    2. A-->B-->C  is called Inheritance path.