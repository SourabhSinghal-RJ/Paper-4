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
	int min=INT_MAX;
	int k=0;
	int h=0;
	for(int i=0;i<count;i++){
	    for(int j=i+1;j<count;j++){
	        if(abs(v[i]+v[j])<min){
	            min = abs(v[i]+v[j]);
	            k=i;
	            h=j;
	            if(min==0){
	                break;
	            }
	        }    
	    }
	}
	cout<<"Integers having sum closest to zero are : "<<v[k]<<","<<v[h]<<endl;
	return 0;
}
