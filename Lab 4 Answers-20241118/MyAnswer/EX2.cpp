#include<iostream>
#include<string.h>

using namespace std;

class String{
	char str[200];
	public:
		String(){}
		String(char str[]){
			strcpy(this->str,str);
		}
		void print(){
			cout<<"Concatenated String: "<<str;
		}
		
	String& operator+(String&); 
};
String& String::operator+(String& s2){
	String String3;
	strcat(this->str,s2.str); //concatenate strings
	strcpy(String3.str,this->str); //copy the string to string that return
	
	return String3;
}

int main(){
	char str1[]="Overloading";
	char str2[]="MemberFunction";
	
	String s1(str1);
	String s2(str2);
	
	String s3=s1 + s2;
	s3.print();
		
	return 0;
}
