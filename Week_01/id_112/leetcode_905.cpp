class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        
        vector<int> result(A.size());
        
        for (int i = 0 ,left = 0,right = A.size() - 1 ; i< A.size() ;i++) {
            if(A[i] % 2 != 0) {
                
                result[right--] = A[i];
            }else {
                
                result[left++] = A[i];
            }
        }
        
        return result;
    }
};
