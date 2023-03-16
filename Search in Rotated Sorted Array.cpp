int findPosition(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int s=0;
    int e=n-1;
    int pivot;
    while(s<e){
        int mid = s+(e-s)/2;
        if(arr[mid]>=arr[0]) s=mid+1;
        else e=mid;
    }
    pivot = arr[s];
    if(pivot == k) return s;
    
    if(pivot<=k && k<=arr[n-1]){
        int j=s;
        int l = n-1;
        while(j<l){
            int mid1 = j+(l-j)/2;
            if(arr[mid1]==k) return mid1;
            else if(arr[mid1]>k) l=mid1-1;
            else j=mid1+1;
        }
    }
    else{
        int x=0;
        int y=s-1;
        while(x<y){
            int mid2 = x+(y-x)/2;
            if(arr[mid2]==k) return mid2;
            else if(arr[mid2]>k) y=mid2-1;
            else x=mid2+1;
        }
    }
    return -1;
}
