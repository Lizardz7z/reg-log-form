#ifndef REGISTER_H
#define REGISTER_H

#include <msclr\marshal_cppstd.h>
#include "Account.h"

namespace chatgui {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Registration
	/// </summary>
	public ref class Registration : public System::Windows::Forms::Form
	{
	private:
		Dataloader* data_r;
	public:
		Registration(Dataloader* data)
		{
			InitializeComponent();
			this->data_r = data;
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Registration()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ btnToSignUp;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btn_signin;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ password_box;
	private: System::Windows::Forms::TextBox^ login_box;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ password_box2;


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
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->password_box2 = (gcnew System::Windows::Forms::TextBox());
			this->btnToSignUp = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btn_signin = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->password_box = (gcnew System::Windows::Forms::TextBox());
			this->login_box = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel1->BackColor = System::Drawing::SystemColors::Menu;
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->password_box2);
			this->panel1->Controls->Add(this->btnToSignUp);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->btn_signin);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->password_box);
			this->panel1->Controls->Add(this->login_box);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(146, 52);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(490, 448);
			this->panel1->TabIndex = 2;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(101, 252);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(116, 20);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Password again";
			// 
			// password_box2
			// 
			this->password_box2->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_box2->Location = System::Drawing::Point(105, 275);
			this->password_box2->MaxLength = 16;
			this->password_box2->Name = L"password_box2";
			this->password_box2->Size = System::Drawing::Size(282, 31);
			this->password_box2->TabIndex = 9;
			this->password_box2->UseSystemPasswordChar = true;
			// 
			// btnToSignUp
			// 
			this->btnToSignUp->AutoSize = true;
			this->btnToSignUp->BackColor = System::Drawing::SystemColors::Control;
			this->btnToSignUp->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnToSignUp->ForeColor = System::Drawing::SystemColors::Highlight;
			this->btnToSignUp->Location = System::Drawing::Point(328, 394);
			this->btnToSignUp->Name = L"btnToSignUp";
			this->btnToSignUp->Size = System::Drawing::Size(71, 22);
			this->btnToSignUp->TabIndex = 8;
			this->btnToSignUp->Text = L"Sign In";
			this->btnToSignUp->Click += gcnew System::EventHandler(this, &Registration::btnToSignUp_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(49, 394);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(215, 22);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Already have an account\?";
			// 
			// btn_signin
			// 
			this->btn_signin->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_signin->Location = System::Drawing::Point(156, 329);
			this->btn_signin->Name = L"btn_signin";
			this->btn_signin->Size = System::Drawing::Size(169, 42);
			this->btn_signin->TabIndex = 5;
			this->btn_signin->Text = L"sign up";
			this->btn_signin->UseVisualStyleBackColor = true;
			this->btn_signin->Click += gcnew System::EventHandler(this, &Registration::btn_signin_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(101, 175);
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
			this->label2->Location = System::Drawing::Point(101, 107);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Login";
			// 
			// password_box
			// 
			this->password_box->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_box->Location = System::Drawing::Point(105, 198);
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
			this->login_box->Location = System::Drawing::Point(105, 130);
			this->login_box->MaxLength = 16;
			this->login_box->Name = L"login_box";
			this->login_box->Size = System::Drawing::Size(282, 31);
			this->login_box->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Menu;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->Location = System::Drawing::Point(188, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(119, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Sign Up";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// Registration
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(782, 553);
			this->Controls->Add(this->panel1);
			this->Name = L"Registration";
			this->Text = L"Registration";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Registration::Registration_FormClosed);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Registration_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		Application::Exit();
	}
	private: System::Void btnToSignUp_Click(System::Object^ sender, System::EventArgs^ e) {
		Owner->Show();
		delete this;
	}
	private: System::Void btn_signin_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string login_r = msclr::interop::marshal_as<std::string>(login_box->Text);
		std::string password_r = msclr::interop::marshal_as<std::string>(password_box->Text);
		std::string password_again = msclr::interop::marshal_as<std::string>(password_box2->Text);
		node* cur_r = (*data_r).check_login(login_r);
		if (cur_r != NULL) {
			MessageBox::Show(L"User with this login is already exist");
		}
		else {
			if (password_r == password_again) {
				(*data_r).add_data(login_r, password_r);
				Account^ acc = gcnew Account(login_box->Text, this->data_r);
				acc->Show();
				this->Hide();
			}
			else {
				MessageBox::Show(L"Password mismatch");
			}
		}
	}
};
}

#endif