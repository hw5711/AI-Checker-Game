#ifndef STRUCTURES_H
#define STRUCTURES_H
#include <iostream>
//using namespace std;

class Structures{

    private:

        struct var{
                     string name;
                     string status;
                     string value;
                     var (string n,string s,string v){
                        name = n;
                        status = s;
                        value = v;
                       }
                 };
/*
        struct constack
                {
                    int r_num;
                    int cl_num;
                    constack(int r,int c){
                        r_num = r;
                       cl_num = c;
                    }

                };



         struct con{
                 int r_num;
                 string c_name;
                 string c_value;
con(int r,string c, string v){
                     r_num = r;
                     c_name = c;
                     c_value = v;
                 }
                };
                */

    public:



}
//#endif // STRUCTURES_H

Structures :: Structures()
