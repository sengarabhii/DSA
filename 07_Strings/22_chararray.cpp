#include<iostream>
using namespace std;
int getlength(char name[]){
    int count = 0;
    for(int i = 0 ; name[i]!='\0' ;i++){
        count++;
    }
    return count;
}
void reverse(char name[]){
    int i = 0;
    int j = getlength(name)-1;
    while(i<j){
        swap(name[i++],name[j--]);
        // char temp = name[i];
        // name[i] = name[j];
        // name[j] = temp;
        // i++;
        // j--;
    }
}
bool palindrome(char name[]){
    int i = 0;
    int j = getlength(name)-1;
    while(i<j){
        if(name[i]!=name[j]){
            return 0;
        }
        else{
            i++;
            j--;
        }
    }
    return 1;
}
int main(){
    char name[20];
    cout << "Enter your name : " ;
    cin >> name;
    // name[4]='\0';
    cout << "Your name is " <<name <<endl;
    
    cout << "Length of Name  : " << getlength(name) <<endl;
    reverse(name);
    cout << "Reverse of your name is " << name <<endl;
    reverse(name);
    cout << "Is it palindrome or not : " <<palindrome(name);

}