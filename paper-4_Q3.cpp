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
	int temp=0;
	cout<<"Enter value of X and Y"<<endl;
	int x,y;
	cin>>x>>y;
	int min=INT_MAX;
	int j=0;
	for(int i=0;i<count;i++){
	    if(v[i]==x || v[i]==y){
	        temp=i;
	        j=i+1;
	        break;
	    }
	}
	for(int i=j;i<count;i++){
	    if(v[i]==x || v[i]==y){
	        if(v[temp] != v[i] && i-temp<min){
	            min=i-temp;
	            temp=i;
	        }
	        else{
	            temp=i;
	        }
	    }
	}
	cout<<"Minimum distance between X and Y is : "<<min;
	return 0;
}
