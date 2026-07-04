class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n=arr.size();
        int arr0=0,arr1=0,arr2=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                arr0++;
            }
            else if(arr[i]==1){
                arr1++;
            }
            else{
                arr2++;
            }
        }

        int index=0;
        for(int i=0;i<arr0;i++){
            arr[index++]=0;
            
        }
        for(int i=0;i<arr1;i++){
            arr[index++]=1;
            
        }
        for(int i=0;i<arr2;i++){
            arr[index++]=2;
        }
        
    }
};