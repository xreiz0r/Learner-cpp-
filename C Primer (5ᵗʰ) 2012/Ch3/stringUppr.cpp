#include<iostream>
#include<cstring>
 using namespace std; 

 int main()
{
//
string s("some string");
string n("plus \nanother string");
if (!s.empty())
s[0] = toupper(s[0]);
cout << s << endl;


for (decltype(n.size()) index = 0;index != n.size() && !isspace(n[index]); ++index)
// process characters in s until we run out of characters or we hit a whitespace
n[index] = toupper(n[index]); 		// capitalize the current character
cout << n << endl;

return 0;
}
