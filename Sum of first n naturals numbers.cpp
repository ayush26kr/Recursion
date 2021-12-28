//Sum of first n naturals numbers
#include <iostream>
using namespace std;
int find_sum(int n){
    if(n==0)
    return 0;
    return find_sum(n-1)+n;
}
int main()
{
    int n;
    n=10;
    cout<<find_sum(n);
}
