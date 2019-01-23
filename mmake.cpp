#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void make_main(string funname);
//void make_makefile(char *file_name[]);


int main(int argc , char *argv[])
{
	make_main(argv[1]);
	return 0;
}

void make_main(string funname)
{
	int dotnum=funname.find_last_of(".");
	funname = funname.substr(0,dotnum);
	ofstream out("main.cpp");
	out << "#include <iostream>\n";
	out << "using namespace std;\n";
	out << "void " << funname << "()" << ";\n";
	out << "int main(){\n";
	out << funname << "()" << ";\n";
	out << "return 0;" << endl;
	out << "}";
	out << endl;
	out.close();
	
}
