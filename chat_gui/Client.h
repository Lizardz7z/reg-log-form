#ifndef CLIENT_H
#define CLIENT_H

#include "Registration.h"

namespace chatgui {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Client
	/// </summary>
	public ref class Client : public System::Windows::Forms::Form
	{
	private:
		Dataloader* data_c;
	public:
		Client(Dataloader* data)
		{
			InitializeComponent();
			this->data_c = data;
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Client()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ password_box;

	private: System::Windows::Forms::TextBox^ login_box;

	private: System::Windows::Forms::Button^ btn_signin;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btn_see;
	private: System::Windows::Forms::Label^ btnToSignUp;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnToSignUp = (gcnew System::Windows::Forms::Label());
			this->btn_see = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btn_signin = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->password_box = (gcnew System::Windows::Forms::TextBox());
			this->login_box = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Menu;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->Location = System::Drawing::Point(188, 70);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Sign In";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// panel1
			// 
			this->panel1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel1->BackColor = System::Drawing::SystemColors::Menu;
			this->panel1->Controls->Add(this->btnToSignUp);
			this->panel1->Controls->Add(this->btn_see);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->btn_signin);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->password_box);
			this->panel1->Controls->Add(this->login_box);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(157, 39);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(490, 448);
			this->panel1->TabIndex = 1;
			// 
			// btnToSignUp
			// 
			this->btnToSignUp->AutoSize = true;
			this->btnToSignUp->BackColor = System::Drawing::SystemColors::Control;
			this->btnToSignUp->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnToSignUp->ForeColor = System::Drawing::SystemColors::Highlight;
			this->btnToSignUp->Location = System::Drawing::Point(327, 360);
			this->btnToSignUp->Name = L"btnToSignUp";
			this->btnToSignUp->Size = System::Drawing::Size(76, 22);
			this->btnToSignUp->TabIndex = 8;
			this->btnToSignUp->Text = L"Sign Up";
			this->btnToSignUp->Click += gcnew System::EventHandler(this, &Client::label5_Click);
			// 
			// btn_see
			// 
			this->btn_see->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_see->Location = System::Drawing::Point(394, 219);
			this->btn_see->Name = L"btn_see";
			this->btn_see->Size = System::Drawing::Size(35, 31);
			this->btn_see->TabIndex = 7;
			this->btn_see->UseVisualStyleBackColor = true;
			this->btn_see->Click += gcnew System::EventHandler(this, &Client::btn_see_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(53, 360);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(197, 22);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Don\'t have an account\?";
			// 
			// btn_signin
			// 
			this->btn_signin->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_signin->Location = System::Drawing::Point(161, 275);
			this->btn_signin->Name = L"btn_signin";
			this->btn_signin->Size = System::Drawing::Size(169, 42);
			this->btn_signin->TabIndex = 5;
			this->btn_signin->Text = L"sign in";
			this->btn_signin->UseVisualStyleBackColor = true;
			this->btn_signin->Click += gcnew System::EventHandler(this, &Client::btn_signin_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(101, 196);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(74, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Password";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(101, 127);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Login";
			// 
			// password_box
			// 
			this->password_box->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_box->Location = System::Drawing::Point(105, 219);
			this->password_box->MaxLength = 16;
			this->password_box->Name = L"password_box";
			this->password_box->Size = System::Drawing::Size(282, 31);
			this->password_box->TabIndex = 2;
			this->password_box->UseSystemPasswordChar = true;
			// 
			// login_box
			// 
			this->login_box->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->login_box->Location = System::Drawing::Point(105, 150);
			this->login_box->MaxLength = 16;
			this->login_box->Name = L"login_box";
			this->login_box->Size = System::Drawing::Size(282, 31);
			this->login_box->TabIndex = 1;
			// 
			// Client
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Highlight;
			this->ClientSize = System::Drawing::Size(782, 553);
			this->Controls->Add(this->panel1);
			this->Name = L"Client";
			this->Text = L"Client";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btn_see_Click(System::Object^ sender, System::EventArgs^ e) {
		if (password_box->UseSystemPasswordChar == false) {
			password_box->UseSystemPasswordChar = true;
		}
		else {
			password_box->UseSystemPasswordChar = false;
		}
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
		Registration^ reg = gcnew Registration(this->data_c);
		reg->Show();
		reg->Owner = this;
		Client::Hide();
	}
	private: System::Void btn_signin_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string login = msclr::interop::marshal_as<std::string>(login_box->Text);
		std::string password = msclr::interop::marshal_as<std::string>(password_box->Text);
		node* cur = (*data_c).check_login(login);
		if (cur == NULL) {
			MessageBox::Show(L"Invalid login");
		}
		else {
			bool enter = (*data_c).check_password(cur, password);
			if (enter) {
				Account^ acc = gcnew Account(login_box->Text, this->data_c);
				acc->Show();
				this->Hide();
			}
			else {
				MessageBox::Show(L"Wrong password");
			}
		}
	}
};
}


#endif