#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <stdlib.h>
using namespace std;
vector<int> readIn(string line)
{
    vector<int> tokens;
    istringstream is(line);
    string token;
    while (std::getline(is, token, ',')) {
        if (!token.empty())
            tokens.push_back(atoi(token.c_str()));
    }
    return tokens;
}
int main(int argc, char *argv[]) {
    ifstream stream(argv[1]);
    string line;
    while (getline(stream, line)) {
        vector<int> tokens =readIn(line);
        if ( ((tokens[0] >> (tokens[1]-1)) & 1) == ((tokens[0] >> (tokens[2]-1)) & 1 ))
            cout<< "true"<<endl;
        else
            cout<<"false"<<endl;
    }
    
    
    return 0;
} 
