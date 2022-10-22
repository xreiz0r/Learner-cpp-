#include<iostream>

using namespace std;

int nif = 12;
 
int main()
{

/* Understanding the order of pointers:
The order to which a value is declared in relation to a pointer
is extremely important as it relates to the way the compiler reads the code(Up2Down)
 
 

*/ 

int q = 21;
int *p2 = &q;
int o = *p2;  
int *p1 = &o;
int fin = *p1;
int &nif = *p1;


cout << "\n\n meW STUFF \n" << endl;

cout << nif << " " << ::nif << endl;

//Visualiser
//fin > *p1 > &o > *p2 > &q > q = 21


 return 0;
}
