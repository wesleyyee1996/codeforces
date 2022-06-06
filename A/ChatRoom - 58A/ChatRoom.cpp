#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <iomanip>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

string s; 
cin >> s;

string hello = "hello";
int cnt = 0;
for (int i= 0; i<s.length(); i++) {
    if (hello[cnt] == s[i]) {
        cnt++;
    }
}

if (cnt == 5) {
    cout << "YES";
}
else {
    cout << "NO";
}

return 0;
}