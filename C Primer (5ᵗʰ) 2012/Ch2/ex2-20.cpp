#include<iostream>
using namespace std;
 
int main()
{
int i = 42;
int *p1 = &i;
*p1 = *p1 * *p1;

cout << *p1 << endl; // prints 1764
 return 0;
}
