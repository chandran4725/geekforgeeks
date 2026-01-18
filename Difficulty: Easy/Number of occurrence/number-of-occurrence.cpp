class Solution {
  public:
        int firstOccurence(vector<int>& arr, int x) {
        int n = arr.size();
        int low = 0, high = n - 1;
        int ans = -1;

            while (low <= high) {
            int mid = (low + high) / 2;

            if (arr[mid] == x) {
                ans = mid;
                high = mid - 1;
            } else if (arr[mid] > x)
                high = mid - 1;
            else
                low = mid + 1;
        }

        return ans;
    }

    int secondOccurence(vector<int>& arr, int x) {
        int n = arr.size();
        int low = 0, high = n - 1;
        int ans = -1;

            while (low <= high) {
            int mid = (low + high) / 2;

            if (arr[mid] == x) {
                ans = mid;
                low = mid + 1;
            } else if (arr[mid] > x)
                high = mid - 1;
            else
                low = mid + 1;
        }

        return ans;
    }
    
    int countFreq(vector<int>& arr, int target) {
        // code here
        int first = firstOccurence(arr,target);
        
        if(first == -1) return 0;
        
        int second = secondOccurence(arr,target);
        
        return second - first + 1;
    }
};
