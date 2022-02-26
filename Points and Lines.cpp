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
  set<int> s1,s2;
 
  while(n--){
    int x,y;  cin>>x>>y;
   
    s1.insert(x);
    s2.insert(y);
   
  }cout<<s1.size()+s2.size()<<endl;
 
}
int main() {
   
    int tc; cin >> tc;
    while(tc--) {
        
          solve();
    }
}