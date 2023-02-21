//-----------------------------------------------------------------------------------
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
