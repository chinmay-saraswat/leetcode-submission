class Solution {
public:
    int fib(int n) {
        // Recursive Approach
        // if(n == 0) return 0;
        // if(n <= 2) return 1;
        // return fib(n - 1) + fib(n - 2);
        if (n == 0)
            return 0;
        int secondLast = 0;
        int last = 1;
        for (int i = 2; i <= n; i++) {
            int sum = last + secondLast;
            secondLast = last;
            last = sum;
        }
        return last;
    }
};