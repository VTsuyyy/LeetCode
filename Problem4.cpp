class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(), m=nums2.size(), k, l=(n+m+1)/2, i=max(0, l-m), j=min(n, l);
        while(i < j){
            k = (i+j)/2;
            nums1[k]<nums2[l-k-1] ? i=k+1 : j=k;
        }
        double res = (i && (!(l-i) || nums1[i-1]>nums2[l-i-1])) ? nums1[i-1] : nums2[l-i-1];
        if((m^n)&1) return res;
        return (res + (i<n && (l-i==m || nums1[i]<nums2[l-i]) ? nums1[i] : nums2[l-i])) / 2;
    }
};