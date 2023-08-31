#include<iostream>
using namespace std;

class decimal{
	public:
		int i,power=1,size,j,a,num;
		int sum;
		
		int setsum(){
			sum=0;
		}
		 
		int getsize( int bn_arr[]){
			size =sizeof(bn_arr)/sizeof(bn_arr[0]);
		 
		}
		 
		int reverse(int bn_arr[],int Newarr[]){
				for(i=0,j=size-1;i<size;i++,j--){
	            	Newarr[i]=bn_arr[j];}
             	for(i=0;i<size;i++){
	            	bn_arr[i]=Newarr[i];}
		}
		int convert( int bn_arr[]){
			for(i=0;i<size;i++){
     	        if(bn_arr[i]==1){
     	        a=powe(2,i);
		     	cout<<a<<endl;
		     	sum =a+sum;} 
		}
		cout<<sum;
		
	}
		int powe(int x,int n){
        x=2;   
        for(i=1;i<=n;i++){
        power = power*x;}
        return power;
		}
	 
};
 
int main(){
    int bn_arr[]={1,1,1,0,0,1,1,0,0,1,1},ss,num;
     
    decimal d;
    ss=d.getsize(bn_arr);
    int Newarr[ss];
    d.reverse(bn_arr,Newarr);
    d.convert(bn_arr);
     
}
