#ifndef CONSTACK_H
#define CONSTACK_H


class constack
{
    private:
        int r_num;
        int cl_num;

    public:
        constack(){
            r_num = 0;
           cl_num = 0;
        }

        constack(int r,int c){
           r_num = r;
           cl_num = c;
        }

        void setR_num(int rn){
            r_num = rn;
        }

        void setCl_num( int cln){
            cl_num = cln;
        }

        int getR_num(){
            return r_num;
        }

        int getCl_num(){
            return cl_num;
        }

};

#endif // CONSTACK_H
