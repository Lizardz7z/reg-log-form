#include "Client.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Dataloader data;
	data.load_data();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	chatgui::Client client(&data);
	Application::Run(% client);
}