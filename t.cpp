#include <iostream>
#include <vector>
#include <limits>

using namespace std;

const int MAX_N = 100000;

// Structure to store minimum value, maximum value, and corresponding index
struct Node {
    int min_val, max_val, min_idx, max_idx;
};

vector<Node> tree(2 * MAX_N);

// Builds the segment tree from the given array
void buildTree(const vector<int>& arr, int node, int start, int end) {
    if (start == end) {
        tree[node] = {arr[start], arr[start], start, start}; // {min, max, min_idx, max_idx}
        return;
    }

    int mid = (start + end) / 2;
    buildTree(arr, 2 * node, start, mid);
    buildTree(arr, 2 * node + 1, mid + 1, end);

    // Combine min, max, and indices from child nodes
    tree[node] = {min(tree[2 * node].min_val, tree[2 * node + 1].min_val),
                  max(tree[2 * node].max_val, tree[2 * node + 1].max_val),
                  (tree[2 * node].min_val == min(tree[2 * node].min_val, tree[2 * node + 1].min_val)) ? tree[2 * node].min_idx : tree[2 * node + 1].min_idx,
                  (tree[2 * node].max_val == max(tree[2 * node].max_val, tree[2 * node + 1].max_val)) ? tree[2 * node].max_idx : tree[2 * node + 1].max_idx
                 };
}

// Queries for the minimum and maximum value with their indices in the range [l, r]
pair<Node, Node> query(int node, int start, int end, int l, int r) {
    if (r < start || end < l) {
        return {{INT_MAX, INT_MAX, -1, -1}, {INT_MIN, INT_MIN, -1, -1}}; // No overlap
    }

    if (l <= start && end <= r) {
        return {tree[node], tree[node]}; // Complete overlap
    }

    int mid = (start + end) / 2;
    pair<Node, Node> left = query(2 * node, start, mid, l, r);
    pair<Node, Node> right = query(2 * node + 1, mid + 1, end, l, r);

    // Combine min, max, and indices from child results
    Node min_node = {min(left.first.min_val, right.first.min_val),
                     (left.first.min_val == min(left.first.min_val, right.first.min_val)) ? left.first.min_idx : right.first.min_idx
                    };
    Node max_node = {max(left.second.max_val, right.second.max_val),
                     (left.second.max_val == max(left.second.max_val, right.second.max_val)) ? left.second.max_idx : right.second.max_idx
                    };

    return {min_node, max_node};
}

int main() {
    vector<int> arr = {5, 2, 8, 1, 9};
    int n = arr.size();

    buildTree(arr, 1, 0, n - 1);

    int l = 1, r = 3; // Example range
    pair<Node, Node> result = query(1, 0, n - 1, l, r);

    cout << "Minimum value: " << result.first.min_val << " at index: " << result.first.min_idx << endl;
    cout << "Maximum value: " << result.second.max_val << " at index: " << result.second.max_idx << endl;

    return 0;
}
