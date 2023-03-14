#include <iostream>

//Sum:
using namespace std;
//Sum:
int main()
{
    int num, sum=0;
    do
    {
        cin>> num;
        sum+= num;
    }while(num!=0 && sum <=100);
    cout << sum;
    return 0;
}
