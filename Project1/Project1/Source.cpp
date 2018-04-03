#include <iostream>
#include <Windows.h>
using namespace std;
class Neuron {
public:
	string name;
	int	input[29][29];
	int output;
	int memory[29][29];
};
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int neuroWeb[32] = {}; 
	Neuron neuroWeb[32];
	for(int i = 0; i <= 32; i++) {
		Neuron neuroWeb[i];
		neuroWeb.output = 0;
		int asciiVal = 192 + i;
		char asciiChar = asciiVal;
		neuroWeb.name = asciiChar;
		cout << neuroWeb << endl;

	}

	system("PAUSE");
}