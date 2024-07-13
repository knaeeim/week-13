#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T> using order_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl "\n"
#define int long long
#define pub push_back
#define pob pop_back
#define puf push_front
#define pof pop_front
#define vi vector<int>
#define vll vector<ll>
#define vp vector<pair<ll,ll>>
#define sorta(arr) sort(arr.begin(), arr.end());
#define sortd(arr) sort(arr.begin(), arr.end(), greater<int>());
#define All(X) (X).begin(),(X).end()
#define Unique(X) (X).erase(unique((X).begin(),(X).end()),(X).end())
#define range(arr) for(auto el: arr) cout<<el<<" ";

const int MaxN = 100;
string s[MaxN]; 

int32_t main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    

    set <string> dict; 

    int n, m; 
    cin>>n>>m;

    for(int i = 0; i < n; i++){
        cin>>s[i];
        dict.insert(s[i]);
    } 

    vector <string> left, right; 
    string mid; 

    for(int i = 0; i < n; i++){
        string t = s[i]; 
        reverse(t.begin(), t.end()); 

        if( t == s[i]){
            mid = s[i];
        }
        else if(dict.find(t) != dict.end()){
            left.push_back(s[i]);
            right.push_back(t);
            dict.erase(s[i]);
            dict.erase(t);
        }
    }

    cout << left.size() * m * 2 + mid.size() << endl;

    for(string x: left){
        cout << x;
    }
    cout<<mid;
    reverse(right.begin(), right.end());
    for(string x:right){
        cout<<x;
    }
    cout << endl; 

    return 0; 
}