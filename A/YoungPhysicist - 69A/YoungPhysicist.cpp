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

int n;
scanf("%d", &n);
// cout << n << endl;

int x, y, z;
int xx, yy, zz;
xx = 0; yy = 0; zz = 0;
for (int i=0; i<n; i++) {
    scanf("%d%d%d", &x, &y, &z);
    // cout << x << ", " << y << ", " << z << endl;
    xx += x; yy += y; zz += z;
}

// cout << xx << ", " << yy << ", " << zz << endl;

if (xx == 0 && yy == 0 && zz == 0) {
    cout << "YES";
}
else {
    cout << "NO";
}

return 0;
}