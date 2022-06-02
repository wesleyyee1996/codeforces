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

string s1, s2;
cin >> s1 >> s2;
for (int i=0; i<s1.length(); i++) {
    if (!islower(s1[i])) {
        s1[i] = tolower(s1[i]);
    }
    if (!islower(s2[i])) {
        s2[i] = tolower(s2[i]);
    }
}

if (s1 < s2) {
    cout << "-1";
}
else if (s2 < s1) {
    cout << "1";
}
else {
    cout << "0";
}

return 0;
}