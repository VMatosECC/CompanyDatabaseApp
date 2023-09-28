// CompanyDatabaseApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#pragma once
#include "Employee.h"
#include "Project.h"


int main()
{
    Employee* e1 = new Employee("111", "Homer Simpson", "d001", "777",
        vector<string> { "222", "444"},
        vector<int> { 1000, 2000, 3000 });

    cout << " e1 \n" << e1->toString() << endl;

    Project* p1 = new Project("P1", "Project 1", "d001",
                            vector<int> { 1000, 5000});
    
    cout << "p1\n" << p1->toString() << endl;


    WorksOn* w1 = new WorksOn("111", "P1", 40);

    cout << "\nAll done!\n";
}

