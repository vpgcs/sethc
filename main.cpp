#include <iostream>
#include <cstdlib>

int main(int argc, char* argv[]){

    cerr<<argc-1<<" args:"<<endl;
    for (int i=1; i<argc; i++){
        cerr<<argv[i]<<" ";
    }
    cerr<<endl;
}
