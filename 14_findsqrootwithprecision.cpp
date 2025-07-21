#include<iostream>
using namespace std;
long long int binarySearch(int n){
    int s=0,e=n;
    long long int m=s+(e-s)/2;
    long long int ans = -1;
    while(s<=e){
        long long int sqre = m*m;
        if(sqre==n){
            return m;
        }
        else if(sqre>n){
            e=m-1;
        }
        else{
            ans=m;
            s=m+1;
        }
        m=s+(e-s)/2;
    }
    return ans;
}
double sqrtwithprecision(int num, int p){
    double ans=binarySearch(num);
    double factor=1;
    for(int i=0;i<p;i++){
        factor=factor/10;
        for(double j=ans;j*j<num;j=j+factor){
            ans=j;
        }
    }
    return ans;
}
int main(){
    int n;
    cout << "Enter number:";
    cin >> n;
    cout << sqrtwithprecision(n,3);
}