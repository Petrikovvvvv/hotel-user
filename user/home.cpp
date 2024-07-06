#include "home.h"

using namespace user;

[STAThreadAttribute]
int main() {

	Application::Run(gcnew home());

	return 0;
}

