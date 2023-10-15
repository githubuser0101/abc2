// // ! For non-descending arrays
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 4, 4, 8, 10};
//     int length = sizeof(arr) / sizeof(arr[0]);
//     bool sorted = true;
//     for (int i = 0; i < length - 1; ++i)
//     {
//         if (arr[i] > arr[i + 1])
//         {
//             sorted = false;
//             break;
//         }
//     }

//     if(sorted) {
//         cout << "The array is sorted.";
//     }
//     else 
//         cout << "The array is not sorted.";
// }






// Using Function Method
// #include<iostream>
// using namespace std;
// int sortedOrNot(int arr[], int length){
//     for (int i = 0; i < length-1; ++i)
//         if (arr[i] > arr[i+1])
//             return false;
//     return true;
// }
// int main() {
//     int arr[] = {1, 2, 3, 4, 4, 4, 8, 10};
//     int length = sizeof(arr) / sizeof(arr[0]);
//     cout << sortedOrNot(arr, length);
// }