/*______________________________________________________________________
||--------------------------------------------------------------------||
||                                                                    ||
|| "I bear witness that there is no god but Allah and I bear witness  ||
||    that Muhammad (peace be upon him) is the Messenger of Allah"    ||
||                                                                    ||
|| *** In the name of Allah, the Most Gracious, the Most Merciful.*** ||
||                                                                    ||
========================================================================
========================================================================
||                                                                    ||
|| --> Author     :     Abu Bakar Siddique Arman (#arman_bhaai)       ||
|| --> Email      :     arman.bhaai@gmail.com                         ||
|| --> Portfolio  :     arman-bhaai.github.io                         ||
|| --> LinkedIn   :     linkedin.com/in/abubakar-arman                ||
|| --> GitHub     :     github.com/arman-bhaai                        ||
|| --> FaceBook   :     fb.me/arman.bhaai                             ||
|| --> YouTube    :     youtube.com/@arman-bhaai                      ||
|| --> StopStalk  :     stopstalk.com/user/profile/arman_bhaai        ||
|| --> Clist      :     clist.by/coder/arman_bhaai                    ||
|| --> CodeForces :     codeforces.com/profile/arman_bhaai            ||
|| --> CodeChef   :     codechef.com/users/arman_bhaai                ||
|| --> AtCoder    :     atcoder.jp/users/arman_bhaai                  ||
|| --> HackerRank :     hackerrank.com/arman_bhaai                    ||
|| --> LeetCode   :     leetcode.com/arman_bhaai                      ||
||____________________________________________________________________||
----------------------------------------------------------------------*/

// I believe in OpenSource. So, any of my code snippets are Copyright-Free.
// <3 Happy Coding <3

// Contest ID   :: 1779
// Problem Name :: A. Hall of Fame
// Problem URL  :: https://codeforces.com/contest/1779/problem/A
// Submission   :: https://codeforces.com/contest/1779/submission/187904463

/*******************************************************************************
////////////////////////////////////////////////////////////////////////////////
*******************************************************************************/


#include <bits/stdc++.h>
using namespace std;

// typedefs
typedef long long ll;
typedef string str;
typedef vector<int> vi;
typedef vector<ll> vii;
typedef vector<vector<ll>> vvi;
typedef map<ll,ll> mi;
typedef pair<ll,ll> pi;
// shortcuts
#define en '\n'
#define pb push_back
#define F first
#define S second
#define getv(_) for(auto &__:_) cin>>__;
#define all(_) (_).begin(),(_).end()
#define rall(_) (_).rbegin(),(_).rend()
#define forn(_,__) for(int _=0;_<(__);_++)
#define fornr(_,__) for(int _=(__)-1;_>=0;_--)
#define forab(_,__,___) for(int _=(__);_<(___);_++)
#define forba(_,___,__) for(int _=(___)-1;_>=(__);_--)
#define sz(_) (int)((_).size())
#define each(__, _) for (auto&__:_)
// constants
#define PI acos(-1.0)
#define MAXN 200005
#define MOD 1000000007
#define INF 1e18
// debugging
template<class ff,class ss>ostream&operator<<(ostream&os,const pair<ff,ss>&p){return os<<"("<<p.F<<", "<<p.S<<")";}
template<class T>ostream&operator<<(ostream&os,const vector<T>&v){os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<*it;}return os<<"]";}
template<class T>ostream&operator<<(ostream&os,const set<T>&v){os<<"{";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<*it;}return os<<"}";}
template<class T>ostream&operator<<(ostream&os,const multiset<T>&v) {os<<"{";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<*it;}return os<<"}";}
template<class ff,class ss>ostream&operator<<(ostream&os,const map<ff,ss>&v){os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<",\n";os<<"("<<it->F<<", "<<it->S<<")";}return os<<"]";}
#define couts(___) cout<<(___)<<" ";
#define coutn(___) cout<<(___)<<'\n';
#define dbg(args...) do {cerr << #args << " ==> "; boss(args); } while(0);
void boss(){cerr << endl;}
template<class T>void boss(T a[],int n){for(int i=0;i<n;++i)cerr<<a[i]<<' ';cerr<<endl;}
template<class T,class...k>void boss(T arg,const k&...j){cerr<<arg<<", ";boss(j...);}


// void solve();


void solve(){
	int n; cin>>n;
	str s; cin>>s;

	forn(i,n-1){
		if(s[i]=='R' && s[i+1]=='L'){
			cout<<0; return;
		}
		else if(s[i]=='L' && s[i+1]=='R'){
			cout<<i+1; return;
		}
	}
	cout<<-1;
}

int main(){
	// fastIO
	ios::sync_with_stdio(0); cin.tie(0);

	// handle TC
	int ___=1, __=___;
	cin>>__;
	for(int _=___; _<=__; _++){
		// cout<<"Case "<<_<<": ";
		solve(); cout<<en;
	}
	return 0;
}

/* Alternatives
*/