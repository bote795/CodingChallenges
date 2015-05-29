
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main(int argc, char *argv[]) {
   int max=13;
   for (int i = 1; i < max; i++) {
       for (int j = 1; j < max; j++) {
           if(j==max-1)
                cout<<right<<setw(4)<<j*i <<endl;
           else
                cout<<right<<setw(4)<<j*i;
       }
   }
    return 0;
} 