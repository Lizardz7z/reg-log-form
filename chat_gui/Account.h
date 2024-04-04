#pragma once

#include "Dataloader.h"

namespace chatgui {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Account
	/// </summary>
	public ref class Account : public System::Windows::Forms::Form
	{
		String^ user;
		Dataloader* data_a;
	public:
		Account(String^ user, Dataloader* data)
		{
			InitializeComponent();
			String^ hi = "Hello, ";
			this->user = user;
			hello_label->Text = hi + user;
			this->data_a = data;
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Account()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ hello_label;
	protected:









	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->hello_label = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel1->BackColor = System::Drawing::SystemColors::Menu;
			this->panel1->Controls->Add(this->hello_label);
			this->panel1->Location = System::Drawing::Point(28, 23);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(830, 494);
			this->panel1->TabIndex = 2;
			// 
			// hello_label
			// 
			this->hello_label->BackColor = System::Drawing::SystemColors::Menu;
			this->hello_label->Dock = System::Windows::Forms::DockStyle::Fill;
			this->hello_label->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->hello_label->ForeColor = System::Drawing::SystemColors::ControlText;
			this->hello_label->Location = System::Drawing::Point(0, 0);
			this->hello_label->Name = L"hello_label";
			this->hello_label->Size = System::Drawing::Size(830, 494);
			this->hello_label->TabIndex = 0;
			this->hello_label->Text = L"Hello!";
			this->hello_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Account
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Desktop;
			this->ClientSize = System::Drawing::Size(882, 553);
			this->Controls->Add(this->panel1);
			this->Name = L"Account";
			this->Text = L"Account";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Account::Account_FormClosed);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Account_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		(*data_a).save_data();
		Application::Exit();
	}
	};
}
