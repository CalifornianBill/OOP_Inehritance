#ifndef _HW06B_
#define _HW06B_

#include <iostream>

class date
{
private:
    std::string month;
    std::string day;
    std::string year;

public:
    date();
    date(int m, int d, int y);

    void setMonth(std::string month);
    void setday(std::string day);
    void setYear(std::string year);

    std::string getMonth();
    std::string getday();
    std::string getYear();
    std::string getDate();
};

class employee
{
private:
    std::string name;
    std::string phoneNum;
    int age;
    std::string gender;
    std::string title;
    int salary;
    std::string hireDate;

public:
    employee();
    employee(std::string name, std::string phoneNum, int age, std::string gender, std::string title, int salary, std::string hireDate);

    void setName(std::string name);
    void setPhoneNum(std::string phoneNum);
    void setAge(int age);
    void setGender(std::string gender);
    void setTitle(std::string title);
    void setSalary(int salary);
    void setHireDate(std::string hireDate);

    std::string getName();
    std::string getPhoneNum();
    int getAge();
    std::string getGender();
    std::string getTitle();
    int getSalary();
    std::string getHireDate();

    virtual void print();
};

class programmer : public employee
{
private:
    int department;
    std::string supervisor;
    int payInc;
    bool cpp;
    bool java;

public:
    programmer();
    programmer(std::string name, std::string phoneNum, int age, std::string gender, std::string title, int salary, std::string hireDate, int department, std::string supervisor, int payInc, bool cpp, bool java); 

    void setDepartment(int department);
    void setSupervisor(std::string supervisor);
    void setPayInc(int payInc);
    void setCpp(bool cpp);
    void setJava(bool java);

    int getDepartment();
    std::string getSupervisor();
    int getPayInc();
    bool getCpp();
    bool getJava();

    void print();
};

class softwareArchitect : public employee
{
private:
    int department;
    std::string supervisor;
    int payInc;
    int experience;

public:
    softwareArchitect();
    softwareArchitect(std::string name, std::string phoneNum, int age, std::string gender, std::string title, int salary, std::string hireDate, int department, std::string supervisor, int payInc, int experience);

    void setDepartment(int department);
    void setSupervisor(std::string supervisor);
    void setPayInc(int payInc);
    void setExperience(int experience);

    int getDepartment();
    std::string getSupervisor();
    int getPayInc();
    int getExperience();

    void print();
};

#endif