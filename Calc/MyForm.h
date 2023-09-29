#pragma once

namespace Calc {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button_one;
	private: System::Windows::Forms::Button^ button_two;
	private: System::Windows::Forms::Button^ button_three;
	private: System::Windows::Forms::Button^ button_four;
	private: System::Windows::Forms::Button^ button_five;
	private: System::Windows::Forms::Button^ button_six;
	private: System::Windows::Forms::Button^ button_seven;
	private: System::Windows::Forms::Button^ button_eight;
	private: System::Windows::Forms::Button^ button_nine;
	private: System::Windows::Forms::Button^ button_zero;
	private: System::Windows::Forms::Button^ button_plus;
	private: System::Windows::Forms::Button^ button_minus;
	private: System::Windows::Forms::Button^ button_multiplication;
	private: System::Windows::Forms::Button^ button_divide;
	private: System::Windows::Forms::Button^ button_equal;
	private: System::Windows::Forms::Button^ button_decimal;
	private: System::Windows::Forms::Button^ button_back_space;
	private: System::Windows::Forms::Button^ button_clear;
	private: System::Windows::Forms::Button^ button_pos_neg;















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button_one = (gcnew System::Windows::Forms::Button());
			this->button_two = (gcnew System::Windows::Forms::Button());
			this->button_three = (gcnew System::Windows::Forms::Button());
			this->button_four = (gcnew System::Windows::Forms::Button());
			this->button_five = (gcnew System::Windows::Forms::Button());
			this->button_six = (gcnew System::Windows::Forms::Button());
			this->button_seven = (gcnew System::Windows::Forms::Button());
			this->button_eight = (gcnew System::Windows::Forms::Button());
			this->button_nine = (gcnew System::Windows::Forms::Button());
			this->button_zero = (gcnew System::Windows::Forms::Button());
			this->button_plus = (gcnew System::Windows::Forms::Button());
			this->button_minus = (gcnew System::Windows::Forms::Button());
			this->button_multiplication = (gcnew System::Windows::Forms::Button());
			this->button_divide = (gcnew System::Windows::Forms::Button());
			this->button_equal = (gcnew System::Windows::Forms::Button());
			this->button_decimal = (gcnew System::Windows::Forms::Button());
			this->button_back_space = (gcnew System::Windows::Forms::Button());
			this->button_clear = (gcnew System::Windows::Forms::Button());
			this->button_pos_neg = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(229)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(11, 11);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(248, 80);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::only_numbers);
			// 
			// button_one
			// 
			this->button_one->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_one->Location = System::Drawing::Point(11, 95);
			this->button_one->Margin = System::Windows::Forms::Padding(2);
			this->button_one->Name = L"button_one";
			this->button_one->Size = System::Drawing::Size(80, 80);
			this->button_one->TabIndex = 1;
			this->button_one->Text = L"1";
			this->button_one->UseVisualStyleBackColor = true;
			this->button_one->Click += gcnew System::EventHandler(this, &MyForm::input_number);
			// 
			// button_two
			// 
			this->button_two->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_two->Location = System::Drawing::Point(95, 95);
			this->button_two->Margin = System::Windows::Forms::Padding(2);
			this->button_two->Name = L"button_two";
			this->button_two->Size = System::Drawing::Size(80, 80);
			this->button_two->TabIndex = 1;
			this->button_two->Text = L"2";
			this->button_two->UseVisualStyleBackColor = true;
			this->button_two->Click += gcnew System::EventHandler(this, &MyForm::input_number);
			// 
			// button_three
			// 
			this->button_three->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_three->Location = System::Drawing::Point(179, 95);
			this->button_three->Margin = System::Windows::Forms::Padding(2);
			this->button_three->Name = L"button_three";
			this->button_three->Size = System::Drawing::Size(80, 80);
			this->button_three->TabIndex = 1;
			this->button_three->Text = L"3";
			this->button_three->UseVisualStyleBackColor = true;
			this->button_three->Click += gcnew System::EventHandler(this, &MyForm::input_number);
			// 
			// button_four
			// 
			this->button_four->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_four->Location = System::Drawing::Point(11, 179);
			this->button_four->Margin = System::Windows::Forms::Padding(2);
			this->button_four->Name = L"button_four";
			this->button_four->Size = System::Drawing::Size(80, 80);
			this->button_four->TabIndex = 1;
			this->button_four->Text = L"4";
			this->button_four->UseVisualStyleBackColor = true;
			this->button_four->Click += gcnew System::EventHandler(this, &MyForm::input_number);
			// 
			// button_five
			// 
			this->button_five->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_five->Location = System::Drawing::Point(95, 179);
			this->button_five->Margin = System::Windows::Forms::Padding(2);
			this->button_five->Name = L"button_five";
			this->button_five->Size = System::Drawing::Size(80, 80);
			this->button_five->TabIndex = 1;
			this->button_five->Text = L"5";
			this->button_five->UseVisualStyleBackColor = true;
			this->button_five->Click += gcnew System::EventHandler(this, &MyForm::input_number);
			// 
			// button_six
			// 
			this->button_six->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_six->Location = System::Drawing::Point(179, 179);
			this->button_six->Margin = System::Windows::Forms::Padding(2);
			this->button_six->Name = L"button_six";
			this->button_six->Size = System::Drawing::Size(80, 80);
			this->button_six->TabIndex = 1;
			this->button_six->Text = L"6";
			this->button_six->UseVisualStyleBackColor = true;
			this->button_six->Click += gcnew System::EventHandler(this, &MyForm::input_number);
			// 
			// button_seven
			// 
			this->button_seven->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_seven->Location = System::Drawing::Point(11, 263);
			this->button_seven->Margin = System::Windows::Forms::Padding(2);
			this->button_seven->Name = L"button_seven";
			this->button_seven->Size = System::Drawing::Size(80, 80);
			this->button_seven->TabIndex = 1;
			this->button_seven->Text = L"7";
			this->button_seven->UseVisualStyleBackColor = true;
			this->button_seven->Click += gcnew System::EventHandler(this, &MyForm::input_number);
			// 
			// button_eight
			// 
			this->button_eight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_eight->Location = System::Drawing::Point(95, 263);
			this->button_eight->Margin = System::Windows::Forms::Padding(2);
			this->button_eight->Name = L"button_eight";
			this->button_eight->Size = System::Drawing::Size(80, 80);
			this->button_eight->TabIndex = 1;
			this->button_eight->Text = L"8";
			this->button_eight->UseVisualStyleBackColor = true;
			this->button_eight->Click += gcnew System::EventHandler(this, &MyForm::input_number);
			// 
			// button_nine
			// 
			this->button_nine->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_nine->Location = System::Drawing::Point(179, 263);
			this->button_nine->Margin = System::Windows::Forms::Padding(2);
			this->button_nine->Name = L"button_nine";
			this->button_nine->Size = System::Drawing::Size(80, 80);
			this->button_nine->TabIndex = 1;
			this->button_nine->Text = L"9";
			this->button_nine->UseVisualStyleBackColor = true;
			this->button_nine->Click += gcnew System::EventHandler(this, &MyForm::input_number);
			// 
			// button_zero
			// 
			this->button_zero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_zero->Location = System::Drawing::Point(95, 347);
			this->button_zero->Margin = System::Windows::Forms::Padding(2);
			this->button_zero->Name = L"button_zero";
			this->button_zero->Size = System::Drawing::Size(80, 80);
			this->button_zero->TabIndex = 1;
			this->button_zero->Text = L"0";
			this->button_zero->UseVisualStyleBackColor = true;
			this->button_zero->Click += gcnew System::EventHandler(this, &MyForm::input_number);
			// 
			// button_plus
			// 
			this->button_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_plus->Location = System::Drawing::Point(263, 95);
			this->button_plus->Margin = System::Windows::Forms::Padding(2);
			this->button_plus->Name = L"button_plus";
			this->button_plus->Size = System::Drawing::Size(80, 80);
			this->button_plus->TabIndex = 1;
			this->button_plus->Text = L"+";
			this->button_plus->UseVisualStyleBackColor = true;
			this->button_plus->Click += gcnew System::EventHandler(this, &MyForm::input_operator);
			// 
			// button_minus
			// 
			this->button_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_minus->Location = System::Drawing::Point(263, 179);
			this->button_minus->Margin = System::Windows::Forms::Padding(2);
			this->button_minus->Name = L"button_minus";
			this->button_minus->Size = System::Drawing::Size(80, 80);
			this->button_minus->TabIndex = 1;
			this->button_minus->Text = L"-";
			this->button_minus->UseVisualStyleBackColor = true;
			this->button_minus->Click += gcnew System::EventHandler(this, &MyForm::input_operator);
			// 
			// button_multiplication
			// 
			this->button_multiplication->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_multiplication->Location = System::Drawing::Point(263, 263);
			this->button_multiplication->Margin = System::Windows::Forms::Padding(2);
			this->button_multiplication->Name = L"button_multiplication";
			this->button_multiplication->Size = System::Drawing::Size(80, 80);
			this->button_multiplication->TabIndex = 1;
			this->button_multiplication->Text = L"x";
			this->button_multiplication->UseVisualStyleBackColor = true;
			this->button_multiplication->Click += gcnew System::EventHandler(this, &MyForm::input_operator);
			// 
			// button_divide
			// 
			this->button_divide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_divide->Location = System::Drawing::Point(263, 347);
			this->button_divide->Margin = System::Windows::Forms::Padding(2);
			this->button_divide->Name = L"button_divide";
			this->button_divide->Size = System::Drawing::Size(80, 80);
			this->button_divide->TabIndex = 1;
			this->button_divide->Text = L"/";
			this->button_divide->UseVisualStyleBackColor = true;
			this->button_divide->Click += gcnew System::EventHandler(this, &MyForm::input_operator);
			// 
			// button_equal
			// 
			this->button_equal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_equal->Location = System::Drawing::Point(179, 347);
			this->button_equal->Margin = System::Windows::Forms::Padding(2);
			this->button_equal->Name = L"button_equal";
			this->button_equal->Size = System::Drawing::Size(80, 80);
			this->button_equal->TabIndex = 1;
			this->button_equal->Text = L"=";
			this->button_equal->UseVisualStyleBackColor = true;
			this->button_equal->Click += gcnew System::EventHandler(this, &MyForm::input_equal);
			// 
			// button_decimal
			// 
			this->button_decimal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_decimal->Location = System::Drawing::Point(11, 347);
			this->button_decimal->Margin = System::Windows::Forms::Padding(2);
			this->button_decimal->Name = L"button_decimal";
			this->button_decimal->Size = System::Drawing::Size(80, 80);
			this->button_decimal->TabIndex = 1;
			this->button_decimal->Text = L".";
			this->button_decimal->UseVisualStyleBackColor = true;
			this->button_decimal->Click += gcnew System::EventHandler(this, &MyForm::input_decimal);
			// 
			// button_back_space
			// 
			this->button_back_space->Font = (gcnew System::Drawing::Font(L"Wingdings", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->button_back_space->Location = System::Drawing::Point(263, 11);
			this->button_back_space->Margin = System::Windows::Forms::Padding(2);
			this->button_back_space->Name = L"button_back_space";
			this->button_back_space->Size = System::Drawing::Size(80, 80);
			this->button_back_space->TabIndex = 1;
			this->button_back_space->Text = L"";
			this->button_back_space->UseVisualStyleBackColor = true;
			this->button_back_space->Click += gcnew System::EventHandler(this, &MyForm::input_back_space);
			// 
			// button_clear
			// 
			this->button_clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_clear->Location = System::Drawing::Point(11, 432);
			this->button_clear->Name = L"button_clear";
			this->button_clear->Size = System::Drawing::Size(248, 79);
			this->button_clear->TabIndex = 2;
			this->button_clear->Text = L"Clear";
			this->button_clear->UseVisualStyleBackColor = true;
			this->button_clear->Click += gcnew System::EventHandler(this, &MyForm::input_clear);
			// 
			// button_pos_neg
			// 
			this->button_pos_neg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_pos_neg->Location = System::Drawing::Point(264, 431);
			this->button_pos_neg->Margin = System::Windows::Forms::Padding(2);
			this->button_pos_neg->Name = L"button_pos_neg";
			this->button_pos_neg->Size = System::Drawing::Size(80, 80);
			this->button_pos_neg->TabIndex = 1;
			this->button_pos_neg->Text = L"±";
			this->button_pos_neg->UseVisualStyleBackColor = true;
			this->button_pos_neg->Click += gcnew System::EventHandler(this, &MyForm::input_pos_neg);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(229)));
			this->ClientSize = System::Drawing::Size(354, 516);
			this->Controls->Add(this->button_clear);
			this->Controls->Add(this->button_nine);
			this->Controls->Add(this->button_six);
			this->Controls->Add(this->button_pos_neg);
			this->Controls->Add(this->button_divide);
			this->Controls->Add(this->button_decimal);
			this->Controls->Add(this->button_equal);
			this->Controls->Add(this->button_zero);
			this->Controls->Add(this->button_multiplication);
			this->Controls->Add(this->button_eight);
			this->Controls->Add(this->button_minus);
			this->Controls->Add(this->button_five);
			this->Controls->Add(this->button_seven);
			this->Controls->Add(this->button_four);
			this->Controls->Add(this->button_three);
			this->Controls->Add(this->button_back_space);
			this->Controls->Add(this->button_plus);
			this->Controls->Add(this->button_two);
			this->Controls->Add(this->button_one);
			this->Controls->Add(this->textBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double first_number, second_number, result;
		String^ operators;
		bool calc = true;
	private: System::Void input_number(System::Object^ sender, System::EventArgs^ e) {
		Button^ numbers = safe_cast<Button^> (sender);

			if (textBox1->Text == "0" && calc==true) {
				textBox1->Text = numbers->Text;
			}
			else if(calc==true){
				textBox1->Text = textBox1->Text + numbers->Text;
			}
			else if(calc == false) {
				calc = true;
				first_number = 0;
				second_number = 0;
				result = 0;
				operators = "";
				textBox1->Text = numbers->Text;
				
			}
		
		 
	}
private: System::Void input_operator(System::Object^ sender, System::EventArgs^ e) {
	Button^ numbers_op = safe_cast<Button^> (sender);
	first_number = Double::Parse(textBox1->Text);

	operators = numbers_op->Text;
	textBox1->Text = "0";
	calc = true;
}
private: System::Void input_equal(System::Object^ sender, System::EventArgs^ e) {
	second_number = Double::Parse(textBox1->Text);
	if (calc == true) {
		if (second_number == 0) {
			textBox1->Text = "Undefined";
		}
		if (operators == "+") {
			result = first_number + second_number;
			textBox1->Text = System::Convert::ToString(result);
			calc = false;
		}
		else if (operators == "-") {
			result = first_number - second_number;
			textBox1->Text = System::Convert::ToString(result);
			calc = false;
		}
		else if (operators == "x") {
			result = first_number * second_number;
			textBox1->Text = System::Convert::ToString(result);
			calc = false;
		}
		else if (operators == "/") {
			result = first_number / second_number;
			textBox1->Text = System::Convert::ToString(result);
			calc = false;
		}
	}
}
private: System::Void input_back_space(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text->Length > 0 && calc==true) {
		textBox1->Text = textBox1->Text->Remove(textBox1->Text->Length -1,1);
	}
	if (textBox1->Text == "") {
		textBox1->Text = "0";
		calc = true;
	}
}
private: System::Void input_clear(System::Object^ sender, System::EventArgs^ e) {
	first_number = 0;
	second_number = 0;
	result = 0;
	calc = true;
	textBox1->Text = "0";
}
private: System::Void input_pos_neg(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "0" && !textBox1->Text->Contains("-") && calc==true) {
		textBox1->Text = "-" + textBox1->Text;
	}
	else if(textBox1->Text != "0" && calc==true) {
		textBox1->Text = textBox1->Text->Remove(0,1);
	}
}
private: System::Void input_decimal(System::Object^ sender, System::EventArgs^ e) {
	if (calc == true) {
		textBox1->Text = textBox1->Text + ".";
	}
	
}
private: System::Void only_numbers(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!Char::IsDigit(e->KeyChar)) {
		e->Handled = true;
	}
	else if (textBox1->Text->StartsWith("0")) {
		textBox1->Text = "";
	}
}
};
}
