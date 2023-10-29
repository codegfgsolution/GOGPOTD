// Driver Code Starts

#include <bits/stdc++.h>
using namespace std;
//Driver Code Ends



class Solution
{
    public:
    // Function to check if Kth bit is set or not.
    bool checkKthBit(int n, int k)
    {
        int a=n>>k;
        return a&1;
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