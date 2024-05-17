#include "MyForm.h"

using namespace Animation;
using namespace System;
using namespace System::Windows::Forms;
void main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Animation::MyForm form;
    Application::Run(% form);
}

