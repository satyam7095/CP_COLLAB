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
int mx=1e9;
int main()
{
    BOOST
    int q;
    cin>>q;
    map<pii,int> vis;
    map<pii,int>::iterator itr;
    for0(o,q)
    {
        int w,b;
        int x=3,y=3;
        cin>>b>>w;
        if(w>b){x++;swap(w,b);}
        if(b>3*w+1)cout<<"NO\n";
        else
        {
            cout<<"YES\n";
            b=b-w;
            while(w)
            {
                cout<<x sp y<<"\n";
                cout<<x sp y+1<<"\n";
                w--;
                if(b>1){cout<<x+1 sp y<<"\n";
                b--;}
                if(b>1){cout<<x-1 sp y<<"\n";
                b--;}
                y+=2;
            }
            if(b==1)cout<<x sp 2<<"\n";
        }
    }
}
