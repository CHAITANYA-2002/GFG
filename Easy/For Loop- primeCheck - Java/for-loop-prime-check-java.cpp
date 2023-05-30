//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++





void isPrime(int n) {
    bool isPrime = true;
    
    for (int i = 2; i <= std::sqrt(n); i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }
    
    if (isPrime && n > 1) {
        std::cout <<  "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
}




//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        isPrime(n);
    }
    return 0;
}
// } Driver Code Ends