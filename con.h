#ifndef CON_H
#define CON_H
#include <string>
using namespace std;

class con
{
    private:
         int r_num;
         string c_name;
         string c_value;

    public:
        con(){
            r_num = 0;
            c_name = "";
            c_value = "";
        }

        con(int r,string c, string v){
            r_num = r;
            c_name = c;
            c_value = v;
        }

        int getR_num(){
        return r_num;
        }

        string getC_name(){
            return c_name;
        }

         string getC_value(){
            return c_value;
        }

        void setR_num(int rn){
            r_num = rn;
        }

        void setC_name(string cn){
            c_name = cn;
        }

         void setC_value(string cv){
            c_value = cv;
        }


};

#endif // CON_H
