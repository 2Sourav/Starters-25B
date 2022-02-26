#include <iostream>
#include <vector>
#include <set>
#include <numeric>
#include <cmath>

using namespace std;
#define pb push_back
#define mod 1000000007

#define ll          long long
#define endl        '\n'

#define vi          vector<int>
void solve(){
  int n;  cin>>n;
 
  int hash[100001] = {0};
  for(int i=0;i<2*n;i++){
     
    int temp;  cin>>temp;  hash[temp]++;
  }
  for(int i=0;i<100001;i++){
     
    
    if(hash[i]==1){
       
      cout<<"NO"<<endl;return;
    }else if(hash[i]==0){
       
      cout<<"YES"<<endl;return;
    }
  }cout<<"YES"<<endl;
 
}
int main() {
   
    
    int tc; cin >> tc;
    while(tc--) {
       
          solve();
    }
}