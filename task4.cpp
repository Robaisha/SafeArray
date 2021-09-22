#include<iostream>
using namespace std;
int main(){
   bool arr[5][5]={{0,1,0,1,1},{1,0,1,0,1},{0,1,0,0,0},{1,0,0,0,1},{1,1,0,1,0}};
   int i=0;
   int a=0,b=0;
   int c=0;
   cout<<"Enter two friends(2 columns)\n";
   cin>>a;
   cin>>b;
   for(int i=0;i<5;i++){
   	if(arr[a][i]==true && arr[i][b]==true){
   		c++;
   		cout<<i<<" is a mutual friend of "<<a<<" and "<<b<<endl;
	   }
   }
   if(c==0){
   	cout<<"No mutual friend\n";
   }
   for(i=0;i<5;i++){
   		for(int j=0;j<5;j++){
   			if(arr[i][j]){
   				cout<<"*";
			   }
			   else{
			   	cout<<" ";
			   }
		   }
		   cout<<endl;
	}
   
  
}
