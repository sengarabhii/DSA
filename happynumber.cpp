#include<iostream>
using namespace std;
int digsquare(int num){
    int sum = 0 ;
    while(num!=0){
        int digit = num % 10;
        sum+=digit*digit;
        num=num/10;        
    }
    return sum;
}
int main(){
    int num ;
    cout << "Enter number : " ;
    cin >> num ;
    int temp = num;
    while(1){
        int square = digsquare(temp);
        if(square>1 && square<10){
            cout << num << " is not happy no." ;
            break;
        }
        else if(square == 1){
            cout << num << " is happy no.";
            break;
        }
        else{
            temp = square;
        }
    }

}