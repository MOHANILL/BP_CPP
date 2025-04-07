#include <iostream>
#include <fstream>
using namespace std;

int gcd(int a1, int a2){
  
  if (a1 == 0)
      return a2;
  if (a2 == 0)
      return a;
  if (a1 == a2)
    return a1;
  if (a1 > a2)
    return gcd(a1-a2, a2);
  return gcd(a1, a2-a1);
}

int main()
{
    ofstream output("GCD.txt");
    for (int i = 10; i <= 99 ; i++)
        for (int j = 1; j < 10 ; j++)
            output << "("<<i<<","<<j<<") : " << gcd(i, j) << endl;
}
