#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

int main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Lab12::MyForm form;
    Application::Run(% form);
}
