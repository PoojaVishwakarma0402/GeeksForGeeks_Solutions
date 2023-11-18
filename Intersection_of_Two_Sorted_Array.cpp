
vector<int> printIntersection(int arr1[], int arr2[], int n, int m) {
    vector<int> ans;
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
    
    int i = 0, j = 0;
    
    while (i < n && j < m) {
        if (arr1[i] == arr2[j]) {
            // To avoid duplicates in ans
            if (ans.empty() || ans.back() != arr1[i]) {
                ans.push_back(arr1[i]);
            }
            i++;
            j++;
        } else if (arr1[i] < arr2[j]) {
            i++;
        } else {
            j++;
        }
    }
    
    return ans;
}
