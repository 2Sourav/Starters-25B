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
   
  long long x,m;  cin>>x>>m;

  
  ll temp = 2;
  ll cnt  = 0;
 
  while(temp<=x){
    temp<<=1;
   
    cnt++;
  }
  temp/=2;
  long long one = cnt+1;
 
  
  if(one>m){
     
    cout<<0<<endl;return;
  }
  if(temp==x){
     
    cout<<1 + (m-one)<<endl;
  }else{
     
    cout<<(m-one)<<endl;
  }

}
int main() {
   
    int tc; cin >> tc;
    while(tc--) {
       
          solve();
    }
}