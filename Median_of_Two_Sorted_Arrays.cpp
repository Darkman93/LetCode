class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        if(nums1.size() == 0){
            int avg = nums2.size() / 2;
            if(avg == 0){
                return nums2[0];
            }
            else{
                if(nums2.size() % 2 != 0) return (double) nums2[avg];
                else return (double) (nums2[avg-1] + nums2[avg]) / 2;
            }
        }
        
        else if(nums2.size() == 0){
            int avg = nums1.size() / 2;
            if(avg == 0){
                return nums1[0];
            }
            else{
                if(nums1.size() % 2 != 0) return (double) nums1[avg];
                else return (double) (nums1[avg-1] + nums1[avg]) / 2;
            } 
        }
        
        else{
            int avg = (nums1.size()+nums2.size()) / 2;
        
            vector<int> v(nums1);
	        v.insert(v.end(), nums2.begin(), nums2.end());
            
            sort(v.begin(), v.end());
            
            if(v.size() % 2 != 0) return (double) v[avg];
        
            else return (double) (v[avg-1] + v[avg]) / 2;
        }
        
    }
};