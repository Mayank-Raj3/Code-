#include<bits/stdc++.h>
using namespace std;
//ik banda tha bear vo rashberry ikata karna chta tha winter k liye
//uske dost ne use hone ka barrel lend  ik din k liya aur uske badle ckg rasberry + vapis honey ka barrel liya
//fir bear ne usi din jis din lend kiya tha uska dost (bech diya aur xi kg rashberry k badle aur
//next day mtlb d+1 day mea usne xi gm ka badle(exchage ) kharid liya
//tho maximum hoga = arr[jisdin liye utna rashberry]- arr[uske agle din kitne kg of rashbeerry mea kharida] - dost ko diya honey barrel k badle
int main() {
	int n, c, t = 0, arr[100] ;
	cin >> n >> c;

	for (int i = 0 ; i < n ; i++) {
		cin >> arr[i];
	}
	for (int i = 0 ; i < n ; i++) {
		t = max(t, arr[i] - arr[i + 1] - c);
	}
	cout << t;


}