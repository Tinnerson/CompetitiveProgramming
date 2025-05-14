#include <iostream>
 
using namespace std;
 
 
int main()
{
  int n;
  cin >> n;
 
  int p, v, t;
 
  int a = 0;
 
 
  for (int i = 0; i < n; i++) {
    cin >> p >> v >> t;
    if (p + v + t >= 2) {
        a += 1;
      }
  }
  cout << a << "\n";
  return 0;
}
