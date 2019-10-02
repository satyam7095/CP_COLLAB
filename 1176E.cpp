#include<bits/stdc++.h>
#define for0(i,n) for(int i=0;i<n;i++)
#define sp <<" "<<					// giving space
#define MOD 1000000007				// for mod
#define ll long long
#define ld long double
using namespace std;
// Vector
#define vi vector<int>					//integer vector
#define pb push_back				//vector element insertion
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
vector<int> graph[200005];
int vis[200005];

void bfs(int i,int d)
{
    queue<int> q;
    q.push(i);
    vis[i]=d;
    while(!q.empty())
    {
        i=q.front();
        q.pop();
        for(auto j:graph[i])
        {
            if(!vis[j]){q.push(j);vis[j]=vis[i]+1;}
        }
        graph[i].clear();
    }
}

int main()
{
    int t;
    cin>>t;
    for0(o,t)
    {
    int n,m;
    cin>>n>>m;
    for0(i,m)
    {
        int u,v;
        cin>>u>>v;
        graph[u].pb(v);
        graph[v].pb(u);
    }
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])bfs(i,1);
    }
    //for(int i=1;i<=n;i++)cout<<vis[i]<<" ";
    //cout<<endl;
    int cnt1=0,cnt2=0;
    vi v1,v2;
    for(int i=1;i<=n;i++)
    {
        if(vis[i]%2){cnt1++;v1.pb(i);}
        else {cnt2++;v2.pb(i);}
        vis[i]=0;
    }
    if(cnt1<cnt2){cout<<cnt1<<endl;
    for(auto i:v1)cout<<i<<" ";
    }
    else
    {
        cout<<cnt2<<endl;
        for(auto i:v2)cout<<i<<" ";
    }
    cout<<endl;

}
}
