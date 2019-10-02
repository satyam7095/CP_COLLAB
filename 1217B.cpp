#include<bits/stdc++.h>
#define for0(i,n) for(int i=0;i<n;i++)
#define rep(i,s,n) for(int i=s;i<n;i++)
#define sp <<" "<<					// giving space
#define MOD 1000000007				// for mod
#define ll_max 1000000000000000000
#define ll long long
#define ld long double
#define BOOST ios_base::sync_with_stdio ( false ); cin.tie ( nullptr ); cout.tie ( nullptr );
using namespace std;
// Vector
#define vi vector<int>					//integer vector
#define vll vector<ll>
#define pb push_back				//vector element insertion
#define pf push_front
#define er(v,i) v.erase(v.begin()+i)			// erase ith element in a vector
#define erng(v,x) v.erase(v.begin(),v.begin()+x)       	// delete a range in array

//Stack
/*  stack<int> s;						//declaring stack
s.push(1)						// enter  element in stack
s.top()							//returns top element in stack
s.pop()							//removes top element in  stack
*/
// pair
#define pii pair<int,int>					//pair integers
#define ff first
#define ss second
#define mp(a,b) make_pair(a,b)			// entering pair element in vector(size not defined)

//Hashmap
/* map<string,string> a;				//declaration
a[“abc”]=”xyz”;					// element entry in map;
gquiz1.insert(pair<int, int>(1, 40));
map<string,string>::iterator itr;			//iterating map
for (itr = a.begin(); itr!=a.end(); itr++){
    cout <<(*itr).first  << itr->second <<endl;
  }
  itr = companies.find("abc");		//finding element in map
  cout << itz->second;

//*/


int main()
{
    BOOST
    int t;
    cin>>t;
    for0(o,t)
    {
        int n,x;
        cin>>n>>x;
        vi a(n);
        int mx=0,z=0;
        for0(i,n)
        {
            int u,v;
            cin>>u>>v;
            mx=max(u,mx);
            z=max(u-v,z);
        }
        x=x-mx;
        int cnt=1;
        if(x>0&&z)
        {
            if(x%z)cnt=cnt+x/z+1;
            else cnt=cnt+x/z;
        }
        else if(x>0)cnt=-1;
        cout<<cnt<<"\n";
    }
}
