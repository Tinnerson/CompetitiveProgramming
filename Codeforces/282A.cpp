#include <iostream>
 
using namespace std;
 
 
int main()
{
    int n;
    string b;
    cin >> n;
 
    int a = 0;
 
 
    for (int i = 0; i < n; i++) {
        cin >> b;
        if (b == "X++" || b == "++X") {
            a += 1;
        }
        else if (b == "X--" || b == "--X") {
            a -= 1;
        }
    }
    cout << a << "\n";
    return 0;
}
