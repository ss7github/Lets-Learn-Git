//------------------------------------------------------------------
// Minimum and Maximum element in an array
pair<long long, long long> getMinMax(long long a[], int n) {
    
    sort(a, a+n);

    int min = a[0];

    int max = a[n-1];

    return {min, max};
    
}

//------------------------------------------------------------------
