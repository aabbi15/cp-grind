
#include <bits/stdc++.h>
using namespace std;

/*
   This program reads T test cases.
   For each test case, we have two inputs:
     1) n
     2) d

   We form a large number by writing the digit d exactly n! times in a row,
   and we need to figure out which of the odd digits 1, 3, 5, 7, 9 divide
   that large number.

   Explanation of logic:

   1) Digit '1': 
      - Always divides any integer.

   2) Digit '3':
      - Sum of digits rule for 3: The sum of all digits in the large number is (d * n!).
      - If n >= 3, then 3 divides n!, so 3 divides (d * n!), hence 3 divides the large number.
      - If n < 3, we must check directly:
        * n = 1 => repeated number is d (one digit). That is divisible by 3 if d % 3 == 0.
        * n = 2 => repeated number is dd (two digits). 
            This is essentially 11*d in decimal if d is a single digit.
            11*d is divisible by 3 if (11*d) % 3 == 0 => which is the same as d % 3 == 0
            (since 11 ≡ 2 mod 3, it simplifies to (2*d) mod 3 == 0 => d % 3 == 0).
        So for n=1 or n=2, we check if (d * n!) is divisible by 3. 
        For n=1, n! = 1 => check if d % 3 == 0
        For n=2, n! = 2 => check if 2*d % 3 == 0.

   3) Digit '5':
      - Divisible by 5 if and only if the last digit of the number is 0 or 5.
      - Since the repeated digit is d, for it to be divisible by 5, d must be 5.

   4) Digit '7':
      - There's a known property: 
         For large repeated numbers of the form d repeated k times (especially for n >= 3),
         there's a pattern/triplet argument that guarantees divisibility by 7 under certain
         conditions. (From your explanation, you wanted to assert it's always divisible
         for n >= 3.)
      - For n < 3, the repeated number is small:
         * n=1 => repeated number is just d. Check if d == 7.
         * n=2 => repeated number is dd => if d==7, that's 77, which is divisible by 7.
      - Otherwise, if n >= 3, we include 7 directly.

   5) Digit '9':
      - Sum of digits rule for 9: The sum of digits is (d * n!).
      - 9 divides that sum if (d * n!) % 9 == 0.
      - For large n (e.g., n >= 6), n! definitely has 9 as a factor. 
        But let’s handle it systematically:
         * If d = 9, then obviously the repeated number is always divisible by 9.
         * If d = 3, we need to check if n! has a factor 3 * 3 = 9.
           - 3! = 6 (not a multiple of 9),
           - 4! = 24 (not a multiple of 9),
           - 5! = 120 (not a multiple of 9),
           - 6! = 720 (multiple of 9).
           So for d=3, if n >= 6, 3 * 720 (and so on) is divisible by 9. 
           If n < 6, we can do a direct check with (d * n!) mod 9 == 0.
         * If d is some other odd digit (1, 5, 7), we check if (d * n!) is a multiple of 9, 
           but usually that won't hold unless d=9 or d=3.

   Implementation approach:
   - We'll compute small factorials exactly for n up to 10 (which is safe for typical constraints).
   - We'll apply the checks for each of the 5 odd digits accordingly.
*/

static long long factorial(int x) {
    // We only need to handle small values of n safely, 
    // but let's go up to 10 to be sure.
    // For large constraints, we rely on the logic that 
    // n! will contain factors for large n anyway.
    long long f = 1;
    for(int i=1; i<=x; i++){
        f *= i;
        // If f gets too large, we can break, but let's keep it simple 
        // since we're only going up to 10 in typical small checks.
    }
    return f;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; // number of test cases
    cin >> T;

    while(T--){
        long long n, d;
        cin >> n >> d;

        // We'll store results in a vector or set (sorted automatically if we use set).
        // Then we'll output them in ascending order.
        set<int> divisors;

        // 1. '1' always divides
        divisors.insert(1);

        // Prepare to handle small n factorial up to 10 for direct checks.
        // If n > 10, we use the logic that the factorial has certain factors.
        long long nf = (n <= 10) ? factorial(n) : 0; 
        // We'll do direct checks only if n <= 10. 
        // If n > 10, we rely on the "n >= 3" or "n >= 6" logic, etc.

        // 2. Check '3'
        //    For large n >= 3, we always include 3 because n! has a factor of 3. 
        //    For small n < 3, check if (d * n!) is divisible by 3.
        if(n >= 3) {
            divisors.insert(3);
        } else {
            // n = 1 or n = 2
            if( (d * nf) % 3 == 0 ){
                divisors.insert(3);
            }
        }

        // 3. Check '5'
        //    The large number is divisible by 5 iff the repeated digit d is 5.
        if(d == 5) {
            divisors.insert(5);
        }

        // 4. Check '7'
        //    If n >= 3, insert 7 based on the stated logic from the explanation.
        //    If n < 3, check if the repeated number is divisible by 7 directly:
        //      - n=1 => d is the entire number
        //      - n=2 => the repeated number is dd => 10*d + d = 11*d
        if(n >= 3) {
            divisors.insert(7);
        } else {
            // For small n, directly check
            if(n == 1) {
                // repeated number is just d
                if(d % 7 == 0) divisors.insert(7);
            } else {
                // n = 2 => repeated number is dd => 11*d
                if((11 * d) % 7 == 0) divisors.insert(7);
            }
        }

        // 5. Check '9'
        //    If the digit is 9, the number is obviously divisible by 9.
        //    If d=3, we need to check if (3 * n!) is multiple of 9. 
        //    For n >= 6 => 6! has 9 as a factor => repeated number is divisible by 9.
        //    For smaller n < 6, do direct check with (d * n!) % 9 == 0.
        if(d == 9) {
            divisors.insert(9);
        } 
        else if(d == 3) {
            if(n >= 6) {
                divisors.insert(9);
            } else {
                // do direct check
                if((3 * nf) % 9 == 0) {
                    divisors.insert(9);
                }
            }
        }
        else {
            // In principle, if d isn't 3 or 9, it won't typically pass the divisibility for 9,
            // unless n! * d has some edge case, but let's do a direct check for small n:
            // For large n, it's not going to magically become multiple of 9 unless d is multiple of 3,
            // but d is an odd digit, so possible d=3 or d=9 only for that scenario. 
            // We'll just skip here.
            if(n <= 10 && ((d * nf) % 9 == 0)) {
                // Theoretically if d=6 or something, but that's not an odd digit. So no effect.
                // We'll still do a check to be complete (though it's typically 3 or 9).
                divisors.insert(9);
            }
        }

        // Output all divisors in ascending order
        for(auto v : divisors) {
            cout << v << " ";
        }
        cout << "\n";
    }

    return 0;
}
