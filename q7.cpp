#include<iostream>
using namespace std;
int main(){
int arr_count[5];
for(int i=0;i<5;i++)
	arr_count[i]=0;
int spoilt_ballot=0;
int ballot;//values can be 1,2,3,4,5
for(int i=1;i<=10;i++){
	cout << "ballot is \n";
	cin >> ballot;
	if(1<=ballot && ballot<=5)
		arr_count[ballot-1]+=1;//ballot 1 stored in arr[0]
	else
		spoilt_ballot+=1;
	}
for(int i=0;i<5;i++){
	cout << "ballot "<<(i+1)<<" count is "<< arr_count[i]<<"\n";	
}
cout << "no. of spoilt ballot are "<<spoilt_ballot;
return 0;}
