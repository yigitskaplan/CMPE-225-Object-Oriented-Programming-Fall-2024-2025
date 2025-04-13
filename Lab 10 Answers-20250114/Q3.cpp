#include <iostream>
#include <fstream>
#include <cctype>  //isupper(), islower(), isspace(), ispunct() funcs

using namespace std;

int main()
{
    ifstream file("input.txt");

    if(!file)
	{
        cerr << "Error opening file." << endl;
        return 1;
    }

    int charCount = 0, wordCount = 0, lineCount = 0;
    int upperCount = 0, lowerCount = 0, blankCount = 0;
    string line;

    while(getline(file, line)) //read file line by line
	{
        lineCount++;

        bool inWord = false;  //flag to track whether we are inside a word

        for(int i = 0; i < line.length(); i++) //each character in the line
		{
            char c = line[i];

            charCount++;

            if(isupper(c))
			{
                upperCount++;
            } 
			else if(islower(c))
			{
                lowerCount++;
            } 
			else if(isspace(c))
			{
                blankCount++;
            }
            if(isspace(c) || ispunct(c))
			{
                if(inWord)
				{
                    inWord = false;
                }
            }
			else
			{
                //if the character is not space or punctuation, we're in a word.
                if(!inWord)
				{
                    wordCount++;
                    inWord = true;
                }
            }
        }
		if(inWord)
        {
            wordCount++;  //count the last word if the line ends with a word
        }
    }

    cout << "Total characters: " << charCount << endl;
    cout << "Total words: " << wordCount << endl;
    cout << "Total lines: " << lineCount << endl;
    cout << "Total uppercase characters: " << upperCount << endl;
    cout << "Total lowercase characters: " << lowerCount << endl;
    cout << "Total blank spaces: " << blankCount << endl;
	
	file.close();
	
    return 0;
}
