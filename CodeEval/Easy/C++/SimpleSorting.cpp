#include <iostream>
#include <fstream>
#include <algorithm>    // std::sort
#include <vector>       // std::vector
#include <sstream>
#include <iomanip>      // std::setprecision
#include <string>
using namespace std;
vector<float> readIn(string line)
{
    vector<float> tokens;
    istringstream is(line);
    float token;
    while (is>>token) {
            tokens.push_back(token);
    }
    return tokens;
}
int main(int argc, char *argv[]) {
    ifstream stream(argv[1]);
    string line;
    while (getline(stream, line)) {
        vector<float> list;
        list=readIn(line);
       sort(list.begin(), list.end());
       
       for(int x=0; x < list.size(); x++)
       {
        cout.precision(3);
        cout.setf( ios::fixed, ios::floatfield ); // floatfield set to fixed
        cout<<list[x]<<" ";
       }
       cout<<endl;
    }
    return 0;
} 