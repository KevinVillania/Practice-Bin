// CPP program to find the most frequent element
// in an array.
#include <bits/stdc++.h>
using namespace std;

int mostFrequent(int arr[], int n)
{
	// Sort the array
	sort(arr, arr + n);

    cout << "Sorted array: ";

    for(int i=0; i<n; ++i){

        cout << arr[i] << " ";
	}

	// find the max frequency using linear traversal
	int max_count = 1, res = arr[5], curr_count = 1;

	//{2 2 2 9 11 11}

	for (int i = 1; i < n; i++) {
		if (arr[i] == arr[i - 1]){
			curr_count++;
		}else{
            if (curr_count > max_count) {
                max_count = curr_count;
                res = arr[i - 1];
            }else{
                curr_count = 1;
            }
		}
	}


    cout << curr_count << " " << max_count;
	// If last element is most frequent
	if (curr_count > max_count)
	{
		max_count = curr_count;
		res = arr[n - 1];
	}
    cout << " mode is " ;
	return res;
}

// driver program
int main()
{
	int arr[] = { 11, 2, 9, 11, 2, 2};

	int n = sizeof(arr) / sizeof(arr[0]);
	cout << mostFrequent(arr, n);
	return 0;
}
