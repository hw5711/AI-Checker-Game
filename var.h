#ifndef VAR_H
#define VAR_H
#include <string>
using namespace std;

class var
{
    private:
         string name;
         string status;
         string value;

     public:
        var(){
            name = "";
            status = "";
            value = "";
        }

        var(string n,string s,string v){
            name = n;
            status = s;
            value = v;
        }

        void setName(string n){
            name = n;
        }

        void setStatus(string s){
            status = s;
        }

        void setValue(string v){
            value = v;
        }

        string getName(){
            return name;
        }

        string getStatus(){
            return status;
        }

        string getValue(){
            return value;
        }

};

#endif // VAR_H
