#include <iostream>
using namespace std;



int main(){
  string s = "FEDCBA";
  for (int i = 0; i < s.length(); i++) // A IS BIGGER THEN C yesss!!!
  {
    for (int j = 0; j < s.length(); j++)
    {
      if (s[i] < s[j])
      {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
      }
      
    }

  }
  cout << s;
}

