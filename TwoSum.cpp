// Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order, find two numbers such that they add up to a specific target number. Let these two numbers be numbers[index1] and numbers[index2] where 1 <= index1 < index2 <= numbers.length.

// Return the indices of the two numbers, index1 and index2, added by one as an integer array [index1, index2] of length 2.

// The tests are generated such that there is exactly one solution. You may not use the same element twice.

// Input: numbers = [2,7,11,15], target = 9
// Output: [1,2]
// Explanation: The sum of 2 and 7 is 9. Therefore, index1 = 1, index2 = 2. We return [1, 2].

#include<bits/stdc++.h>
using namespace std;
void twosum(vector<int>&nums,int target){
    int n=nums.size();
    int i=0;
    int j=n-1;
    while(i<j){
        if(nums[i]+nums[j]>target){
            j--;
            

        }
        else if(nums[i]+nums[j]<target){
            i++;
        }
        else {
            cout<<"the positions are : "<<i+1<<" "<<j+1;
            break;
           
        }
    }
   
}

int main(){
    vector<int>nums={2,7,11,15};
    int target=9;
    twosum(nums,target);

    
    return 0;
}