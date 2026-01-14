/*Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same.

Consider the number of unique elements in nums to be k​​​​​​​​​​​​​​. After removing duplicates, return the number of unique elements k.

The first k elements of nums should contain the unique numbers in sorted order. The remaining elements beyond index k - 1 can be ignored.*/

public class Solution26 {

    public static int removeDuplicates(int[] nums) {
        int length = nums.length;
        int k = 0;

        for(int i = 0; i < length - 1; i = i + 1) {
            if(nums[i] != nums[i + 1]) {
                nums[k] = nums[i];
                k = k + 1;
            }
        }

        nums[k] = nums[length - 1];
        

        return k + 1;
    }
    public static void main(String[] args) {
        int[] nums = {0,0,1,1,1,2,2,3,3,4};
        int k = removeDuplicates(nums);
        for(int i = 0; i < k; i = i + 1) {
            System.out.print(nums[i] + " ");
        }
    }
}
