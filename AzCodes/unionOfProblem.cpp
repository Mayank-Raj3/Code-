// C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;

// Function to check if two
// rectangles are intersecting or not
bool doIntersect(vector<int> X,
                 vector<int> Y)
{
	// If one rectangle is to the
	// right of other's right edge
	if (X[0] > X[3] || X[2] > X[1])
		return false;

	// If one rectangle is on the
	// top of other's top edge
	if (Y[0] > Y[3] || Y[2] > Y[1])
		return false;

	return true;
}

// Function to return the perimeter of
// the Union of Two Rectangles
int getUnionPerimeter(vector<int> X,
                      vector<int> Y)
{
	// Stores the resultant perimeter
	int perimeter = 0;

	// If rectangles do not interesect
	if (!doIntersect(X, Y)) {

		// Perimeter of Rectangle 1
		perimeter
		+= 2 * (abs(X[1] - X[0])
		        + abs(Y[1] - Y[0]));

		// Perimeter of Rectangle 2
		perimeter
		+= 2 * (abs(X[3] - X[2])
		        + abs(Y[3] - Y[2]));
	}

	// If the rectangles intersect
	else {

		// Get width of combined figure
		int w = *max_element(X.begin(),
		                     X.end())
		        - *min_element(X.begin(),
		                       X.end());

		// Get length of combined figure
		int l = *max_element(Y.begin(),
		                     Y.end())
		        - *min_element(Y.begin(),
		                       Y.end());

		perimeter = 2 * (l + w);
	}

	// Return the perimeter
	return perimeter;
}

// Driver Code
int main()
{
	vector<int> X{ 0, 0, 2, 2 };
	vector<int> Y{ 1, 1, 3, 4 };

	cout << getUnionPerimeter(X, Y);
}
