#pragma once
#include "mylibraries.h"

class Employee
{
private:
    //Data Members
    string  eid;                  //UNIQUE identifier
    string  name;
    string  dnum;               // works for 
    string  superId;             //identifies the supervisor of this employee.
    vector<string> supervisees; //people supervised by this employee
    vector<int> assignmentIds;

public:
    
    //Mutators
    void setEid(string eidVal) { eid = eidVal; }
    void setName(string nameVal) { name = nameVal; }
    void setSuperId(string superIdVal) { superId = superIdVal; }
    void setSupervisees(vector<string> superviseesVal) { supervisees = superviseesVal; }
    void setDnum(string dnumVal) { dnum = dnumVal; }
    void setAssignmentIds(vector<int> assignmentIdsVal) { assignmentIds = assignmentIdsVal; }

    //Accessors


    //Constructors
    Employee(string eidVal = "na", string nameVal = "na", string dnumVal = "na", string superIdVal = "na",
        vector<string> superviseesVal = {}, vector<int> assignmentIdsVal = {})
    {
        setName(nameVal);
        setEid(eidVal);
        setDnum(dnumVal);
        setSuperId(superIdVal);
        setSupervisees(superviseesVal);
        setAssignmentIds(assignmentIdsVal);

    }

    //User-Defined Methods
    string toString() {
        stringstream sout;
        sout << " Employee [ID: " << eid << ", Name: " << name << " Dept#: " << dnum
            << ", Supervisor: " << superId << "\nSupervisees: {";
        for (string e : supervisees) { sout << e << ", "; } 
        sout << "} \nAssignments: {";
        for (int a : assignmentIds) { sout << a << ", "; } 
        sout << "} ]";
        return sout.str();


    }



};

