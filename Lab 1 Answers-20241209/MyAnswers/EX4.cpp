#include <iostream>

using namespace std;

template <typename T> myMax(T x, T y){
	return (x>y)?x:y;
}

main(){
	cout<<"Enter two integer variables (3,7), "<<"Max is: "<<myMax<int>(3,7)<<endl;
	cout<<"Enter two double variables (3.0,7.0), "<<"Max is: "<<myMax<double>(3.0,7.0)<<endl;
	cout<<"Enter two character variables (g,a), "<<"Max is: "<<myMax<char>('g','a')<<endl;
	
	return 0;
}
