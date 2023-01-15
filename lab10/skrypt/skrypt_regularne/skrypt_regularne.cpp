#include <iostream>
#include <regex>

using namespace std;
int main()
{
	string line="Programowanie w C++";
	if (regex_match (line, regex("(Prog)(.*)") ))
	cout << "Znaleziono"<<endl;
	else
	cout<<"Nie znaleziono!"<<endl;
	regex regPattern("(Prog)(.*)");
	if (regex_match (line, regPattern ))
	cout << "Znaleziono"<<endl;
	else
	cout<<"Nie znaleziono!"<<endl;
	if (regex_match (line.begin(), line.end(),regPattern ))
	cout << "Znaleziono"<<endl;
	else
	cout<<"Nie znaleziono!"<<endl;
	smatch res;
	regPattern="(Prog)(.*)";
	regex_match(line,res,regPattern);
	cout<<"Regex_match: "<<endl;
	cout << "Czy znaleziony? " << res.size()<<endl;
	if(res.size()!=0)
	cout<<"Wzorzec: "<<res[0]<<
	" zostal znaleziony"<<endl;
	cout<<endl<<"Porownanie match i search"<<endl;
	line="*******Programowanie w C++********";
	regPattern="(Prog)(.*)";
	regex_match(line,res,regPattern);
	cout<<"Regex_match: "<<endl;
	cout << "Czy znaleziony? " << res.size()<<endl;
	if(res.size()!=0)
	cout<<"Wzorzec: "<<res[0]<<
	" zostal znaleziony"<<endl;
	regex_search(line,res,regPattern);
	cout<<"Regex_search: "<<endl;
	cout << "Liczba dopasowan:" << res.size()<<endl;
	cout << "res.str(): " << res.str() << endl;
	cout << "res.length(): " << res.length() << endl;
	cout << "res.position(): " << res.position() << endl;
	cout<<"res.prefix: "<<res.prefix().str()<<endl;
	cout<<"res.suffix: "<<res.suffix().str()<<endl;
	cout << endl;
	cout<<"Podgrupy ver1:"<<endl;
	for (int i=0; i<res.size(); ++i)
	{
		cout << "[" << res[i] << "] ";
		cout << "res.str(): " << res.str(i) << endl;
		cout << "res.position(): "<<res.position(i)<< endl;
		cout<<"res.dl: "<<res.length(i)<<endl;
		cout << endl;
	}
	cout << "Podgrupy ver2:" << endl;
	for (auto pos = res.begin(); pos != res.end(); pos++)
	{
		cout << "[" << *pos <<"] ";
		cout << "dl: " << pos->length() << endl;
	}
	cout<<endl<<"Replace: "<<endl;
	line="*******Programowanie w C++********";
	regPattern="(C\\+{2})";
	cout<<"Przed replace: "<<line<<endl;
	line=regex_replace(line, regPattern, "Java");
	cout<<"Po replace: "<<line<<endl;
	return 0;
}
