Problem
On a sunny Sunday afternoon, Chef prepared a brunch for his 
20
20 neighbours.
Chef prepared a total of 
�
X plates. However, the meal was so good that the neighbours started taking 
�
Y plates each.

Find the maximum number of neighbours Chef can feed completely.
My Code
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    
	    int k= x/y;
	    if(k>20) cout<<20<<endl;
	    else cout<<k<<endl;
	}
	return 0;
}
