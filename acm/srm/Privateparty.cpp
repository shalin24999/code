#include <cstdio>
#include <iostream>
#include <cstring>
#include <sstream>
#include <algorithm>
#include <cmath>
#include <vector>
#define INC(x,y) {x = (x+y);if(x>=mod) x-=mod;}
#define Min(x,y) {if(y<x) x=y;}
#define Max(x,y) {if(y>x) x=y;}
#define clr(x,y) memset(x,y,sizeof(x))
using namespace std ;
typedef long long ll ;
const double eps = 1e-6 ;
const int inf = 1e8;

 
class Privateparty
{
public:
	double getexp(vector <int> a){


		return double() ;
	}


// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const double &Expected, const double &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arr0[] = {0,1}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); double Arg1 = 2.0; verify_case(0, Arg1, getexp(Arg0)); }
	void test_case_1() { int Arr0[] = {0,0}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); double Arg1 = 1.5; verify_case(1, Arg1, getexp(Arg0)); }
	void test_case_2() { int Arr0[] = {0,1,1}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); double Arg1 = 2.5; verify_case(2, Arg1, getexp(Arg0)); }
	void test_case_3() { int Arr0[] = {0,1,1,2}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); double Arg1 = 3.166666666666667; verify_case(3, Arg1, getexp(Arg0)); }
	void test_case_4() { int Arr0[] = {3,2,1,0}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); double Arg1 = 2.0; verify_case(4, Arg1, getexp(Arg0)); }

// END CUT HERE

};
// BEGIN CUT HERE
int main(){
	Privateparty ___test;
	___test.run_test(-1);
	return 0;
}
// END CUT HERE
