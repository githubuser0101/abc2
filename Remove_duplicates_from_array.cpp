// // ! Brute-force Approach
// // ! Using set from STL

// ! Incomplete

// #include <iostream>
// #include <set>
// using namespace std;
// int main()
// {
//     set<int> st;
//     int arr[] = {1, 1, 2, 2, 3, 3};
//     int length = sizeof(arr) / sizeof(arr[0]);
//     st.insert(arr[0]);
//     // Used 'Set' here to store the unique elements in ascending order
//     for (int i = 1; i < length; ++i)
//     {
//         if (arr[i] != arr[i - 1])
//             st.insert(arr[i]);
//     }
//     int index = 0;
//     for (int i: st) {
//         arr[index] = i;
//         index++;
//     }
//     int n = index + 1;

//     for(int i = 0; i < n; i++)
//         cout << arr[i] << " ";
// }





// // ! Another Brute force approach 
// // ! using arrays
// // * Approach: finding unique elements in a sorted array and storing it in another array.
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = { 1, 2, 2, 3, 4, 4, 4, 5, 5 };
//     int length = sizeof(arr) / sizeof(arr[0]);
//     int uArr[length]; // Array for unique elements // ? Why did it not work here when I didn't put amy size for the array.
//     int j = 0;        // Variable for iterating the array of unique elements 'uArr'

//     // storing unique elements in array 'uArr'
//     for (int i = 0; i < length; ++i)
//     {
//         if (arr[i] != arr[i + 1])
//         {
//             uArr[j++] = arr[i];
//         }
//     }
//     // Storing the last unique element irrespective of whether it is unique or not. 
//     // ! Recall why is this statement here yourself
//     uArr[j] = arr[length - 1];         

//     for (int i = 0; i < j; ++i) {
//         arr[i] = uArr[i];
//     }

//     for (const int &i : arr)
//         cout << i << " ";
// }




// ! Make the above code more efficient using in-place method.
// ! Use the two pointer approach
// ! in-place means modifying values insdie the same input data structure.
// // ! More efficient approach than the above code
// // * Approach: Instead of using another array to store the unique values, take a variable j = 0,
// // * and use it to change the values in the array whenever a unique value is found.

// #include<iostream>
// using namespace std;
// int main() {

// }





// ! OPTIMISED APPROACH
#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1, 1, 2, 2, 3, 3};
    int j = 0;
    int length = sizeof(arr) / sizeof(arr[0]);
    for (int i = 1; i < length; ++i) {
        if(arr[i] =! arr[j]) {
            arr[++j] = arr[i];
        }
    }
    for (const int &i: arr) 
        cout << i << " ";
    return 0;
}


