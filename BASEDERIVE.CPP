#include<iostream>
#include<conio.h>
#include<string.h>
#include<iomanip>
class student {
    private:
        int regno;
        char name[20];
        float fees;
    public:
        void get();
        void display();
};

void student::get() {
    std::cout<<"Enter The Student Name: ";
    std::cin.getline(name, 20);
    std::cout<<"Enter Student Register Number: ";
    std::cin>>regno;
    std::cout<<"Enter Student Fees: ";
    std::cin>>fees;
}

void student::display() {
    std::cout<<"Student Register Number: "<<regno<<std::endl;
    std::cout<<"Student Name: "<<name<<std::endl;
    std::cout<<"Student Fees:  "<<fees<<std::endl;
}

int main () {
    student s, *sp;
    sp=&s;
    sp->get();
    sp->display();
    getch();
    return 0;
}