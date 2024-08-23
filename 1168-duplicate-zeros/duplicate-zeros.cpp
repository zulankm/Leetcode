class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();

        int count = 0;
        for( int num : arr) if(num == 0) count++;
        int i = n-1;
        int j = n + count - 1;

        while( i >= 0 && j >=0){

            if(arr[i] != 0)
            {
                if(j < n)
                arr[j] = arr[i];
            }
            else{
                if(j < n)
                    arr[j] = arr[i];
                j--;
                if(j < n) 
                    arr[j] = arr[i];
            }
            i--;
            j--;
        }

        
           
    }
};