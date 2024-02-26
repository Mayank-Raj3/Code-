#include<bits/stdc++.h>
using namespace std;

void expalinpair()

{
	pair<int , int > pi = {1, 3};

	cout << pi.first << " " << pi.second ;

	pair<int , pair<int, int >> pii = {1, {2, 3}};

	cout << pii.first << " " << pii.second.second;

	pair<int , int > arr[] = {{1, 2}, {2, 3}, {3, 4}};

	cout << arr[1].first << " ";
}

void explainvector() {

	vector<int> v;
	v.push_back(1);
	v.emplace_back(2); //emplace is faster than push back

	vector<pair<int, int >> vp;

	vp.push_back({1, 3});
	vp.emplace_back(1, 2); // in emplace we dont need to put curly braces it auto matically assumes it to be a pair

	vector<int> vppp(5); //if v(5,100) fills vetor 100 100 100 100 100

	// after this also we can increase the lengtrh of array;

	for (int i = 0; i < 10; i++) {
		v.push_back(i); //inserting elements in the vector
	}

	cout << "the elements in the vector: ";
	for (auto it = v.begin(); it != v.end(); it++) {
		cout << * it << " ";
	}

	cout << "\nThe front element of the vector: " << v.front();
	cout << "\nThe last element of the vector: " << v.back();
	cout << "\nThe size of the vector: " << v.size();
	cout << "\nDeleting element from the end: " << v[v.size() - 1];
	v.pop_back();

	cout << "\nPrinting the vector after removing the last element:" << endl;
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";

	cout << "\nInserting 5 at the beginning:" << endl;
	v.insert(v.begin(), 5);
	cout << "The first element is: " << v[0] << endl;
	cout << "Erasing the first element" << endl;
	v.erase(v.begin());
	cout << "Now the first element is: " << v[0] << endl;

	if (v.empty())
		cout << "\nvector is empty";
	else
		cout << "\nvector is not empty" << endl;

	v.clear();
	cout << "Size of the vector after clearing the vector: " << v.size();

}

void map () {



}



int main() {




}