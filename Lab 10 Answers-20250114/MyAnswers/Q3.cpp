#include <iostream>
#include <fstream>
#include <string>
#include <cctype> //isupper(), islower(), isspace(), ispunct()

using namespace std;

int main(){
	ifstream file("input.txt");
	
	if(!file){
		cerr<<"Error opening file."<<endl;
		return 1;
	}	
	
	int charCount = 0, wordCount = 0, lineCount = 0;
	int upperCount = 0, lowerCount = 0, blankCount = 0;
	string line;
	
	while(getline(file,line)){
		lineCount++;
		
		bool inword=false;
		
		for(int i = 0;i < line.length(); i++){
			char c=line[i];
			
			charCount++;
			
			if(isupper(c)){
				upperCount++;
			}else if(islower(c)){
				lowerCount++;
			}else if(isspace(c)){
				blankCount++;
			}
			
			if(isspace(c) || ispunct(c)){
				if(inword){
					inword = false;
				}
			}else{
				if(!inword){
					wordCount++;
					inword=true;
				}
			}
		}
		if(inword){
			wordCount++;
		}
	}
	
	cout<<"Total characters: "<<charCount<<endl;
	cout<<"Total words: "<<wordCount<<endl;
	cout<<"Total lines: "<<lineCount<<endl;
	cout<<"Total upper case letters: "<<upperCount<<endl;
	cout<<"Total lower case letters: "<<lowerCount<<endl;
	cout<<"Total blank characters: "<<blankCount<<endl;
	
	file.close();
	
	return 0;
}
