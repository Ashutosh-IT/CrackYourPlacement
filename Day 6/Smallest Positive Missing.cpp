/*

https://www.geeksforgeeks.org/problems/smallest-positive-missing-number-1587115621/1

*/

class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
        int i=0;
        while(i<n){
            if(arr[i] >= 1 && arr[i] <= n && arr[i] != arr[arr[i] - 1]){
                
                int index = arr[i]-1;
                swap(arr[i],arr[index]);
                
            }
            else i++;
        }
    
        
        
        for(int j=0; j<n; j++){
            if(arr[j] != j+1)
            return j+1;
        }
        
        return n+1;
        
    } 
};
