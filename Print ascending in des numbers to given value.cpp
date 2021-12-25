#include <iostream>

using namespace std;
int fun(int n){
    //reverse print the number 
    if(n>0){
    cout<<n<<" ";
    fun(n-1);
    }
    return 0;
}
int fun1(int n)
{
    if(n>0)
    {
        fun1(n-1);
        cout<<n<<" ";
    }
    return 0;
}
int main()
{
    int n=10;
    cout<<"Reverse numbers : "<<fun(n)<<endl;
    cout<<"Numbers : "<<fun1(n);
    return 0;
}
