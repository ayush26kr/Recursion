//Fibonacchi series with n digits
#include <iostream>
using namespace std;
int fibo_n(int n){
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    return fibo_n(n-1)+fibo_n(n-2);
}
int main() {
   int n=10;
   for(int i=0;i<n;i++){
       cout<<fibo_n(i)<<" ";
   }
}
