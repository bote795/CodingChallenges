#include <iostream>
#include <fstream>
#include <algorithm>    // std::sort
#include <vector>       // std::vector
#include <sstream>
#include <iomanip>      // std::setprecision
#include <string>
using namespace std;
vector<int> readIn(string line)
{
    vector<double> tokens;
    istringstream is(line);
    string token;
    while (std::getline(is, token, ' ')) {
        if (!token.empty())
            tokens.push_back(stod(token));
    }
    return tokens;
}
int main(int argc, char *argv[]) {
    ifstream stream(argv[1]);
    string line;
    while (getline(stream, line)) {
        vector<double> list;
        list=readIn(line);
       sort(list.begin(), list.end());
       
       for(int x=0; x < list.size(); x++)
       {
        cout<<setprecision(3)<<list[x]<<" ";
       }
       cout<<endl;
    }
    return 0;
} 