// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter any no in decimal no system:";
//     cin >> n;
//     int digit,newnum=0,i=0;
//     int temp=n;
//     while(n!=0){
//         digit=n%2;
//         n/=2;
//         newnum=newnum+digit*pow(10,i);
//         i++;
//     }
//     n=temp;
//     i=0;
//     if(n>=0){
//         cout << "No. in binary :" << newnum;
//     }
//     else{
//         int comp=0;
//         while(newnum!=0){
//             if((-newnum)&0){
//                 comp+=1*pow(10,i);
//             }
//             newnum=newnum>>1;
//             i++;
//         }
//         comp=comp+1;
//         cout << "In binary :" << comp;
//     }
// }
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout << "Enter no.:";
    cin >> n;
    int b = 0,i=0;
    if(n>=0){
        while(n!=0){
            int digit;
            digit = n%2;
            b =b + digit*pow(10,i);
            i++;
            n/=2;
            
        }
        cout << "No in binary:" << b;
    }
    else{
        n = -n;
        while(n!=0){
            
            if((n&1)==0){
                b = b + 1*pow(10,i);
                
            }
            i++;
            n = n>>1;
        }
        cout << "No in binary:" << b;

    }

}