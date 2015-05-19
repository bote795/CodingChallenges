#include<iostream>
using namespace std;
bool isPrime(int num);
int main()
{
 int nums=1000;
 int total=2;
 int numPrimes=1;
for(int i=3;numPrimes<nums;i++)
 {
    if(isPrime(i))
    { 
      numPrimes++;
      total+=i;
    }
 }
 cout<<total<<endl;
 return 0;
}
bool isPrime(int num)
{
 if(num % 2 ==0)
     return false;
 for(int i=3; i < num; i+=2)
 {
   if(num % i ==0)
     return false;
 }
 return true;
}
