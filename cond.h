#ifndef COND_H
#define COND_H
#include <string>
using namespace std;
class cond
{
    private:
         int r_num;
         string c_name;
         string c_value;

    public:
        cond(){
            r_num = 0;
            c_name = "";
            c_value = "";
        }

        cond(int r,string c, string v){
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
