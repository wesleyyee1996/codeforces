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

int n, k;
scanf("%d%d", &n, &k);

int nums[50];
for (int i=0; i<n; i++) {
    cin >> nums[i];
}

int p = 0;
for (int i=0; i<n; i++) {
    if (nums[i] >= nums[k-1] && nums[i] != 0) {
        p++;
    }
}

printf("%d", p);

return 0;
}