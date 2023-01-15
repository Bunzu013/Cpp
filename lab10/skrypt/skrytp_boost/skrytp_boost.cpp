#include <iostream>
#include <boost/algorithm/string.hpp>
#include <algorithm>
#include <string>
#include <vector>
#include <boost/tokenizer.hpp>

using namespace boost::algorithm;
using namespace std;
int main()
{
string line="programowanie";
cout<<line<<endl;
to_upper(line);
 cout<<"To_upper: "<<line<<endl;
 line=to_lower_copy(line);
 cout<<"To_lower: "<<line<<endl;
 cout<<"Erase_first: " 
 <<erase_first_copy(line,"o")<<endl;
 cout<<"Erase_all:"<<erase_all_copy(line,"o")<<endl;
 cout<<"Replace_first: "
 <<replace_first_copy(line,"p","P")<<endl;
 cout<<"replace_all: "
 <<replace_all_copy(line,"o","-O-")<<endl;
 vector<string> vec{"Programowanie", "w", "C++"};
 cout << "Join: "<<join(vec, " ") << endl;
 string s = " Programowanie w C++ ";
 cout<<s<<endl;
 cout << "Trim: "<<"_" << trim_copy(s) << "_"<<endl;
 s = "---Programowanie w C++---";
 cout<<s<<endl;
 cout <<"Trim_if is_any_of: " 
 <<trim_copy_if(s, is_any_of("-")) << endl;
 s = "123Programowanie w C++12";
 cout<<s<<endl;
 cout << "Trim if digit: "
<<trim_copy_if(s, is_digit()) <<endl;
 s = "Programowanie w C++";
 cout<<s<<endl;
 cout << "Ends_with: "<<ends_with(s, "C++") <<endl;
 cout <<"Contains: "<< contains(s, "gram") <<endl; 
 s = "Programowanie w C++";
 cout<<s<<endl;
 vector<string> vec1;
 split(vec1, s, is_space());
 cout<<"Zawartosc vectora: "<<endl;
 for(int i=0; i<vec1.size(); i++)
 cout<<vec1[i]<<endl;

 typedef boost::tokenizer
 <boost::char_separator<char>> tokenizer;
 s = "Programowanie w C++";
 boost::char_separator<char> sep{" "};
 tokenizer tok{s,sep};
 cout<<s<<endl;
 for (tokenizer::iterator it = tok.begin(); 
 it != tok.end(); ++it)
 cout << *it <<endl;

 return 0;
 }