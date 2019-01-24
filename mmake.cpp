#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

using namespace std;

void make_main(string funname);
void make_makefile(string filename);


int main(int argc , char *argv[])
{
	make_main(argv[1]);
	make_makefile(argv[1]);
	system("make");
	
	return 0;
}

void make_main(string funname)
{
	int dotnum=funname.find_last_of(".");
	funname = funname.substr(0,dotnum);
	ofstream out("main.cpp");
	out << "#include <iostream>\n";
	out << "using namespace std;\n";
	out << endl;
	out << "void " << funname << "()" << ";\n";
	out << "int main()\n{\n";
	out << "\t" << funname << "()" << ";\n";
	out << "\treturn 0;" << endl;
	out << "}";
	out << endl;
	out.close();
	
}
void make_makefile(string filename)
{
	ofstream out("makefile");
	out << "main.out : main.cpp " << filename << " makefile\n";
	out << "\t\tg++ -o main.out main.cpp " << filename  << endl;
	out << "clean :\n";
	out << "\t\trm *.out main.cpp makefile";
	out << endl;
	out.close();
}

