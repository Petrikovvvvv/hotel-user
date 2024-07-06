#pragma once

namespace user {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::IO;


	/// <summary>
	/// Summary for View
	/// </summary>
	public ref class View : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		View(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		View(Form^ obj1)
		{
			obj = obj1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~View()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::SplitContainer^ container;
	protected:

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::TextBox^ ID;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ paymenttxt;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ roomtxt;
	private: System::Windows::Forms::TextBox^ nametxt;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ checkouttxt;
	private: System::Windows::Forms::TextBox^ phonenumbertxt;
	private: System::Windows::Forms::TextBox^ checkintxt;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ emailtxt;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button7;

	protected:

	protected:






























































	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->container = (gcnew System::Windows::Forms::SplitContainer());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->ID = (gcnew System::Windows::Forms::TextBox());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->paymenttxt = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->roomtxt = (gcnew System::Windows::Forms::TextBox());
			this->nametxt = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->checkouttxt = (gcnew System::Windows::Forms::TextBox());
			this->phonenumbertxt = (gcnew System::Windows::Forms::TextBox());
			this->checkintxt = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->emailtxt = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->container))->BeginInit();
			this->container->Panel1->SuspendLayout();
			this->container->Panel2->SuspendLayout();
			this->container->SuspendLayout();
			this->SuspendLayout();
			// 
			// container
			// 
			this->container->Location = System::Drawing::Point(32, 141);
			this->container->Name = L"container";
			// 
			// container.Panel1
			// 
			this->container->Panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(90)));
			this->container->Panel1->Controls->Add(this->label1);
			this->container->Panel1->Controls->Add(this->textBox1);
			this->container->Panel1->Controls->Add(this->panel7);
			this->container->Panel1->Controls->Add(this->ID);
			this->container->Panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &View::splitContainer1_Panel1_Paint_1);
			// 
			// container.Panel2
			// 
			this->container->Panel2->BackColor = System::Drawing::Color::Gainsboro;
			this->container->Panel2->Controls->Add(this->panel11);
			this->container->Panel2->Controls->Add(this->panel10);
			this->container->Panel2->Controls->Add(this->panel9);
			this->container->Panel2->Controls->Add(this->panel8);
			this->container->Panel2->Controls->Add(this->panel5);
			this->container->Panel2->Controls->Add(this->panel4);
			this->container->Panel2->Controls->Add(this->panel3);
			this->container->Panel2->Controls->Add(this->textBox9);
			this->container->Panel2->Controls->Add(this->paymenttxt);
			this->container->Panel2->Controls->Add(this->textBox2);
			this->container->Panel2->Controls->Add(this->roomtxt);
			this->container->Panel2->Controls->Add(this->nametxt);
			this->container->Panel2->Controls->Add(this->textBox4);
			this->container->Panel2->Controls->Add(this->checkouttxt);
			this->container->Panel2->Controls->Add(this->phonenumbertxt);
			this->container->Panel2->Controls->Add(this->checkintxt);
			this->container->Panel2->Controls->Add(this->textBox6);
			this->container->Panel2->Controls->Add(this->emailtxt);
			this->container->Panel2->Controls->Add(this->textBox11);
			this->container->Panel2->Controls->Add(this->textBox8);
			this->container->Panel2->Controls->Add(this->textBox10);
			this->container->Panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &View::splitContainer1_Panel2_Paint);
			this->container->Size = System::Drawing::Size(976, 462);
			this->container->SplitterDistance = 325;
			this->container->TabIndex = 25;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Poppins Medium", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(13, 175);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(309, 40);
			this->label1->TabIndex = 21;
			this->label1->Text = L"Enter your reference ID:";
			this->label1->Click += gcnew System::EventHandler(this, &View::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(90)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Poppins", 10));
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(34, 224);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(200, 25);
			this->textBox1->TabIndex = 19;
			this->textBox1->Text = L"ID:";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &View::textBox1_TextChanged);
			// 
			// panel7
			// 
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel7->Location = System::Drawing::Point(32, 273);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(250, 2);
			this->panel7->TabIndex = 4;
			// 
			// ID
			// 
			this->ID->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ID->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ID->ForeColor = System::Drawing::Color::Black;
			this->ID->Location = System::Drawing::Point(34, 255);
			this->ID->Name = L"ID";
			this->ID->Size = System::Drawing::Size(250, 15);
			this->ID->TabIndex = 20;
			this->ID->TextChanged += gcnew System::EventHandler(this, &View::ID_TextChanged);
			// 
			// panel11
			// 
			this->panel11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel11->Location = System::Drawing::Point(367, 160);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(260, 2);
			this->panel11->TabIndex = 6;
			// 
			// panel10
			// 
			this->panel10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel10->Location = System::Drawing::Point(367, 71);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(260, 2);
			this->panel10->TabIndex = 6;
			// 
			// panel9
			// 
			this->panel9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel9->Location = System::Drawing::Point(13, 385);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(260, 2);
			this->panel9->TabIndex = 7;
			// 
			// panel8
			// 
			this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel8->Location = System::Drawing::Point(13, 307);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(260, 2);
			this->panel8->TabIndex = 25;
			// 
			// panel5
			// 
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel5->Location = System::Drawing::Point(13, 231);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(260, 2);
			this->panel5->TabIndex = 7;
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Location = System::Drawing::Point(13, 158);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(260, 2);
			this->panel4->TabIndex = 6;
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Location = System::Drawing::Point(13, 71);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(260, 2);
			this->panel3->TabIndex = 5;
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::Color::Gainsboro;
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Poppins", 10));
			this->textBox9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(166)));
			this->textBox9->Location = System::Drawing::Point(13, 328);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(192, 25);
			this->textBox9->TabIndex = 9;
			this->textBox9->Text = L"Room type:";
			// 
			// paymenttxt
			// 
			this->paymenttxt->BackColor = System::Drawing::Color::WhiteSmoke;
			this->paymenttxt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->paymenttxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->paymenttxt->ForeColor = System::Drawing::Color::Black;
			this->paymenttxt->Location = System::Drawing::Point(14, 281);
			this->paymenttxt->Name = L"paymenttxt";
			this->paymenttxt->Size = System::Drawing::Size(257, 23);
			this->paymenttxt->TabIndex = 24;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Gainsboro;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Poppins", 10));
			this->textBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(166)));
			this->textBox2->Location = System::Drawing::Point(13, 16);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(192, 25);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"Name:";
			// 
			// roomtxt
			// 
			this->roomtxt->BackColor = System::Drawing::Color::WhiteSmoke;
			this->roomtxt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->roomtxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->roomtxt->ForeColor = System::Drawing::Color::Black;
			this->roomtxt->Location = System::Drawing::Point(14, 359);
			this->roomtxt->Name = L"roomtxt";
			this->roomtxt->Size = System::Drawing::Size(257, 23);
			this->roomtxt->TabIndex = 23;
			// 
			// nametxt
			// 
			this->nametxt->BackColor = System::Drawing::Color::WhiteSmoke;
			this->nametxt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->nametxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nametxt->ForeColor = System::Drawing::Color::Black;
			this->nametxt->Location = System::Drawing::Point(14, 45);
			this->nametxt->Name = L"nametxt";
			this->nametxt->Size = System::Drawing::Size(257, 23);
			this->nametxt->TabIndex = 2;
			this->nametxt->TextChanged += gcnew System::EventHandler(this, &View::name_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::Gainsboro;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Poppins", 10));
			this->textBox4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(166)));
			this->textBox4->Location = System::Drawing::Point(13, 175);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(192, 25);
			this->textBox4->TabIndex = 4;
			this->textBox4->Text = L"Phone Number:";
			// 
			// checkouttxt
			// 
			this->checkouttxt->BackColor = System::Drawing::Color::WhiteSmoke;
			this->checkouttxt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->checkouttxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkouttxt->ForeColor = System::Drawing::Color::Black;
			this->checkouttxt->Location = System::Drawing::Point(368, 133);
			this->checkouttxt->Name = L"checkouttxt";
			this->checkouttxt->Size = System::Drawing::Size(257, 23);
			this->checkouttxt->TabIndex = 22;
			// 
			// phonenumbertxt
			// 
			this->phonenumbertxt->BackColor = System::Drawing::Color::WhiteSmoke;
			this->phonenumbertxt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->phonenumbertxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phonenumbertxt->ForeColor = System::Drawing::Color::Black;
			this->phonenumbertxt->Location = System::Drawing::Point(14, 205);
			this->phonenumbertxt->Name = L"phonenumbertxt";
			this->phonenumbertxt->Size = System::Drawing::Size(257, 23);
			this->phonenumbertxt->TabIndex = 5;
			// 
			// checkintxt
			// 
			this->checkintxt->BackColor = System::Drawing::Color::WhiteSmoke;
			this->checkintxt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->checkintxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkintxt->ForeColor = System::Drawing::Color::Black;
			this->checkintxt->Location = System::Drawing::Point(369, 44);
			this->checkintxt->Name = L"checkintxt";
			this->checkintxt->Size = System::Drawing::Size(257, 23);
			this->checkintxt->TabIndex = 21;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::Gainsboro;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Poppins", 10));
			this->textBox6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(166)));
			this->textBox6->Location = System::Drawing::Point(13, 95);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(192, 25);
			this->textBox6->TabIndex = 6;
			this->textBox6->Text = L"Email:";
			// 
			// emailtxt
			// 
			this->emailtxt->BackColor = System::Drawing::Color::WhiteSmoke;
			this->emailtxt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->emailtxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->emailtxt->ForeColor = System::Drawing::Color::Black;
			this->emailtxt->Location = System::Drawing::Point(14, 131);
			this->emailtxt->Name = L"emailtxt";
			this->emailtxt->Size = System::Drawing::Size(257, 23);
			this->emailtxt->TabIndex = 7;
			this->emailtxt->TextChanged += gcnew System::EventHandler(this, &View::textBox7_TextChanged);
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::Color::Gainsboro;
			this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Poppins", 10));
			this->textBox11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(166)));
			this->textBox11->Location = System::Drawing::Point(367, 101);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(192, 25);
			this->textBox11->TabIndex = 11;
			this->textBox11->Text = L"Check-out:";
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::Gainsboro;
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Poppins", 10));
			this->textBox8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(166)));
			this->textBox8->Location = System::Drawing::Point(13, 250);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(192, 25);
			this->textBox8->TabIndex = 8;
			this->textBox8->Text = L"Payment Method:";
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::Color::Gainsboro;
			this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Poppins", 10));
			this->textBox10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(166)));
			this->textBox10->Location = System::Drawing::Point(367, 16);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(192, 25);
			this->textBox10->TabIndex = 10;
			this->textBox10->Text = L"Check-in:";
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Poppins", 14));
			this->button7->Location = System::Drawing::Point(32, 36);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(121, 47);
			this->button7->TabIndex = 2;
			this->button7->Text = L"< Back";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &View::button7_Click);
			// 
			// View
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->ClientSize = System::Drawing::Size(1062, 653);
			this->Controls->Add(this->container);
			this->Controls->Add(this->button7);
			this->Name = L"View";
			this->Text = L"View";
			this->Load += gcnew System::EventHandler(this, &View::View_Load);
			this->container->Panel1->ResumeLayout(false);
			this->container->Panel1->PerformLayout();
			this->container->Panel2->ResumeLayout(false);
			this->container->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->container))->EndInit();
			this->container->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

		String^ connstring = "Server=localhost;port=3306;database=appointment;uid=root;password=manman";
		MySqlConnection^ conn = gcnew MySqlConnection(connstring);

	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		obj->Show();
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ID_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	String^ Textval = ID->Text;
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT * from appointment_d WHERE CustomerID='"+Textval+"';", conn);
	MySqlDataReader^ myReader;
	try
	{
		conn->Open();
		myReader = cmdDataBase->ExecuteReader();

		if (myReader->Read()) {
			container->Panel2Collapsed = false;
			String^ NameVal = myReader->GetString("name");
			nametxt -> Text = NameVal;
			String^ EmailVal = myReader->GetString("email");
			emailtxt -> Text = EmailVal;
			String^ PNVal = myReader->GetString("Phonenumber");
			phonenumbertxt -> Text = PNVal;
			String^ PaymentVal = myReader->GetString("PaymentMethod");
			paymenttxt-> Text = PaymentVal;
			String^ RTVal = myReader->GetString("RoomType");
			roomtxt -> Text = RTVal;
			String^ In = myReader->GetMySqlDateTime("check_in").ToString();
			checkintxt->Text = In;
			String^ Out = myReader->GetMySqlDateTime("check_out").ToString();
			checkouttxt->Text = Out;
			
			
		}
		conn->Close();
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Read Failed");
	}







}
private: System::Void View_Load(System::Object^ sender, System::EventArgs^ e) {

	container->Panel2Collapsed = true;

}
private: System::Void name_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void splitContainer1_Panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void splitContainer1_Panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void splitContainer1_Panel1_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
