
// Driver Code Starts

#include <bits/stdc++.h>
using namespace std;
//Driver Code Ends



class Solution{
    public:
    long long int sumXOR(int arr[], int n)
    {
        long long int ans =0;
        for(int i =0;i<32;i++){
            int countone = 0;
            for(int j =0;j< n;j++){
                if(arr[j]&(1<<i)){
                    countone++;
                }
            }
           ans+=pow(2,i)*(countone)*(n - countone);
        }
        return ans;
    }
};
   



//Driver Code Starts
int main() {
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
