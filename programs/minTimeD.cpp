#include <bits/stdc++.h>
using namespace std;

int dp[101];

int minimum(int a, int b)
{
    return a > b ? b : a;
}


int my(int cur, int x, int y, int z)
{

    if (cur == 1) {

        return x;
    }
    // meoization, dont compute what's already computed
    if (dp[cur] != -1)
        return dp[cur];
    if (cur % 2 == 0) { //for even n

        dp[cur] = minimum(x + my(cur - 1, x, y, z), z + my(cur / 2, x, y, z));
    }
    else { //for odd n

        dp[cur] = minimum(x + my(cur - 1, x, y, z), z + y + my((cur + 1) / 2, x, y, z));
    }
    return dp[cur];
}

int main()
{
    int t, n, item;
    
    cout << "enter number of testcase\n";
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        cout << "Enter number of characters\n";
        cin >> n;
    
        int x, y, z;
    
        cout << "Insert time for insertion, deletion and copy respectively\n";
        cin >> x >> y >> z;
    
        for (int i = 0; i <= n; i++)
            dp[i] = -1;
    
        cout << "Minimum time is: " << my(n, x, y, z) << endl;
    }

    return 0;
}
