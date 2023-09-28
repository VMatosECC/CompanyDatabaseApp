#pragma once
#include "mylibraries.h"

class Project
{
private:
    //Data Members
    string  pId;             //UNIQUE identifier
    string  pname;  
    string  dnum;           //dept controlling the project
    vector<int> assignmentIds;
public:

    //Mutators
    void setPid(string pIdVal) { pId = pIdVal; }
    void setPname(string pNameVal) { pname = pNameVal; }
    void setDnum(string dnumVal) { dnum = dnumVal; }
    void setAssignmentIds(vector<int> assignmentIdsVal) {
        assignmentIds = assignmentIdsVal;

    }

    //Constructors
    Project(string pIdVal = "na", string pNameVal = "na", string dnumVal = "na",
        vector<int> assignmentIdsVal = {})
    {
        setPid(pIdVal);
        setPname(pNameVal);
        setDnum(dnumVal);
        setAssignmentIds(assignmentIdsVal);
    }

    //User-defined methods
    string toString() {
        stringstream sout;
        sout << " Project [ Pnumber: " << pId << ", Name: " << pname
            << ", Dept. in Charge: " << dnum << "\nAssignments: {";
        for (int a : assignmentIds) { sout << a << ", "; }
        sout << " } ]";
        return sout.str();


    }

};

