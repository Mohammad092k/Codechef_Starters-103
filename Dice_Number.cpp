Problem
Alice and Bob are playing a game. Each player rolls a regular six faced dice 
3
3 times.
The score of a player is the maximum number that can be formed using the rolls.
The player with the highest score wins, and the game ends in a tie if both players have the same score.

Find the winner of the game or determine whether it is a tie.
My Code

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	   // int a1,a2,a3,b1,b2,b3;
	    vector<int> v1(3);
	     vector<int> v2(3);
	    
	    cin>>v1[0]>>v1[1]>>v1[2]>>v2[0]>>v2[1]>>v2[2];
	    sort(v1.begin(),v1.end());
	    reverse(v1.begin(),v1.end());
	    sort(v2.begin(),v2.end());
	    reverse(v2.begin(),v2.end());
	     bool f= false;
	    for(int i=0;i<3;i++){
	       // cout<<v1[i]<<" "<<v2[i]<<endl;
	        if(v1[i]>v2[i]){
	            cout<<"Alice"<<endl;
	            f=true;
	            break;
	        }
	       else if(v1[i]<v2[i]){
	            cout<<"Bob"<<endl;
	            f=true;
	            break;
	        }
	        
	    }
	    if(f==false) cout<<"Tie"<<endl;
	}
	return 0;
}
