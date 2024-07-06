#pragma once

namespace user {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Booking
	/// </summary>
	public ref class Booking : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		Booking(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Booking(Form^ obj1)
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
		~Booking()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ BookButton;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerOUT;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerIN;
	private: System::Windows::Forms::ComboBox^ comboBoxRoom;
	private: System::Windows::Forms::ComboBox^ comboBoxPayment;
	private: System::Windows::Forms::TextBox^ textPhone;
	private: System::Windows::Forms::TextBox^ textEmail;
	private: System::Windows::Forms::TextBox^ textName;

	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Panel^ wrapper;

	protected:

















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Booking::typeid));
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->BookButton = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->dateTimePickerOUT = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePickerIN = (gcnew System::Windows::Forms::DateTimePicker());
			this->comboBoxRoom = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxPayment = (gcnew System::Windows::Forms::ComboBox());
			this->textPhone = (gcnew System::Windows::Forms::TextBox());
			this->textEmail = (gcnew System::Windows::Forms::TextBox());
			this->textName = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->wrapper = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->wrapper->SuspendLayout();
			this->SuspendLayout();
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Transparent;
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Poppins", 14));
			this->button7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(166)));
			this->button7->Location = System::Drawing::Point(57, 31);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(121, 47);
			this->button7->TabIndex = 3;
			this->button7->Text = L"< Back";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Booking::button7_Click);
			// 
			// BookButton
			// 
			this->BookButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(166)));
			this->BookButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->BookButton->CausesValidation = false;
			this->BookButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BookButton->Font = (gcnew System::Drawing::Font(L"Poppins", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BookButton->ForeColor = System::Drawing::Color::White;
			this->BookButton->Location = System::Drawing::Point(70, 489);
			this->BookButton->Name = L"BookButton";
			this->BookButton->Size = System::Drawing::Size(316, 55);
			this->BookButton->TabIndex = 16;
			this->BookButton->Text = L"Book Reservation";
			this->BookButton->UseVisualStyleBackColor = false;
			this->BookButton->Click += gcnew System::EventHandler(this, &Booking::BookButton_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->dateTimePickerOUT);
			this->panel1->Controls->Add(this->BookButton);
			this->panel1->Controls->Add(this->dateTimePickerIN);
			this->panel1->Controls->Add(this->comboBoxRoom);
			this->panel1->Controls->Add(this->comboBoxPayment);
			this->panel1->Controls->Add(this->textPhone);
			this->panel1->Controls->Add(this->textEmail);
			this->panel1->Controls->Add(this->textName);
			this->panel1->Controls->Add(this->textBox11);
			this->panel1->Controls->Add(this->textBox10);
			this->panel1->Controls->Add(this->textBox9);
			this->panel1->Controls->Add(this->textBox8);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->textBox6);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Location = System::Drawing::Point(557, 31);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(459, 569);
			this->panel1->TabIndex = 17;
			// 
			// dateTimePickerOUT
			// 
			this->dateTimePickerOUT->CalendarForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->dateTimePickerOUT->CalendarMonthBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(3)));
			this->dateTimePickerOUT->Location = System::Drawing::Point(74, 423);
			this->dateTimePickerOUT->Name = L"dateTimePickerOUT";
			this->dateTimePickerOUT->Size = System::Drawing::Size(304, 22);
			this->dateTimePickerOUT->TabIndex = 24;
			// 
			// dateTimePickerIN
			// 
			this->dateTimePickerIN->CalendarForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->dateTimePickerIN->CalendarMonthBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(3)));
			this->dateTimePickerIN->Location = System::Drawing::Point(74, 364);
			this->dateTimePickerIN->Name = L"dateTimePickerIN";
			this->dateTimePickerIN->Size = System::Drawing::Size(304, 22);
			this->dateTimePickerIN->TabIndex = 23;
			// 
			// comboBoxRoom
			// 
			this->comboBoxRoom->BackColor = System::Drawing::Color::Silver;
			this->comboBoxRoom->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(3)));
			this->comboBoxRoom->FormattingEnabled = true;
			this->comboBoxRoom->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Standard Room", L"Deluxe Room", L"Executive Suite",
					L"Family Suite", L"Penthouse Suite"
			});
			this->comboBoxRoom->Location = System::Drawing::Point(242, 263);
			this->comboBoxRoom->Name = L"comboBoxRoom";
			this->comboBoxRoom->Size = System::Drawing::Size(160, 24);
			this->comboBoxRoom->TabIndex = 22;
			// 
			// comboBoxPayment
			// 
			this->comboBoxPayment->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->comboBoxPayment->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(3)));
			this->comboBoxPayment->FormattingEnabled = true;
			this->comboBoxPayment->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Debit/Credit Card", L"Cash" });
			this->comboBoxPayment->Location = System::Drawing::Point(29, 263);
			this->comboBoxPayment->Name = L"comboBoxPayment";
			this->comboBoxPayment->Size = System::Drawing::Size(160, 24);
			this->comboBoxPayment->TabIndex = 21;
			// 
			// textPhone
			// 
			this->textPhone->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->textPhone->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textPhone->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F));
			this->textPhone->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->textPhone->Location = System::Drawing::Point(29, 187);
			this->textPhone->Name = L"textPhone";
			this->textPhone->Size = System::Drawing::Size(241, 27);
			this->textPhone->TabIndex = 20;
			// 
			// textEmail
			// 
			this->textEmail->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->textEmail->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textEmail->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F));
			this->textEmail->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->textEmail->Location = System::Drawing::Point(242, 79);
			this->textEmail->Name = L"textEmail";
			this->textEmail->Size = System::Drawing::Size(192, 27);
			this->textEmail->TabIndex = 19;
			// 
			// textName
			// 
			this->textName->AccessibleName = L"";
			this->textName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->textName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textName->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->textName->Location = System::Drawing::Point(29, 79);
			this->textName->Name = L"textName";
			this->textName->Size = System::Drawing::Size(192, 27);
			this->textName->TabIndex = 18;
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::Color::White;
			this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Poppins", 10));
			this->textBox11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(166)));
			this->textBox11->Location = System::Drawing::Point(155, 395);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(103, 25);
			this->textBox11->TabIndex = 12;
			this->textBox11->Text = L"Check-out:";
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::Color::White;
			this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Poppins", 10));
			this->textBox10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(166)));
			this->textBox10->Location = System::Drawing::Point(157, 335);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(94, 25);
			this->textBox10->TabIndex = 11;
			this->textBox10->Text = L"Check-in:";
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::Color::White;
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Poppins", 10));
			this->textBox9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(166)));
			this->textBox9->Location = System::Drawing::Point(242, 232);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(136, 25);
			this->textBox9->TabIndex = 10;
			this->textBox9->Text = L"Room type:";
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::White;
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Poppins", 10));
			this->textBox8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(166)));
			this->textBox8->Location = System::Drawing::Point(29, 232);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(160, 25);
			this->textBox8->TabIndex = 9;
			this->textBox8->Text = L"Payment Method:";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::White;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Poppins", 10));
			this->textBox4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(166)));
			this->textBox4->Location = System::Drawing::Point(29, 147);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(192, 25);
			this->textBox4->TabIndex = 8;
			this->textBox4->Text = L"Phone Number:";
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::White;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Poppins", 10));
			this->textBox6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(166)));
			this->textBox6->Location = System::Drawing::Point(242, 41);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(86, 25);
			this->textBox6->TabIndex = 7;
			this->textBox6->Text = L"Email:";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::White;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Poppins", 10));
			this->textBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
				static_cast<System::Int32>(static_cast<System::Byte>(166)));
			this->textBox2->Location = System::Drawing::Point(29, 41);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(97, 25);
			this->textBox2->TabIndex = 2;
			this->textBox2->Text = L"Name:";
			// 
			// wrapper
			// 
			this->wrapper->BackColor = System::Drawing::Color::Transparent;
			this->wrapper->Controls->Add(this->panel1);
			this->wrapper->Controls->Add(this->button7);
			this->wrapper->Location = System::Drawing::Point(2, 1);
			this->wrapper->Name = L"wrapper";
			this->wrapper->Size = System::Drawing::Size(1060, 654);
			this->wrapper->TabIndex = 18;
			// 
			// Booking
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(3)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1062, 653);
			this->Controls->Add(this->wrapper);
			this->Name = L"Booking";
			this->Text = L"Booking";
			this->Load += gcnew System::EventHandler(this, &Booking::Booking_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->wrapper->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		String^ connstring = "Server=localhost;port=3306;database=appointment;uid=root;password=manman";

		MySqlConnection^ conn = gcnew MySqlConnection(connstring);

	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		obj->Show();
	}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Booking_Load(System::Object^ sender, System::EventArgs^ e) {

	wrapper->BackColor = Color::FromArgb(100, 0, 0, 0);
	//Server = localhost
	//Port = 3306
	//Database Name = appointment
	//UID = root
	//Password = manman

	

	try {
		conn->Open();
		MessageBox::Show("Connection Succeeded");
		conn->Close();
	}
	catch (Exception^ e) {
		MessageBox::Show("Connection Error");
	}
}
private: System::Void BookButton_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ name = textName->Text;
	String^ email = textEmail->Text;
	String^ payment_method = comboBoxPayment -> Text;
	String^ room_type = comboBoxRoom->Text;
	String^ phonenumber = textPhone->Text;
	String^ In = dateTimePickerIN->Value.ToString("yyyy-MM-dd");
	String^ Out = dateTimePickerOUT->Value.ToString("yyyy-MM-dd");
	
	bool isValid = true;

	if (name->Trim()->Length <= 2) {
		MessageBox::Show("Please fill in the name");
			isValid = false;
	}
	if (email ->Trim()->Length <= 2) {
		MessageBox::Show("Please fill in the email");
		isValid = false;
	}
	if (payment_method->Trim()->Length <= 2) {
		MessageBox::Show("Please select Payment Method");
		isValid = false;
	}
	if (room_type->Trim()->Length <= 2) {
		MessageBox::Show("Please select room type");
		isValid = false;
	}
	if (phonenumber->Trim()->Length <= 2) {
		MessageBox::Show("Please fill in the Phone Number");
		isValid = false;
	}
	if (isValid) {
		conn->Open();

		String^ cmdString = "INSERT INTO appointment_d (name, email, PhoneNumber, PaymentMethod, RoomType,  check_in, check_out) VALUES(@name,@email,@phonenumber,@paymentmethod,@roomtype, @checkin,@checkout)";

		MySqlCommand^ cmd = gcnew MySqlCommand(cmdString, conn);

		cmd->Parameters->AddWithValue("@name", name);
		cmd->Parameters->AddWithValue("@email", email);
		cmd->Parameters->AddWithValue("@phonenumber", phonenumber);
		cmd->Parameters->AddWithValue("@paymentmethod", payment_method);
		cmd->Parameters->AddWithValue("@roomtype", room_type);
		cmd->Parameters->AddWithValue("@checkin", In);
		cmd->Parameters->AddWithValue("@checkout", Out);
		
		try {
			cmd->ExecuteNonQuery();
			MessageBox::Show("Booked successfully!");
			conn->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show("Insert Failed");
		}


	}
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

};
}
