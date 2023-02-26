//------------------------------------------------------------------
//inorder traversal
class Solution {
  public:
  vector<int>v;
    // Function to return a list containing the inorder traversal of the tree.
    vector<int> inOrder(Node* root) {
        // Your code here
        if(root!=NULL){

            inOrder(root->left);

            v.push_back(root->data);

            inOrder(root->right);

        }
        return v;
    }
};
//----------------------
// sort
vector<int> sortArr(vector<int>arr, int n){
    vector<int>v=arr;
    sort(v.begin(), v.end());
    return v;
    }
//------------------
//BST
//------------------------------------------------------------------
// Binary Search
class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        
        for(int i=0; i<n; i++){
            if (arr[i] == k) return i;
        }
        return -1;
    }
};
//------------------------------------------------------------------
// Minimum and Maximum element in an array
pair<long long, long long> getMinMax(long long a[], int n) {
    
    sort(a, a+n);

    int min = a[0];

    int max = a[n-1];

    return {min, max};
    
}

//------------------------------------------------------------------
