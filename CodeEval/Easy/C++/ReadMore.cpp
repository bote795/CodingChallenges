#include <iostream>
#include <fstream>
#include <string>
#include <locale>         // std::locale, std::isalpha

using namespace std;
string trim(string const& str)
{
    if(str.empty())
        return str;

    size_t first = str.find_first_not_of(' ');
    size_t last  = str.find_last_not_of(' ');
    return str.substr(first, last-first+1);
}
int main(int argc, char *argv[]) {
    ifstream stream(argv[1]);
    string line;
    while (getline(stream, line)) {
        if(line.size() <= 55)
            cout << line << endl;
        else
        {
            locale loc;
            string temp=line.substr(0,39);
            if(isalpha(line[38],loc) && isalpha(line[39],loc)) // cut off is a word
            {
                for (int i=38; isalpha(line[i],loc); i-- )  //remove characters
                {
                    temp[i]=' ';
                }
            }
            temp = trim(temp);
            
            cout<<temp<<"... <Read More>"<<endl;
        }
            
    }
    
    return 0;
} 