#include <iostream>
using namespace std;

// To find any number in array
void search(int num, int arr[],int size)
{
   int target = 0, place; 
   

   for (int i = 0; i <= size; i++)
   {
      if( arr[i] == num)
      {
         target = 1;
         place = i+1;
         break;
      }
   }
   if (target == 1) {
   cout << place << endl;
   }
   else {
      cout <<  "not found" << endl;
   }
}

//To reverse an array
void reversearr(int arr[], int size) {
   int start = 0, end = size -1;

   while (start<end) {
      swap(arr[start],arr[end]);
      start++;
      end--;
   }
   for(int i = 0; i < size;i++) {
      cout << arr[i] << " ";
   }
}


int main()
{
   int nums[5] = {13, 45, 90, 38, 5};
   int size = sizeof(nums) / sizeof(nums[0]);
  
   //smallest and largest number from an array
   int smallest = INT_MAX;
   int largest = INT_MIN;

   for (int i = 0; i < size; i++)
   {
      smallest = min(nums[i], smallest);
      largest = max(nums[i], largest);
   }

   cout << "smallest= " << smallest << endl;
   cout << "largest = " << largest << endl;
   search(38,nums,size);
   reversearr(nums,size);
   return 0;
}