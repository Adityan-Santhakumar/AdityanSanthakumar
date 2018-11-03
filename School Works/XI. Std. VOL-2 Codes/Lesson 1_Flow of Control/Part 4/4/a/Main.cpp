#include <iostream>
#include <math.h>

using namespace std;

double factorial(int);

int main(){
	
	cout<<"X: ";
	double x;
	cin>>x;
	cout<<endl;
	
	double sum = 0 , loop;
	
	    for(int i = 1 ; i < 7 ; i++){
	    	
	    	double factorialTemp = factorial(i);
	    	loop = ( ( pow( x , i ) ) / factorialTemp ) * pow( -1 , i + 1);
	    	sum = sum + loop ;
	    	
		}
	
	cout<<"Value: "<<sum;
	return 0;
}

double factorial(int f){
	
	if(f > 1){
		
		return f * factorial(f-1);
		
	}
	
	else{
		
		return 1;
		
	}
	
}
