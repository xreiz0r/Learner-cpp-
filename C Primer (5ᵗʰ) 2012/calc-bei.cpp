#include<iostream>
using namespace std;
 
int main()
{
double a=0, b=0, c=0, x=0;
int *p;

cout << "Ref:\n\t Formula:" << endl;
cout << "\tP(B|E) = P(E|B) * P(B)/P(E)" << endl;

cout << "Enter P(E|B)" << endl;
cout << "(is INTERESTING with FEATURE a DESIRABLE?)\n";cin >> a;
cout << "Enter P(b)" << endl;
cout << "(is how likely DESIRABLE?)\n";cin >> b;
cout << "Enter P(e)" << endl; 
cout << "(is how common FEATURE?)\n";cin >> c;
x = a * b / c;
cout << "\tresult:" << endl;
cout << "\t"<< x << "  ("<< x*100 << "%)" << endl;



 return 0;
}

/*?? Is that PERSON with LONG HAIR a FEMALE ?? 

1.probability of a person being female is 50% P(B)

2.general probability of having long hair is 35% P(E)

3.Female proability of long hair is 60% P(E|B) 
*/
