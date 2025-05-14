#include <iostream>
 
using namespace std;
 
int main()
{
    int row, column, n=0;
    
    for(row=1; row<=5; row++){
        for(column=1; column<=5; column++){
            cin>>n;
            if(n==1){
                cout<<abs(row-3)+abs(column-3)<<"\n";
            }
        }
    }
 
    return 0;
}
