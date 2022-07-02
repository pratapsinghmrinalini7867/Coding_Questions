//Here I used bit manipulation to count the number of 1's in the bit representation of the number
//since the bit representation of unsigned int is of size 32 so the loop runs for 32 times for each bit
//bitwise AND operation checks if the current bit is 1, if statement will execute the ans will be incremented
// 0 & 1 = 0 and 1 & 1 = 1
//n is right shifted by one after each iteration
//eg. 00000000000000000000000000001011 & 00000000000000000000000000000001 = 00000000000000000000000000000001 , ans = 1
      00000000000000000000000000000101 & 00000000000000000000000000000001 = 00000000000000000000000000000001 , ans = 2
      00000000000000000000000000000010 & 00000000000000000000000000000001 = 00000000000000000000000000000000 , ans = 2
      00000000000000000000000000000001 & 00000000000000000000000000000001 = 00000000000000000000000000000001 , ans = 3
//here the last bit dominates


class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ans = 0, bin = 0;
        
        for(int i=0; i<32; i++){
            if(1 & n){
                ans++;
            }
            n = n>>1;
        }
        return ans;
    }
};
