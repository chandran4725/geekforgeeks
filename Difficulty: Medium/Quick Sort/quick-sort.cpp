class Solution {
  public:
    void quickSort(vector<int>& arr, int low, int high) {
        // code here
        if(low < high)
        {
            int part = partition(arr,low,high);
            quickSort(arr,low,part-1);
            quickSort(arr,part+1,high);
        }
    }

  public:
    int partition(vector<int>& arr, int low, int high) {
        
        // code here
        int pivot = arr[low];
    int i = low;
    int j = high;

    while(i < j)
    {
        while(pivot >= arr[i] && i < high) i++;
        while(pivot < arr[j] && j > low) j--;
        if(i < j) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
    }
};