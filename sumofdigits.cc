//username-->Shreya Dubey1001
//github account-->https://github.com/ShreyaDubey1001

#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define inp long long int n,i;cin>>n;long long int arr[n];for(i=0;i<n;i++)cin>>arr[i];
#define tc long long t;cin>>t;while(t--)
using namespace std;
int main(){
 ll n;
 cout<<"enter number:";
 cin>>n;
 int sum=0;
 while(n>0){
 	sum=sum+n%10;
 	n/=10;
 }
 cout<<endl;
 cout<<"sum of digits of given number is:"<<sum<<endl;
return 0;
}
