#include <iostream>
   
  using namespace std;
   
  int main()
  {
      string b;
      cin>>b;
      
      string c = "";
      
      for(int i=0; i<b.size(); i++){
          if(b[i] == '.'){
              c += '0';
          }
          else if(b[i] =='-' && b[i+1] == '.'){
              c +='1';
              i++;
          }
          else if(b[i] == '-' && b[i+1] == '-'){
              c+="2";
              i++;
          }
      }
      cout<<c<<"\n";
      return 0;
  }
