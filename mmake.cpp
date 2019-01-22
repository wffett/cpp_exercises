#include <fstream>
using namespace std;

void make_main(char *fun_name[]);
void make_makefile(char *file_name[]);


int main(int argc , char *argv[])
{
	ofstream out(argv[1]);
	out << "#include <iostream>\n";
	out << endl;
	out.close();

	return 0;
}

void make_main(char *fun_name[])
{
	ofstream out_main;	
	out_main.open("");
	
	
}
