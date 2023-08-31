#include<iostream>
using namespace std;
class decimalConverter{
	public:
		int i,j,a,sum;
		int reverseArray(int binaryArray[],int reversedArray[],int size){
				for(i=0,j=size-1;i<size;i++,j--){
		            reversedArray[i]=binaryArray[j];}
	            for(i=0;i<size;i++){
		            binaryArray[i]=reversedArray[i];}
		}
		int powerOfIndexValue1(int x,int n){
			int i;
			x=2;  	
			int power=1;
     		for(i=1;i<=n;i++){
        	power = power*x;}
			return power;
			}
		int decimalForm(int binaryArray[],int size){
			for(i=0;i<size;i++){
     	        if(binaryArray[i]==1){
     	        a=powerOfIndexValue1(2,i);
     	        sum =a+sum;}
     	    }
     	    return sum;
		}
};
int main(){
	decimalConverter converter;
	int binaryArray[]={1,1,0,1,1,0,0,0,1,1},size;
	size =sizeof(binaryArray)/sizeof(binaryArray[0]);
	int reveresedArray[size];
	converter.reverseArray(binaryArray,reveresedArray,size);
	cout<<converter.decimalForm(binaryArray,size);
}
