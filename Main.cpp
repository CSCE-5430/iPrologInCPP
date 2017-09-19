#include <iostream>
#include <string>
using namespace std;

class Main{

    public: static void println(){

        cout<<"/";
    }

    public: static void pp(){
        cout<<"/";

    }

    public: static void run(const char* fname0){

        string fname = fname0 ;
        fname.append(".nl");
    }

    public: static void srun(const char* fname0){
        string fname = fname0 ;
        fname.append(".nl");
    }
};

int main(int argc,const char* argv[]){
    const char* fname = argv[0];
    Main ob;
    ob.run(fname);
    return 0;

}

