auto calc = [&](int a , int b , int mod , int ch) {
	if (ch == '+') {
		return (a % mod + b % mod) % mod;
	}
	else if (ch == '-')
	{
		return ((a % mod - b % mod ) + mod) % mod;
	}
	else if (ch == '*')
	{
		return (a % mod * b % mod) % mod;
	}
	else {
		return (a % mod * binpow(b, mod - 2, mod) % mod) % mod;
	}
};