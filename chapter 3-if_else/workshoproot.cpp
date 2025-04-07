#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    double a, b, c;
    
  
    cin >> a >> b >> c;
    
    double discriminant = b * b - 4 * a * c;
    
    double root1 = (-b + sqrt(discriminant)) / (2 * a);
    double root2 = (-b - sqrt(discriminant)) / (2 * a);
    
    cout  << root1 << endl;
    cout  << root2 << endl;
    
    return 0;
}