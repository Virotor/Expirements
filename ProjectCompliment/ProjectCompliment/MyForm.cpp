#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args)
{
	srand(time(nullptr));
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ProjectCompliment::MyForm form;
	Application::Run(% form);
}