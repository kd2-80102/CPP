#include <iostream>
using namespace std;



int factorial(int n) {

    int res = 1, i;

    if( n < 0 ) {
      throw "NUMBER CANT BE NEAGTIVE";
   }
    for (i = 2; i <= n; i++)
        res = res * i;
    return res;
}



int main(){
    
    int num1 = -3;
    int result = 0;

    try {
        result = factorial(num1);
        cout<<result<<endl;
    }

    catch(const char* msg) {
        cout << msg << endl;
    }

    return 0;
    
    
    
}
