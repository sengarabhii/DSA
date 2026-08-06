#include <bits/stdc++.h>
using namespace std;
int main() {
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      vector<int>a(n);
      for(int i=0;i<n;i++){
          cin>>a[i];
      }
      bool k = true;
       if(a[n-2]>a[n-1]){
           cout<<-1<<endl;
           continue;
       }
       vector<pair<int,pair<int,int>>>ans;
      for(int i=n-3;i>=0;i--){
          if(a[i]<=a[i+1]){
              continue;
            }
          else if(a[n-1]>=0){
              a[i] = (a[i+1]-a[n-1]);
              ans.push_back({i,{i+1,n-1}});
          }
          else{
              k = false;