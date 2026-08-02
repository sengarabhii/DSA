#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter number:";
    cin >> n;
    // for(int i=1;i<=n;i++){
    //     cout << i <<endl;
    // }
    //  any of three expression are not compulsory
    int i=1;
    for(;;){
        if(i<=n){
            cout << i <<endl;
            i++;
        } 
        else{
            break;
        } 
        // without break inside else block the loop will becomes infinte  loop and HI will never be printed
    }
    cout << "HI";
}