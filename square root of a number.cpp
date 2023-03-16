#include <bits/stdc++.h> 

long long int binarySearch(int N)
{
    // Write your code here.
    
    int s=0;
    int e=N;
    long long int mid = s+(e-s)/2;
    long long int ans=-1;
    while(s<=e){
        long long a = mid*mid;

        if(a==N)
            return mid;
        
        if (a < N) 
        {
          ans = mid;
          s = mid + 1;
        }
       
        else 
            e=mid-1;
        
        mid = s+(e-s)/2;
    }
    return ans;
}

int sqrtN(int x){
    return binarySearch(x);
}
