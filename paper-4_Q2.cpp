#include <bits/stdc++.h>
using namespace std;

int main() {
	cout<<"Enter number of elements in list"<<endl;
	int count;
	cin>>count;
	vector<int> v;
	cout<<"Enter elements of list"<<endl;
	for(int i=0;i<count;i++){
	    int temp;
	    cin>>temp;
	    v.push_back(temp);
	}
	cout<<"Duplicate elements of the list are : ";
	for(int i=0;i<count;i++){
	    v[v[i]%count]+=count;
	}
	for(int i=0;i<count;i++){
	    if((v[i]/count)>1){
	        cout<<i<<" ";
	        }
	    }
	return 0;
}
