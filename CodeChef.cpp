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
