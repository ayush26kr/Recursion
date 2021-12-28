//power of m raised to power n
#include <iostream>
using namespace std;
int cal_pow(int m,int n){
    if(n==0)
    return 1;
    return cal_pow(m,n-1)*m;
}
int main()
{
    int m,n;
    cin>>m>>n;
    cout<<m<<" raised to power "<<n<<" is : "<<cal_pow(m,n);
}
