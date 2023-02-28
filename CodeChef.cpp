//-----------------------------------------------------------------------------------
//boilerplate
int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0; i<n; i++){
	        cin>>a[i];
	    }
	}
//
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--){
	    int n,k;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0; i<n; i++) cin>>a[i];
	    
	    int count=0;
	    
	    sort(a,a+n);
	    
	    for(int i=0; i<n; i++){
	        if(k >= a[i]){
	            k = k-a[i];
	            count++;
	        }
	        else{
	            if(k>=(a[i]+1)/2){
	                count++;
	                break;
	            }
	        }
	    }
	    cout << count << endl;
	}
	return 0;
}
/*
Suppose k=3 and a[i] is 7. If we do k>=a[i]/2, 
it will return true as since the values are integers, 
a[i]/2 = 3 and not 3.5 as it should. 
Hence, we add 1 to a[i] before dividing so that we get 4 in the above example and it returns false.
*/
//------------------------------------------------------------------
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    
	    int a[n];
	    for(int i=0; i<n; i++) cin>>a[i];
	    
	    sort (a, a+n);
	    double sum=0;
	    for(int i=k; i<n-k; i++){
	        sum+=a[i];
	    }
	    double avg=sum/(n-2*k);
	    
	    cout<<fixed<<setprecision(6)<<avg<<endl;
	}
	return 0;
}

//
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    
	    int a[n];
	    for(int i=0; i<n; i++){
	        cin>>a[i];
	    }
	    
	    cout<< <<endl;
	}
	return 0;
//
#include <iostream>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    
	    //In each iteration we check whether the element is 
	    //1,2,3,4,5,6 or 7 then shift the pointer k to that ith element. 
	    //After completion of the loop, Print k
	    
	    int k = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] == 1 || arr[i] == 2 || arr[i] == 3 || arr[i] == 4 || arr[i] == 5 || arr[i] == 6 || arr[i] == 7){
                k = i + 1;
            }
        }
        cout<<k<<endl;
	}
	return 0;
}
//-----------------------------------------------------------------------------------
// Sum of elements of Array
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
        int midSum = n/2 + n%2;
        
        if (midSum%2 == 0) cout<<n<<endl;
        else cout<<n-1<<endl;
	}
	return 0;
}
//-----------------------------------------------------------------------------------
