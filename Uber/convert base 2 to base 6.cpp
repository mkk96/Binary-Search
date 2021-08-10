#include <bits/stdc++.h>
using namespace std;
#define lli long long
#define endl "\n"
#define MOD 1000000007
#define mod 998244353
#define ar array
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void test_case() {
    lli n=base2.size();
    vector<lli> a(n);
    bool zero = true;
    for (lli i = 0; i < n; i++) {
        if(base[i]=='1')
        	a[i]=1;
        else
        	a[i]=0;
        if (a[i] == 1) zero = false;
    }
    vector<lli> res(105);
    if (zero) 
	{
		res[0]=0;
        return res;
    }
    reverse(a.begin(), a.end());
    for (lli i = 0; i < n; i++) {
        if (a[i] == 0) {
            lli carry = 0;
            for (lli j = 0; j < 104; j++) {
                lli num_here = 2*res[j] + carry;
                carry = num_here/6;
                res[j] = num_here%6;
            }
            assert(carry == 0);
        }
        else {
            lli carry = 0;
            for (lli j = 0; j < 104; j++) {
                lli num_here = 2*res[j] + carry;
                carry = num_here/6;
                res[j] = num_here%6;
            }
            carry = 1;
            for (lli j = 0; j < 104; j++) {
                lli num_here = res[j] + carry;
                carry = num_here/6;
                res[j] = num_here%6;
            }
            assert(carry == 0);
        }
    }
    assert(res.back() == 0);
    while (res.back() == 0) res.pop_back();
    return res;
}

int main() {
    int t; cin >> t;
    while (t--) {
        test_case();
    }

  return 0;
}
