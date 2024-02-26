
#include<bits/stdc++.h>
using namespace std;
#define int 						  long long
#define ld 							  long double
#define nline						  "\n"
#define ff 							  first
#define ss                            second
#define pb                            push_back
#define int                           long long
#define fl(i,k,n)                     for (int i = k; i < n; i++)
#define rfl(i,n, k)                   for (int i = n; i >= k; i--)
#define fel(a,x)                      for (auto& a : x)
#define mp                            make_pair
#define ppb 						  pop_back
#define ps(x, y)                      fixed << setprecision(y) << x
#define setbit(x)                     __builtin_popcount(x);
#define all(var)                      var.begin(), var.end()
#define desc                          greater<int>()
#define spc                           <<" "<<
#define YES                           cout << "YES\n";
#define NO                            cout << "NO\n";
#define Yes                           cout << "Yes\n";
#define No                            cout << "No\n";
#define minus1                        cout << "-1\n";
#define one                           cout << "1\n";
#define gcd(a, b)                     __gcd(a, b)
#define PI                            3.141592653589793238462
#define sz(x) (                       (int)(x).size())
#define jay_shri_ram                  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// Builtin data types
typedef pair<int, int> 	              pii     ;
typedef vector<int>                   vi      ;
typedef vector<string>                vs      ;
typedef vector<pii> 				  vpi     ;
typedef vector <pair<int , int> >     vpi     ;
typedef vector<bool>                  vb      ;
typedef vector<vector<int>>           vvi     ;
typedef map<int, int> 				  mpii    ;
typedef set<int>   					  seti    ;
typedef multiset<int> 				  mseti	  ;
typedef unordered_set<int>            useti   ;
typedef unordered_map<int, int>       umapii  ;
typedef unsigned long long            ull     ;
//constants
const int MAX_N = 1e5 + 5;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const int EPS = 1e-9;

//debugger
#ifndef ONLINE_JUDGE
#define db(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define db(x)
#endif
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(ld t) {cerr << t;}
void _print(double t) {cerr << t;}
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V>
void _print(pair <T, V> p) {
	cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";
}
template <class T>
void _print(vector <T> v) {
	cerr << "[ ";
	for (T i : v) {
		_print(i);
		cerr << " ";
	}
	cerr << "]";
}
template <class T>
void _print(set <T> v) {
	cerr << "[ ";
	for (T i : v) {
		_print(i);
		cerr << " ";
	}
	cerr << "]";
}
template <class T>
void _print(multiset <T> v) {
	cerr << "[ ";
	for (T i : v) {
		_print(i);
		cerr << " ";
	}
	cerr << "]";
}
template <class T, class V>
void _print(map <T, V> v) {
	cerr << "[ ";
	for (auto i : v) {
		_print(i);
		cerr << " ";
	}
	cerr << "]";
}
//-------------------------------Think&Code----------------------------------*/


void solve() {
	int n  ; cin >> n;


	// negation lega 3 : 00011 -> 111111..00 -> again negation -> then add one
	cout << (~n) << nline;

	// left shift
	// cout<< (a<<b) ---> a*2^b

	// 5<<1 *2 == 10
	cout << ( 5 << 1) << nline;


	// right shift
	// 5 00101 -> 00010 -> 5/2
	cout << ( 5 >> 1) << nline;


	//clz - count leading zeros [0000000]10101
	//eg 5 -- ___29__0s____101 : that's why we get 29

	cout << __builtin_clz(n) << nline;
	//ctz - count traling zeros 000010101000;
	// ___101 so ctz is 0

	cout << __builtin_ctz(n) << nline;
	// pop_count counts the number of set bits
	// popcountll :- for long long 2^32 se bade

	cout << __builtin_popcountll(n) << nline;
// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://
	auto number = 0b101;
	// 0b will add leading zereos
	cout << "Auto number " << number;

// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://
	// to find out weather ith bit is on or off

	/*	if ((n >> i) & 1) {

		[Method 1]
		// 01101011 find 2nd is off or not
		//-> shif by 2 --> 00011010 & 00000001 = > 0 so not set

		}
		[Method 2] - this we should not do if n is in ll so it may give errpr
		 if (n & (1 << i)) {

			//ya tho 1 ko uss position pe le (000001) left shift
			// 000100 :- and take and
		}
	*/
	int k  = 1, nx = 5  ;
	if ((nx >> k) & 1) {
		cout << "set bit " << nline;
	} else {
		cout << "Not set" << nline;
	}
// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://
	//  How to obtain n-1 from n in binary
	// 56 = 111000 -
	// s1 :- flip the rightmost setbit to zero
	// s2 :- make all the bit to 1
	// and u obtaind the n - 1
	//  55 = 110111

	// thats  why when we take & with n -1 all the bit
	// becomes 0 and we can implement builtin popcoutn
	/*


	To remove last one from the binary we do a&a-1

	  a=  110100
	 a-1 =110011

	a&(a-1) = 1100000

	MSB --> 110000 <- last bit LSB
	*/

// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://
	/* Implement popcount */

	int nxx = 56, temp = nxx;
	int cnt = 0 ;
	while (nxx != 0) {
		nxx &= (nxx - 1);
		cnt++;
	}
	cout << "Using n&n-1 : " << cnt << nline;
	cout << "Using POp count: " << __builtin_popcount(temp) << nline;

// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://
	//Given a number N <=1e18 find the xor from 1,2,3,...1e18
	/*

	 	8 8  --> n
		7 0  --> 0
		6 7  --> n+1
		5 1  --> 1

		4 4  --> n
		3 0  --> 0
		2 3  --> n+1
		1 1  --> 1

	here we can observe a pattern that the number starts repeating
	%4 if - 0 - n ,
			1 - 1 ,
		 	2 - n+1,
		  	3 - 0


	*/

	/*
		Find xor from range to L to R

		r = 4 , l = 3 ;

		x->  1^2^3^4

		y->  1^2

		3^4 = x^y => [1^2^3^4]^[1^2] = > 3^4

		Since we know that x^x is = 0
		And 			   x^0 is = X

		Xor of l^r = xor(r)^xor(l-1)

	*/

// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://
// Bugs that people make not useing bracket
	/*
	1 << 10 - 1;

	*/
	cout <<  ((1 << 3 ) - 1)  << nline;

	bitset<1000> bs ;
	/*
	In C++, std::bitset is a class template defined in the <bitset> header that represents a fixed-size sequence of bits. It provides a convenient way to manipulate individual bits and perform bitwise operations. Here are some of the commonly used methods and operations provided by the std::bitset class:

	Constructor:

	std::bitset<N> bset; - Constructs a bitset with N bits, all initialized to 0.
	std::bitset<N> bset(ull); - Constructs a bitset initialized with the value of an unsigned long long integer (ull).
	std::bitset<N> bset(str); - Constructs a bitset initialized with the bits from a string (str) representation.
	Assignment:

	bset = ull; - Assigns the value of an unsigned long long integer (ull) to the bitset.
	bset = str; - Assigns the bits from a string (str) representation to the bitset.
	Element Access:

	bool bit_value = bset[pos]; - Returns the value of the bit at the specified position (pos).
	Bit Operations:

	bset.set(); - Sets all the bits to 1.
	bset.set(pos); - Sets the bit at the specified position (pos) to 1.
	bset.reset(); - Resets all the bits to 0.
	bset.reset(pos); - Resets the bit at the specified position (pos) to 0.
	bset.flip(); - Flips all the bits (0 becomes 1, and 1 becomes 0).
	bset.flip(pos); - Flips the bit at the specified position (pos).
	Size and Capacity:

	size_t size = bset.size(); - Returns the number of bits in the bitset.
	bool any_bits_set = bset.any(); - Checks if any bit is set (1).
	bool no_bits_set = bset.none(); - Checks if no bit is set (0).
	size_t count = bset.count(); - Returns the number of bits that are set (1).
	Bitwise Operations:

	bset1 & bset2; - Performs a bitwise AND operation between two bitsets.
	bset1 | bset2; - Performs a bitwise OR operation between two bitsets.
	bset1 ^ bset2; - Performs a bitwise XOR operation between two bitsets.
	~bset; - Performs a bitwise NOT operation on a bitset.
	Conversion:

	ull = bset.to_ullong(); - Converts the bitset to an unsigned long long integer.
	str = bset.to_string(); - Converts the bitset to a string representation.
	These are just some of the commonly used methods and operations provided by std::bitset in C++. The class offers additional functionality and operators that you can explore further in the C++ documentation.
	*/


// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://
	int nnn  = 3;
	for (int mask = 0 ; mask < (1 << nnn); mask++) { // run will 0 to 2^n -1 times
		bitset<3> x(mask);
		cout << x << nline;
		for (int sub = mask ; sub ; sub = ( (sub - 1)&mask)) {
			// all the zero will remain in 0th place but 1 can chang
			cout << sub << nline;
		}
	}

// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://
	/*	{
	//Function to find position of first set bit in the given number.
			unsigned int getFirstSetBit(int n)
			{
				int cnt = 0;
				while (n > 0) {
					cnt++;
					if (n & 1) {
						return cnt ;
					}
					n = n >> 1;
				}

				return cnt ;
			}
		};
	*/
// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://
	// vector<int> singleNumber(vector<int> nums)
	// {
	// 	vector<int> ans;
	// 	int n = nums.size();
	// 	int a = 0 , b = 0 , xo = 0;
	// 	for (int i = 0 ; i < n; i++) {
	// 		xo = nums[i] ^ xo;
	// 	}

	// 	int rightmost = xo & ~(xo - 1);
	// 	for (int i = 0 ; i < n; i++ ) {
	// 		if (nums[i]&rightmost) {
	// 			a ^= nums[i];
	// 		} else {
	// 			b ^= nums[i];
	// 		}
	// 	}
	// 	if (a > b)
	// 		swap(a, b);
	// 	ans.push_back(a);
	// 	ans.push_back(b);
	// 	return ans ;
	// }

// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://
	// int rightmost = xo & ~(xo - 1);
// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://
	// to find element having single occuracne



	/*
	Let us consider the example array {5, 5, 5, 8}. The 101, 101, 101, 1000
	Sum of first bits%3 = (1 + 1 + 1 + 0)%3 = 0;
	Sum of second bits%3 = (0 + 0 + 0 + 0)%3 = 0;
	Sum of third bits%3 = (1 + 1 + 1 + 0)%3 = 0;
	Sum of fourth bits%3 = (1)%3 = 1;
	Hence number which appears once is 1000

	Note: this approach won’t work for negative numbers
	*/
	/*
		int singleNumber(const vector<int> &arr) {
			int result = 0;
			int n = arr.size();
			int x, sum;
			// Iterate through every bit
			for (int i = 0; i < 32; i++) {

				// Find sum of set bits at ith position in all
				// array elements
				sum = 0;
				x = (1 << i);
				for (int j = 0; j < n; j++) {
					if (arr[j] & x)
						sum++;
				}

				// The bits with sum not multiple of 3, are the
				// bits of element with single occurrence.
				if ((sum % 3) != 0)
					result |= x;
			}

			return result;
		}

	*/
}
// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://

// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://
//Bitwise compimen
unsigned int onesComplement(unsigned int n) {
	// Find number of bits in the given integer
	int number_of_bits = floor(log2(n)) + 1;

	// XOR the given integer with poe(2,
	// number_of_bits-1 and print the result
	return ((1 << number_of_bits) - 1) ^ n;
}
// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://
vector<int> repeatingEven(int arr[], int n) {
	// to find the odd occurance
	long long _xor = 0L;
	long long pos;
	for (int i = 0; i < n; ++i) {
		pos = 1LL << arr[i];
		_xor ^= pos;
	}
	vector<int> ans;
	for (int i = 0; i < n; ++i) {
		pos = 1LL << arr[i];
		if (!(pos & _xor)) {
			ans.push_back(arr[i]);
			_xor ^= pos;
		}
	}

	sort(ans.begin(), ans.end());
	if (ans.empty())ans.push_back(-1);
	return ans;
}
// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://
/*
Bit Rotation: A rotation (or circular shift) is an operation similar to shift except
that the bits that fall off at one end are put back to the other end.
In left rotation, the bits that fall off at left end are put back at right end.
In right rotation, the bits that fall off at right end are put back at left end.
*/

int leftRotate(int n, unsigned int d) {

	//n = 11100101 d= 3 ;
	/*
		(leftShift)
		00101000   || n>>(32-d) ==> 0b11100101 ==> right shift karke or leliya
	*/
	/* In n<<d, last d bits are 0. To
	 put first 3 bits of n at
	last, do bitwise or of n<<d
	with n >>(INT_BITS - d) */
	return (n << d) | (n >> (32 - d));
}
/*Function to right rotate n by d bits*/
int rightRotate(int n, unsigned int d) {
	/* In n>>d, first d bits are 0.
	To put last 3 bits of at
	first, do bitwise or of n>>d
	with n <<(INT_BITS - d) */
	return (n >> d) | (n << (32 - d));
}
// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://
int turnOffK(int n, int k)
{
	// k must be greater than 0
	if (k <= 0) return n;

	// Do & of n with a number with all set bits except
	// the k'th bit
	return (n & ~(1 << (k - 1)));
}
// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://
int replaceBit (int n, int k)
{
	int temp = n;
	int pos = 0; // position of the rightmost set bit

	while (temp) {
		pos++;
		temp /= 2;
	}

	// if the number bits is less than k,
	// then we can't make any changes
	if (pos < k) return n;

	// checking if the k-th bit is set or not
	if ((n & (1 << (pos - k))) != 0)
	{
		// if it's set, we make it unset and return the result
		return n - (1 << (pos - k));
	}
	// else, we make no change
	return n;
}

// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://
// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://

int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
#endif
	jay_shri_ram;

	// int t ; cin >> t;
	int t = 1;

	while (t--) {
		solve();
	}
}
/* -----------------END OF PROGRAM --------------------*/


