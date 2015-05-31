#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;
int main(int argc, char *argv[]) {
    ifstream stream(argv[1]);
    string line;
    while (getline(stream, line)) {
        stringstream  ss(line);
        string token;
        while(ss>>token) {
            char first = token[0];
            token[0]=token[token.size()-1];
            token[token.size()-1] = first;
            cout << token << ' ';
        }
        cout<<"\n";
    }
    return 0;
} 