#pragma once

namespace computacional {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Matriz6x6
	/// </summary>
	public ref class Matriz6x6 : public System::Windows::Forms::Form
	{
	public:
		Matriz6x6(void)
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
		~Matriz6x6()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ AB;
	private: System::Windows::Forms::TextBox^ AC;
	private: System::Windows::Forms::TextBox^ AD;
	private: System::Windows::Forms::TextBox^ BC;
	private: System::Windows::Forms::TextBox^ BD;
	private: System::Windows::Forms::TextBox^ BE;
	private: System::Windows::Forms::TextBox^ CD;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Matriz6x6::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->AB = (gcnew System::Windows::Forms::TextBox());
			this->AC = (gcnew System::Windows::Forms::TextBox());
			this->AD = (gcnew System::Windows::Forms::TextBox());
			this->BC = (gcnew System::Windows::Forms::TextBox());
			this->BD = (gcnew System::Windows::Forms::TextBox());
			this->BE = (gcnew System::Windows::Forms::TextBox());
			this->CD = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->Location = System::Drawing::Point(744, 198);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(254, 144);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			// 
			// AB
			// 
			this->AB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AB->Location = System::Drawing::Point(257, 202);
			this->AB->Name = L"AB";
			this->AB->Size = System::Drawing::Size(51, 47);
			this->AB->TabIndex = 1;
			// 
			// AC
			// 
			this->AC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AC->Location = System::Drawing::Point(334, 202);
			this->AC->Name = L"AC";
			this->AC->Size = System::Drawing::Size(51, 47);
			this->AC->TabIndex = 2;
			// 
			// AD
			// 
			this->AD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AD->Location = System::Drawing::Point(410, 202);
			this->AD->Name = L"AD";
			this->AD->Size = System::Drawing::Size(51, 47);
			this->AD->TabIndex = 3;
			// 
			// BC
			// 
			this->BC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BC->Location = System::Drawing::Point(334, 277);
			this->BC->Name = L"BC";
			this->BC->Size = System::Drawing::Size(51, 47);
			this->BC->TabIndex = 4;
			// 
			// BD
			// 
			this->BD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BD->Location = System::Drawing::Point(410, 277);
			this->BD->Name = L"BD";
			this->BD->Size = System::Drawing::Size(51, 47);
			this->BD->TabIndex = 5;
			// 
			// BE
			// 
			this->BE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BE->Location = System::Drawing::Point(488, 277);
			this->BE->Name = L"BE";
			this->BE->Size = System::Drawing::Size(51, 47);
			this->BE->TabIndex = 6;
			// 
			// CD
			// 
			this->CD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CD->Location = System::Drawing::Point(410, 351);
			this->CD->Name = L"CD";
			this->CD->Size = System::Drawing::Size(51, 47);
			this->CD->TabIndex = 7;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(564, 351);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(51, 47);
			this->textBox1->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(488, 426);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(51, 47);
			this->textBox2->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(564, 426);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(51, 47);
			this->textBox3->TabIndex = 10;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(564, 499);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(51, 47);
			this->textBox4->TabIndex = 11;
			// 
			// Matriz6x6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(1149, 647);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->CD);
			this->Controls->Add(this->BE);
			this->Controls->Add(this->BD);
			this->Controls->Add(this->BC);
			this->Controls->Add(this->AD);
			this->Controls->Add(this->AC);
			this->Controls->Add(this->AB);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->Name = L"Matriz6x6";
			this->Text = L"Matriz6x6";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
