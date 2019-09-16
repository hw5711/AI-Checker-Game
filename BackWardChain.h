#ifndef BACKWARDCHAIN_H
#define BACKWARDCHAIN_H
#include <iostream>
#include "con.h"
#include "constack.h"
#include "var.h"
#include <stack>
#include<map>
#include <string>
using namespace std;

class BackWardChain
{
    private:
         var varlt [11];
         con conlt [25];
         string clvarlt[277];
         stack <constack> constaclt;

     public:
        BackWardChain();
        void pushIntoConlusionStack(int,int);
        int checkClauseNum(string);
        int getNumOfConslusionList(string);
        void assignStatus(string);
        string getVariableListValue(string);
        bool isInVariableList(string);
        var checkKnowledgeBase(int, map<string,string> &);
        bool matchVariableList(string,string);
        void start();
       ~BackWardChain();

};


#endif // BACKWARDCHAIN_H
