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

int cnt[3] = {};

int val;
for (int i=0; i<s.length(); i++) {
    if (s[i] != '+') {
        val = atoi(&s[i]);
        if (val == 1) {
            cnt[0]++;
        }
        else if (val == 2) {
            cnt[1]++;
        }
        else {
            cnt[2]++;
        }
    }
}

bool hasOutputtedNum = false;
for (int i=0; i<3; i++) {
    for (int j=0; j<cnt[i]; j++) {
        if (hasOutputtedNum) {
            cout << '+';
        }
        cout << i+1;
        hasOutputtedNum = true;
    }
}

return 0;
}