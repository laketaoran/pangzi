#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main (){
		
	vector<long long> all;
	int i,j,a,input;
	a=0;
	for(i=2;i<20;i++){
		for(j=1;j<i;j++){
			all.push_back(i*i-j*j);
			a++;
		}
	}
	while(true){
		sort(all.begin(),all.end());
		cin>>input;
		cout<<"="<<all[input-1]<<endl;
	}
}
