#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    string a,b;
    cin >> a >> b;
    if(a==b){
        cout << 0 <<endl;
        return;
    }
    int cnto1 = 0;
    int cnte1 = 0;
    int cnt2o1 = 0;
    int cnt2e1 =0;
    set<int> qo1;
    set<int> qo0;
    set<int> qe1;
    set<int> qe0;
    for(int i = 0 ; i < n ; i++){
        if(i&1){
            if(a[i]=='1'){
                cnto1++;
                qo1.insert(i);
            }
            else{
                qo0.insert(i);
            }
            if(b[i]=='1') cnt2o1++;
        }
        else{
            if(a[i]=='1'){
                cnte1++;
                qe1.insert(i);
            }
            else{
                qe0.insert(i);
            }
            if(b[i]=='1') cnt2e1++;
        }
    }
    if(cnte1!=cnt2e1 || cnto1!=cnt2o1){
        cout << -1 <<endl;
        return;
    }
    int cnt = 0;
    for(int i = 0 ; i < n ; i++){
        if(a[i]==b[i]){
            continue;
        }
        while(!qo1.empty() && *qo1.begin()<=i) qo1.pop();
        while(!qo0.empty() && *qo0.begin()<=i) qo0.pop();
        while(!qe0.empty() && *qe0.begin()<=i) qe0.pop();
        while(!qe1.empty() && *qe1.begin()<=i) qe1.pop();
        if(a[i]=='1'){
            if(i&1){
                int newind = qo0.front();
                cnt += (newind-i)/2;
            }
            else{
                int newind = qe0.front();
                cnt += (newind-i)/2;
            }
        }
        else{
            //a[i]=='0'
            if(i&1){
                int newind = qo1.front();
                cnt += (newind-i)/2;
            }
            else{
                int newind = qe1.front();
                cnt += (newind-i)/2;
            }
        }
    }

    cout << cnt <<endl;

}
int main(){
    int t;
    cin >> t;
    while(t){
        solve();
        t--;
    }
}