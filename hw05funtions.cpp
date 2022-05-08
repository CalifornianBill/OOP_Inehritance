#include "hw05.h"

//Date functions

//Constructors
date::date()
{
    this->month = "January";
    this->day = "1";
    this->year = "2021";
};

date::date(int m, int d, int y)
{
    this->month = m;
    this->day = d;
    this->year = y;
};

//Set
void date::setMonth(std::string newMonth)
{
    this->month = newMonth;
};
void date::setday(std::string newDay)
{
    this->day = newDay;
};
void date::setYear(std::string newYear)
{
    this->year = newYear;
};

//Get
std::string date::getMonth() { return this->month; };
std::string date::getday() { return this->day; };
std::string date::getYear() { return this->year; };
std::string date::getDate() { return this->month + "/" + this->day + "/" + this->year; };

//Employee functions

//Constructors
employee::employee()
{
    this->name = "N/A";
    this->phoneNum = "N/A";
    this->age = 0;
    this->gender = "N/A";
    this->title = "N/A";
    this->salary = 0;
    this->hireDate = "N/A";
};

employee::employee(std::string name, std::string phoneNum, int age, std::string gender, std::string title, int salary, std::string hireDate)
{
    this->name = name;
    this->phoneNum = phoneNum;
    this->age = age;
    this->gender = gender;
    this->title = title;
    this->salary = salary;
    this->hireDate = hireDate;
};

//Set
void employee::setName(std::string newName)
{
    this->name = newName;
};

void employee::setPhoneNum(std::string newPhoneNum)
{
    this->phoneNum = newPhoneNum;
};

void employee::setAge(int newAge)
{
    this->age = newAge;
};

void employee::setGender(std::string newGender)
{
    this->gender = newGender;
};

void employee::setTitle(std::string newTitle)
{
    this->title = newTitle;
};

void employee::setSalary(int newSalary)
{
    this->salary = newSalary;
};

void employee::setHireDate(std::string newHireDate)
{
    this->hireDate = newHireDate;
};

//Get
std::string employee::getName() { return this->name; };
std::string employee::getPhoneNum() { return this->phoneNum; };
int employee::getAge() { return this->age; };
std::string employee::getGender() { return this->gender; };
std::string employee::getTitle() { return this->title; };
int employee::getSalary() { return this->salary; };
std::string employee::getHireDate() { return this->hireDate; };

//Print
void employee::print()
{
    std::cout << "Name        : " << this->name << std::endl;
    std::cout << "Phone Number: " << this->phoneNum << std::endl;
    std::cout << "Age         : " << this->age << std::endl;
    std::cout << "Gender      : " << this->gender << std::endl;
    std::cout << "Title       : " << this->title << std::endl;
    std::cout << "Salary      : " << this->salary << std::endl;
    std::cout << "Hire Date   : " << this->hireDate << std::endl;
    std::cout << std::endl;
};

//Programmer Functions

//Constructors
programmer::programmer()
{
    employee();

    this->department = 0;
    this->supervisor = "N/A";
    this->payInc = 0;
    this->cpp = false;
    this->java = false;
};

programmer::programmer(std::string name, std::string phoneNum, int age, std::string gender,
                       std::string title, int salary, std::string hireDate, int department,
                       std::string supervisor, int payInc, bool cpp, bool java) 
                       : employee(name, phoneNum, age, gender, title, salary, hireDate)
{    
    this->department = department;
    this->supervisor = supervisor;
    this->payInc = payInc;
    this->cpp = cpp;
    this->java = java;
};

//Set
void programmer::setDepartment(int newDepartment)
{
    this->department = newDepartment;
};

void programmer::setSupervisor(std::string newSupervisor)
{
    this->supervisor = newSupervisor;
};

void programmer::setPayInc(int newPayInc)
{
    this->payInc = newPayInc;
};

void programmer::setCpp(bool newCpp)
{
    this->cpp = newCpp;
};

void programmer::setJava(bool newJava)
{
    this->java = newJava;
};

//Get
int programmer::getDepartment() { return this->department; };
std::string programmer::getSupervisor() { return this->supervisor; };
int programmer::getPayInc() { return this->payInc; };
bool programmer::getCpp() { return this->cpp; };
bool programmer::getJava() { return this->java; };

//Print
void programmer::print()
{
    std::string temp = this->getName();
    std::cout << "Name        : " << temp << std::endl;
    temp = this->getPhoneNum();
    std::cout << "Phone Number: " << temp << std::endl;
    int tempInt = this->getAge();
    std::cout << "Age         : " << tempInt << std::endl;
    temp = this->getGender();
    std::cout << "Gender      : " << temp << std::endl;
    temp = this->getTitle();
    std::cout << "Title       : " << temp << std::endl;
    tempInt = this->getSalary();
    std::cout << "Salary      : " << tempInt << std::endl;
    temp = this->getHireDate();
    std::cout << "Hire Date   : " << temp << std::endl;

    std::cout << "Department  : " << this->department << std::endl;
    std::cout << "Supervisor  : " << this->supervisor << std::endl;
    std::cout << "Pay Increase: " << this->payInc << "%" << std::endl;
    if (this->cpp) {std::cout << "Knows C++   : Yes" << std::endl;}
    else{std::cout << "Knows C++   : No" << std::endl;}
    if (this->java) {std::cout << "Knows Java  : Yes" << std::endl;}
    else{std::cout << "Knows Java  : No" << std::endl;}
    std::cout << std::endl;
};

//Software Architect Functions

//Constructors
softwareArchitect::softwareArchitect()
{
    employee();

    this->department = 0;
    this->supervisor = "N/A";
    this->payInc = 0;
    this->experience = 0;
};

softwareArchitect::softwareArchitect(std::string name, std::string phoneNum, int age, std::string gender,
                                     std::string title, int salary, std::string hireDate, int department,
                                     std::string supervisor, int payInc, int experience) 
                                     : employee(name, phoneNum, age, gender, title, salary, hireDate)
{
    this->department = department;
    this->supervisor = supervisor;
    this->payInc = payInc;
    this->experience = experience;
};

//Set
void softwareArchitect::setDepartment(int newDepartment)
{
    this->department = newDepartment;
};

void softwareArchitect::setSupervisor(std::string newSupervisor)
{
    this->supervisor = newSupervisor;
};

void softwareArchitect::setPayInc(int newPayInc)
{
    this->payInc = newPayInc;
};

void softwareArchitect::setExperience(int newExperience)
{
    this->experience = newExperience;
};

//Get
int softwareArchitect::getDepartment() { return this->department; };
std::string softwareArchitect::getSupervisor() { return this->supervisor; };
int softwareArchitect::getPayInc() { return this->payInc; };
int softwareArchitect::getExperience() { return this->experience; };

//Print
void softwareArchitect::print()

{
    std::string temp = this->getName();
    std::cout << "Name        : " << temp << std::endl;
    temp = this->getPhoneNum();
    std::cout << "Phone Number: " << temp << std::endl;
    int tempInt = this->getAge();
    std::cout << "Age         : " << tempInt << std::endl;
    temp = this->getGender();
    std::cout << "Gender      : " << temp << std::endl;
    temp = this->getTitle();
    std::cout << "Title       : " << temp << std::endl;
    tempInt = this->getSalary();
    std::cout << "Salary      : " << tempInt << std::endl;
    temp = this->getHireDate();
    std::cout << "Hire Date   : " << temp << std::endl;

    std::cout << "Department  : " << this->department << std::endl;
    std::cout << "Supervisor  : " << this->supervisor << std::endl;
    std::cout << "Pay Increase: " << this->payInc << "%" << std::endl;
    std::cout << "Experience  : " << this->experience << " Years" << std::endl;
    std::cout << std::endl;
};