//New code for finding mode in an array
// C++ Program for Mode using
// Counting Sort technique
#include <bits/stdc++.h>
using namespace std;

// Function that sort input array a[] and
// calculate mode and median using counting
// sort.
void printMode(int a[], int n)
{
	// The output array b[] will have sorted array
	int b[n];

	// variable to store max of input array which will to have size of count array
	int max = *max_element(a, a + n);

	// auxiliary(count) array to store count. Initialize count array as 0. Size
	// of count array will be equal to (max + 1).
	int t = max + 1;

	int tally[t];
	for (int i = 0; i < t; i++)
		tally[i] = 0;

	// Store count of each element of input array
	for (int i = 0; i < n; i++)
		tally[a[i]]++;
/*
    for(int i=0; i<t; ++i){
        cout << tally[i] << " ";
    }

    cout << endl;
*/
	// mode is the index with maximum count
	int mode = 0;
	int k = tally[0];
	for (int i = 1; i < t; i++) {
		if (tally[i] > k) {
			k = tally[i];
			mode = i;
		}
	}
	cout << "mode = " << mode;
}

// Driver Code
int main()
{
	int a[] = { 4, 11, 2, 9, 1, 2, 5, 3, 6, 5, 4, 1, 1, 1, 22, 22, 20, 22, 22, 22 };
	int n = sizeof(a) / sizeof(a[0]);
	printMode(a, n);
	return 0;
}
