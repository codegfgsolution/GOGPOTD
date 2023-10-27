// Driver Code Starts

#include <bits/stdc++.h>
using namespace std;
//Driver Code Ends


class Solution
{
public:
int countSetBits(int x)
{
    unsigned int count = 0;
    while (x) {
        x &= (x - 1);
        count++;
    }
    return count;
}
int ceilLog2(int x)
{
    int count = 0;
    x--;
    while (x > 0) {
        x = x >> 1;
        count++;
    }
    return count;
}
    int is_bleak(int n)
    {
        // Code here.
        for (int x = n-ceilLog2(n); x < n; x++)
        if (x + countSetBits(x) == n)
            return 0;
 
    return 1;
    }
};


//Driver Code Starts
nt main() {

   
    int t;
    scanf("%d ", &t);
    while (t--) {
        string s, ch;
        getline(cin, s);
        
        Node* root = buildTree(s);
        Solution ob;
        cout << ob.isBalanced(root) << endl;
    }
    return 0;
}
//Driver code Ends