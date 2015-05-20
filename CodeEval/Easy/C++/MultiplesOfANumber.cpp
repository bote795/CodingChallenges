#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[]) {
    ifstream stream(argv[1]);
    string line;
    while (getline(stream, line)) {
        size_t pos=line.find(",");
        int n = atoi(line.substr(pos+1,line.size()-pos).c_str());
        int x = atoi(line.substr(0,pos).c_str()); //target value >=
       while(n <= x){
           n<<=1;
       }
        cout<<n<<endl;    
    }
    return 0;
} 