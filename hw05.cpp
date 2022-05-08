#include "hw05.h"

int main()
{
    date date; //Creates default date of Jan 1, 2021

    std::string dateStr = date.getDate(); //dateStr = "January/1/2021"

    employee e1; //Default Constructor
    employee e2("Tim", "949-256-1562", 19, "Male", "employee", 24000, dateStr); //Non-default constructor

    std::cout << "~~~ Employees ~~~\n";
    e1.print(); //Print e1
    e2.print(); //Print e2

    //Change date to Febuary/2/2022
    date.setMonth("Febuary");
    date.setday("2");
    date.setYear("2022");

    dateStr = date.getDate(); //Update date

    programmer p1; //Default Constructor
    programmer p2("Timothy", "714-538-1256", 21, "Male", "programmer", 50000, dateStr, 1, "Jim", 4, true, false); //Non-default constructor

    std::cout << "~~~ Programmers ~~~\n";
    p1.print(); //Print p1
    p2.print(); //Print p2

    std::string test = p2.getName();
    //std::cout << test;

    //Change date to March/3/2023
    date.setMonth("March");
    date.setday("3");
    date.setYear("2023");

    dateStr = date.getDate(); //Update date

    softwareArchitect s1; //Default Constructor
    softwareArchitect s2("Tiffinay", "213-254-8541", 24, "Female", "software architecht", 75000, dateStr, 2, "Todd", 6, 5); //Non-default constructor

    std::cout << "~~~ Software Architects ~~~\n";
    s1.print(); //Print s1
    s2.print(); //Print s2

    std::cout << "~~~~~~~~~~~~~~~~~~~~~~ Changing values! ~~~~~~~~~~~~~~~~~~~~~~\n\n";

    e2.setAge(21); //Set Tim's age to 21
    e2.setGender("Female"); //Tim got a gender change
    e2.setSalary(26000); //Tim got a raise

    std::cout << "~~~ Employee ~~~\n";
    e2.print(); //print e2

    p2.setAge(24); // Set timothy's age to 24
    p2.setPayInc(6); //set pay increase to 6%
    p2.setJava(true); //Set java true

    std::cout << "~~~ Programmer ~~~\n";
    p2.print();

    s2.setName("Gertrude"); // Change Tiffinay to Gertrude
    s2.setSupervisor("Thomas"); // Change Supervisor to Thomas
    s2.setExperience(8); // Change experience to 8 years

    std::cout << "~~~ Software Architect ~~~\n";
    s2.print(); // Print s2

    return 0;
}