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
	/// Summary for Edit
	/// </summary>
	public ref class Edit : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		Edit(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Edit(Form^ obj1)
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
		~Edit()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::SplitContainer^ container;
	protected:

	protected:
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ ID;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ nametxt;
	private: System::Windows::Forms::Button^ btnupdate;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::ComboBox^ roomtype;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::ComboBox^ paymentmethod;
	private: System::Windows::Forms::TextBox^ emailtxt;
	private: System::Windows::Forms::DateTimePicker^ OUT;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::DateTimePicker^ IN;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ phonenumbertxt;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button7;



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
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->ID = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->nametxt = (gcnew System::Windows::Forms::TextBox());
			this->btnupdate = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->roomtype = (gcnew System::Windows::Forms::ComboBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->paymentmethod = (gcnew System::Windows::Forms::ComboBox());
			this->emailtxt = (gcnew System::Windows::Forms::TextBox());
			this->OUT = (gcnew System::Windows::Forms::DateTimePicker());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->IN = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->phonenumbertxt = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->container))->BeginInit();
			this->container->Panel1->SuspendLayout();
			this->container->Panel2->SuspendLayout();
			this->container->SuspendLayout();
			this->SuspendLayout();
			// 
			// container
			// 
			this->container->Dock = System::Windows::Forms::DockStyle::Fill;
			this->container->Location = System::Drawing::Point(0, 0);
			this->container->Name = L"container";
			// 
			// container.Panel1
			// 
			this->container->Panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(90)));
			this->container->Panel1->Controls->Add(this->button7);
			this->container->Panel1->Controls->Add(this->label1);
			this->container->Panel1->Controls->Add(this->panel7);
			this->container->Panel1->Controls->Add(this->textBox1);
			this->container->Panel1->Controls->Add(this->ID);
			this->container->Panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Edit::splitContainer1_Panel1_Paint);
			// 
			// container.Panel2
			// 
			this->container->Panel2->BackColor = System::Drawing::Color::Gainsboro;
			this->container->Panel2->Controls->Add(this->textBox2);
			this->container->Panel2->Controls->Add(this->nametxt);
			this->container->Panel2->Controls->Add(this->btnupdate);
			this->container->Panel2->Controls->Add(this->panel3);
			this->container->Panel2->Controls->Add(this->roomtype);
			this->container->Panel2->Controls->Add(this->textBox4);
			this->container->Panel2->Controls->Add(this->paymentmethod);
			this->container->Panel2->Controls->Add(this->emailtxt);
			this->container->Panel2->Controls->Add(this->OUT);
			this->container->Panel2->Controls->Add(this->panel4);
			this->container->Panel2->Controls->Add(this->IN);
			this->container->Panel2->Controls->Add(this->textBox6);
			this->container->Panel2->Controls->Add(this->textBox11);
			this->container->Panel2->Controls->Add(this->phonenumbertxt);
			this->container->Panel2->Controls->Add(this->textBox10);
			this->container->Panel2->Controls->Add(this->panel5);
			this->container->Panel2->Controls->Add(this->textBox9);
			this->container->Panel2->Controls->Add(this->textBox8);
			this->container->Size = System::Drawing::Size(1062, 653);
			this->container->SplitterDistance = 354;
			this->container->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Poppins Medium", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(21, 259);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(309, 40);
			this->label1->TabIndex = 45;
			this->label1->Text = L"Enter your reference ID:";
			// 
			// panel7
			// 
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel7->Location = System::Drawing::Point(37, 373);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(260, 2);
			this->panel7->TabIndex = 27;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(90)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Poppins", 10));
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(37, 321);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(192, 25);
			this->textBox1->TabIndex = 43;
			this->textBox1->Text = L"ID:";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Edit::textBox1_TextChanged);
			// 
			// ID
			// 
			this->ID->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ID->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ID->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->ID->Location = System::Drawing::Point(37, 352);
			this->ID->Name = L"ID";
			this->ID->Size = System::Drawing::Size(257, 15);
			this->ID->TabIndex = 44;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Gainsboro;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Poppins", 10));
			this->textBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(166)));
			this->textBox2->Location = System::Drawing::Point(32, 104);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(192, 25);
			this->textBox2->TabIndex = 24;
			this->textBox2->Text = L"Name:";
			// 
			// nametxt
			// 
			this->nametxt->BackColor = System::Drawing::Color::WhiteSmoke;
			this->nametxt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->nametxt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->nametxt->Location = System::Drawing::Point(32, 135);
			this->nametxt->Name = L"nametxt";
			this->nametxt->Size = System::Drawing::Size(257, 15);
			this->nametxt->TabIndex = 25;
			// 
			// btnupdate
			// 
			this->btnupdate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(166)));
			this->btnupdate->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnupdate->CausesValidation = false;
			this->btnupdate->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnupdate->Font = (gcnew System::Drawing::Font(L"Poppins", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnupdate->ForeColor = System::Drawing::Color::White;
			this->btnupdate->Location = System::Drawing::Point(90, 509);
			this->btnupdate->Name = L"btnupdate";
			this->btnupdate->Size = System::Drawing::Size(489, 55);
			this->btnupdate->TabIndex = 42;
			this->btnupdate->Text = L"Edit";
			this->btnupdate->UseVisualStyleBackColor = false;
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Location = System::Drawing::Point(32, 156);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(275, 2);
			this->panel3->TabIndex = 26;
			// 
			// roomtype
			// 
			this->roomtype->BackColor = System::Drawing::Color::WhiteSmoke;
			this->roomtype->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(3)));
			this->roomtype->FormattingEnabled = true;
			this->roomtype->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Standard Room", L"Deluxe Room", L"Executive Suite",
					L"Family Suite", L"Penthouse Suite"
			});
			this->roomtype->Location = System::Drawing::Point(32, 414);
			this->roomtype->Name = L"roomtype";
			this->roomtype->Size = System::Drawing::Size(275, 24);
			this->roomtype->TabIndex = 41;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::Gainsboro;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Poppins", 10));
			this->textBox4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(166)));
			this->textBox4->Location = System::Drawing::Point(357, 104);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(192, 25);
			this->textBox4->TabIndex = 29;
			this->textBox4->Text = L"Phone Number:";
			// 
			// paymentmethod
			// 
			this->paymentmethod->BackColor = System::Drawing::Color::WhiteSmoke;
			this->paymentmethod->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(3)));
			this->paymentmethod->FormattingEnabled = true;
			this->paymentmethod->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Debit/Credit Card", L"Cash" });
			this->paymentmethod->Location = System::Drawing::Point(32, 331);
			this->paymentmethod->Name = L"paymentmethod";
			this->paymentmethod->Size = System::Drawing::Size(275, 24);
			this->paymentmethod->TabIndex = 40;
			// 
			// emailtxt
			// 
			this->emailtxt->BackColor = System::Drawing::Color::WhiteSmoke;
			this->emailtxt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->emailtxt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->emailtxt->Location = System::Drawing::Point(32, 241);
			this->emailtxt->Name = L"emailtxt";
			this->emailtxt->Size = System::Drawing::Size(257, 15);
			this->emailtxt->TabIndex = 31;
			// 
			// OUT
			// 
			this->OUT->CalendarForeColor = System::Drawing::Color::WhiteSmoke;
			this->OUT->CalendarMonthBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(3)));
			this->OUT->Location = System::Drawing::Point(357, 414);
			this->OUT->Name = L"OUT";
			this->OUT->Size = System::Drawing::Size(304, 22);
			this->OUT->TabIndex = 39;
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Location = System::Drawing::Point(357, 156);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(275, 2);
			this->panel4->TabIndex = 28;
			// 
			// IN
			// 
			this->IN->CalendarForeColor = System::Drawing::Color::WhiteSmoke;
			this->IN->CalendarMonthBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(3)));
			this->IN->Location = System::Drawing::Point(357, 331);
			this->IN->Name = L"IN";
			this->IN->Size = System::Drawing::Size(304, 22);
			this->IN->TabIndex = 38;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::Gainsboro;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Poppins", 10));
			this->textBox6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(166)));
			this->textBox6->Location = System::Drawing::Point(32, 205);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(192, 25);
			this->textBox6->TabIndex = 32;
			this->textBox6->Text = L"Email:";
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::Color::Gainsboro;
			this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Poppins", 10));
			this->textBox11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(166)));
			this->textBox11->Location = System::Drawing::Point(357, 383);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(192, 25);
			this->textBox11->TabIndex = 37;
			this->textBox11->Text = L"Check-out:";
			// 
			// phonenumbertxt
			// 
			this->phonenumbertxt->BackColor = System::Drawing::Color::WhiteSmoke;
			this->phonenumbertxt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->phonenumbertxt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->phonenumbertxt->Location = System::Drawing::Point(357, 135);
			this->phonenumbertxt->Name = L"phonenumbertxt";
			this->phonenumbertxt->Size = System::Drawing::Size(257, 15);
			this->phonenumbertxt->TabIndex = 33;
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::Color::Gainsboro;
			this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Poppins", 10));
			this->textBox10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(166)));
			this->textBox10->Location = System::Drawing::Point(357, 300);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(192, 25);
			this->textBox10->TabIndex = 36;
			this->textBox10->Text = L"Check-in:";
			// 
			// panel5
			// 
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel5->Location = System::Drawing::Point(32, 262);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(275, 2);
			this->panel5->TabIndex = 30;
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::Color::Gainsboro;
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Poppins", 10));
			this->textBox9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(166)));
			this->textBox9->Location = System::Drawing::Point(32, 383);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(192, 25);
			this->textBox9->TabIndex = 35;
			this->textBox9->Text = L"Room type:";
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::Gainsboro;
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Poppins", 10));
			this->textBox8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(166)));
			this->textBox8->Location = System::Drawing::Point(32, 300);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(192, 25);
			this->textBox8->TabIndex = 34;
			this->textBox8->Text = L"Payment Method:";
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Poppins", 14));
			this->button7->Location = System::Drawing::Point(28, 47);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(121, 47);
			this->button7->TabIndex = 46;
			this->button7->Text = L"< Back";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Edit::button7_Click_1);
			// 
			// Edit
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(3)));
			this->ClientSize = System::Drawing::Size(1062, 653);
			this->Controls->Add(this->container);
			this->Name = L"Edit";
			this->Text = L"Edit";
			this->Load += gcnew System::EventHandler(this, &Edit::Edit_Load);
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

	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	obj->Show();
}
private: System::Void ID_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ Textval = ID->Text;
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT * from appointment_d WHERE CustomerID='" + Textval + "';", conn);
	MySqlDataReader^ myReader;
	try
	{
		conn->Open();
		myReader = cmdDataBase->ExecuteReader();

		if (myReader->Read()) {

			container->Panel2Collapsed = false;
			String^ NameVal = myReader->GetString("name");
			nametxt->Text = NameVal;
			String^ EmailVal = myReader->GetString("email");
			emailtxt->Text = EmailVal;
			String^ PNVal = myReader->GetString("Phonenumber");
			phonenumbertxt->Text = PNVal;
			String^ PaymentVal = myReader->GetString("PaymentMethod");
			paymentmethod->Text = PaymentVal;
			String^ RTVal = myReader->GetString("RoomType");
			roomtype->Text = RTVal;
			String^ In = myReader->GetMySqlDateTime("check_in").ToString();
			IN->Text = In;
			String^ Out = myReader->GetMySqlDateTime("check_out").ToString();
			OUT->Text = Out;


		}
		conn->Close();
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Read Failed");
	}
}
private: System::Void btnupdate_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ Textval = ID->Text;
	String^ name = nametxt->Text;
	String^ email = emailtxt->Text;
	String^ payment_method = paymentmethod->Text;
	String^ room_type = roomtype->Text;
	String^ phonenumber = phonenumbertxt->Text;
	String^ In = IN->Value.ToString("yyyy-MM-dd");
	String^ Out = OUT->Value.ToString("yyyy-MM-dd");
	
	conn->Open();
	MySqlCommand^ cmd = gcnew MySqlCommand("UPDATE appointment_d SET name=@name,email=@email, Phonenumber=@phonenumber, PaymentMethod=@paymentmethod, RoomType=@roomtype, check_in=@IN, check_out=@OUT WHERE CustomerID='" + Textval + "';", conn);

	

	try
	{
		cmd->Parameters->AddWithValue("@name", name);
		cmd->Parameters->AddWithValue("@email", email);
		cmd->Parameters->AddWithValue("@phonenumber", phonenumber);
		cmd->Parameters->AddWithValue("@paymentmethod", payment_method);
		cmd->Parameters->AddWithValue("@roomtype", room_type);
		cmd->Parameters->AddWithValue("@IN", In);
		cmd->Parameters->AddWithValue("@OUT", Out);

		cmd->ExecuteNonQuery();
		MessageBox::Show("Booking Succesfully Updated");
		conn->Close();
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Update Error");
	}


	



}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void splitContainer1_Panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void Edit_Load(System::Object^ sender, System::EventArgs^ e) {
	container->Panel2Collapsed = true;

}
private: System::Void button7_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	obj->Show();
}
};
}
