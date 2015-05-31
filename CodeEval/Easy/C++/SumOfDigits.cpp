#include <iostream>
#include <fstream>
#include <stdlib.h>     /* atoi */

using namespace std;
int main(int argc, char *argv[]) {
    ifstream stream(argv[1]);
    string line;
    while (getline(stream, line)) {
        int total=0;
        for(int i=0; i < line.size(); i++)
        {   
            total+= line[i] - '0';
    
        }
        cout<< total<<endl;
    }
    
    return 0;
} 