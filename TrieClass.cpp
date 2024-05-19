// Bit trie That is making from MSB (back )

class trieNode {
public:
	trieNode *child[2];
	int cnt;
	trieNode() {
		for (int i = 0 ; i < 2 ; i++) {
			child[i] = NULL;
			cnt = 0;
		}
	}
};

class  Trie {
public:
	trieNode *root;
	Trie() {
		root = new trieNode();
	}

	void insert(int n) {
		trieNode *cur = root;

		for (int i = 31; i >= 0; i--) {
			int x = ((n >> i) & 1LL);

			if (cur->child[x] == NULL)
				cur->child[x] = new trieNode;

			cur->cnt++;
			cur = cur->child[x];
		}
		cur->cnt++;
	}
	void Del(int n) {
		trieNode *cur = root;
		int len = 31;

		for (int i = len; i >= 0; i--) {
			int x = ((n >> i) & 1LL);
			cur->cnt--;
			cur = cur->child[x];
		}

		cur->cnt--;
	}
	int maxQuery(int n) {
		trieNode *cur = root;
		int ans = 0;
		int len = 31;
		for (int i = len; i >= 0; i--) {

			int x = 1 - ((n >> i) & 1LL);
			if (cur->child[x] != NULL && (cur->child[x])->cnt != 0) {

				ans ^= (1LL << i);
				cur = cur->child[x];
			}

			else
				cur = cur->child[1 ^ x];
		}
		return ans;
	}
};

void solve() {

	int q ; cin >> q ;


	Trie t  ;
	t.insert(0);



	while (q--) {
		string x ; cin >> x  ;
		int n ; cin >> n ;

		if (x == "+") {
			t.insert(n);
		} else if (x == "-") {
			t.Del(n);
		} else {
			cout << t.maxQuery(n) << nline;
		}
	}


}




// String Trie
class trieNode {
public:
	trieNode* child[26];
	int cnt;
	bool endWord;
	trieNode() {
		for (int i = 0; i < 26; i++) {
			child[i] = NULL;
		}
		endWord = false;
		cnt = 0;
	}
};

class Trie {
public:
	trieNode* root;
	Trie() {
		root = new trieNode();
	}
	void insert(string word) {
		trieNode* curr = root;
		for (auto it : word) {
			int x = it - 'a';
			if (curr->child[x] == NULL) {
				curr->child[x] = new trieNode();
			}
			curr = curr->child[x];
			curr->cnt++;
		}
		curr->endWord = true;
	}

	bool search(string word) {
		trieNode* curr = root;
		for (auto it : word) {
			int x = it - 'a';
			if (curr->child[x] == NULL) {
				return false;
			}
			curr = curr->child[x];
		}
		return curr->endWord;
	}

	bool startsWith(string prefix) {
		trieNode* curr = root;
		for (auto it : prefix) {
			int x = it - 'a';
			if (curr->child[x] == NULL) {
				return false;
			}
			curr = curr->child[x];
		}
		return true;
	}
};


