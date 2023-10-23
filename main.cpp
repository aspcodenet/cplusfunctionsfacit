#include <iostream>
#include <string>
#include <cctype>
#include <tuple>
using namespace std;

string getAgeMessage(int birthYear){
    if(birthYear < 1973 ) return "No worry, you are still young";
    if(birthYear == 1973 ) return "You are born the same year as Peter Forsberg";
    return "You are much younger than the C programming language";
}
string generateName(string firstName, string lastName){
    return firstName + " " + lastName;
}

/*
Create a function taking a string as parameter. Call it countNumbers. It should  return the number of numbers inside the string.

countNumbers(”hej12 what 1 yes”)  
should return 3
*/

int countNumbers(string input){
    int count = 0;
    for(char ch : input){
        if(isdigit(ch)){
            count++;
        }
    }
    return count;
}


bool isWoman(string personalNumber){
    char chSecondLast = personalNumber[personalNumber.length()-2];
    return chSecondLast == '1' || chSecondLast == '3' || chSecondLast == '5' ||
        chSecondLast == '7' || chSecondLast == '9';
}

tuple<string,int> findLongestWord(string allStrings[], int size){
    string longestSofar = "";
    for(int i = 0; i < size; i++){
        if (allStrings[i].length() > longestSofar.length())
            longestSofar = allStrings[i];
    }
    return {longestSofar, longestSofar.length()};
}






int main(){
    string allStrings[] = {
        "Stefan","Oliver", "Josefine"
    };

    for(string part : allStrings){
        cout << part;
    }


    auto [theLongestString, theLenghth] =  findLongestWord(allStrings, 3);
    cout << theLongestString << theLenghth << endl;


    bool i = isWoman("1213123132");


    string theString; 
    cout << "Enter a string:";
    getline(cin,theString);
    //int count = countNumbers(theString) << endl;
    cout << countNumbers(theString) << endl;


    string firstName; 
    string lastName;
    cout << "Firstname:";
    getline(cin,firstName);
    cout << "Lastname:";
    getline(cin,lastName);
    string fullName = generateName(firstName,lastName);
    cout << fullName << endl;


    int birthYear;
    cout << "Enter birthyear:";
    cin >> birthYear;
    
    string result = getAgeMessage(birthYear);
    return 0;
}