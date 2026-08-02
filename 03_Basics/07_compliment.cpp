#include <iostream>
#include <math.h>
using namespace std;
int main()
{

    /*int n;
    cin >> n;
    int comp=0,bin=0,i=0;
    while(n!=0){
        if((n&1)==0){
            bin=bin+1*pow(10,i);
        }
        i++;
        n=n>>1;
    }
    i=0;
    while(bin!=0){
        int digit=bin%10;
        comp=comp+digit*pow(2,i);
        bin/=10;
        i++;

    }
    cout << comp;
    */
   int n;
   cout << "Enter a integer :";
   cin >> n;
    if (n == 0)
    {
        return 1;
    }
    int m = ~n;
    int mask = 0;
    while (n != 0)
    {
        mask = (mask << 1) | 1;
        n = n >> 1;
    }
    m = (m & mask);
    cout << m;
    /*if(n==0){
        cout << 0;
    }
    int x=1;
    while(x<=n){
        n=n^x;
        x=x<<1;
    }
    cout << n;*/
}