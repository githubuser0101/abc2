// // ! In this code, we are assuming that there is no negative integers in our array.
// // ! Otherwise, we would have assigned 'INT_MIN' to the 'secondLargest' variable.
// // ! BETTER APPROACH
// #include<iostream>
// using namespace std;
// int main() {
//     int arr[] = {1, 3, 6, 4, 7, 7, 5};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int largest = arr[0];
//     int secondLargest = -1;
//     for(int i = 1; i < size; ++i ) {
//         if(arr[i] > largest)
//             largest = arr[i];
//     }

//     for(int i = 0; i < size; ++i) {
//         if(arr[i] < largest && arr[i] != largest)
//             secondLargest = arr[i];
//     }

//     cout << secondLargest;
// }


// ! OPTIMAL APPROACH
#include<iostream>
using namespace std;
int main() {
    int arr[] = {1, 3, 5, 4, 7, 7, 6};
    int largest = arr[0];
    int secondLargest = -1;
    int length = sizeof(arr) / sizeof(arr[0]);
    for(int i = 1; i < length; ++i) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest)
            secondLargest = arr[i];
    }
    cout << secondLargest;
}