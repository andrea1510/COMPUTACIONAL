#pragma once

namespace computacional {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Matriz9x9
	/// </summary>
	public ref class Matriz9x9 : public System::Windows::Forms::Form
	{
	public:
		Matriz9x9(void)
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
		~Matriz9x9()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::TextBox^ textBox18;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Matriz9x9::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(184, 145);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(45, 44);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(241, 145);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(45, 44);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(241, 201);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(45, 44);
			this->textBox3->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(298, 201);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(45, 44);
			this->textBox4->TabIndex = 3;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(354, 201);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(45, 44);
			this->textBox5->TabIndex = 4;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(298, 258);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(45, 44);
			this->textBox6->TabIndex = 5;
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(354, 258);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(45, 44);
			this->textBox7->TabIndex = 6;
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(354, 314);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(45, 44);
			this->textBox8->TabIndex = 7;
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->Location = System::Drawing::Point(578, 533);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(45, 44);
			this->textBox9->TabIndex = 8;
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox10->Location = System::Drawing::Point(577, 478);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(45, 44);
			this->textBox10->TabIndex = 9;
			// 
			// textBox11
			// 
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox11->Location = System::Drawing::Point(522, 479);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(45, 44);
			this->textBox11->TabIndex = 10;
			// 
			// textBox12
			// 
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox12->Location = System::Drawing::Point(577, 424);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(45, 44);
			this->textBox12->TabIndex = 11;
			// 
			// textBox13
			// 
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox13->Location = System::Drawing::Point(522, 424);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(45, 44);
			this->textBox13->TabIndex = 12;
			// 
			// textBox14
			// 
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox14->Location = System::Drawing::Point(466, 424);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(45, 44);
			this->textBox14->TabIndex = 13;
			// 
			// textBox15
			// 
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox15->Location = System::Drawing::Point(466, 370);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(45, 44);
			this->textBox15->TabIndex = 14;
			// 
			// textBox16
			// 
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox16->Location = System::Drawing::Point(411, 370);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(45, 44);
			this->textBox16->TabIndex = 15;
			// 
			// textBox17
			// 
			this->textBox17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox17->Location = System::Drawing::Point(411, 314);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(45, 44);
			this->textBox17->TabIndex = 16;
			// 
			// textBox18
			// 
			this->textBox18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox18->Location = System::Drawing::Point(466, 314);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(45, 44);
			this->textBox18->TabIndex = 17;
			// 
			// Matriz9x9
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(1149, 647);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->DoubleBuffered = true;
			this->Name = L"Matriz9x9";
			this->Text = L"Matriz9x9";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
