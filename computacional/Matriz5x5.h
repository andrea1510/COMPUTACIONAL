#pragma once

namespace computacional {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Matriz5x5
	/// </summary>
	public ref class Matriz5x5 : public System::Windows::Forms::Form
	{
	public:
		Matriz5x5(void)
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
		~Matriz5x5()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ AB;
	private: System::Windows::Forms::TextBox^ AC;
	private: System::Windows::Forms::TextBox^ BC;
	private: System::Windows::Forms::TextBox^ BD;
	private: System::Windows::Forms::TextBox^ BE;
	private: System::Windows::Forms::TextBox^ CD;
	private: System::Windows::Forms::TextBox^ CE;
	private: System::Windows::Forms::TextBox^ DE;







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Matriz5x5::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->AB = (gcnew System::Windows::Forms::TextBox());
			this->AC = (gcnew System::Windows::Forms::TextBox());
			this->BC = (gcnew System::Windows::Forms::TextBox());
			this->BD = (gcnew System::Windows::Forms::TextBox());
			this->BE = (gcnew System::Windows::Forms::TextBox());
			this->CD = (gcnew System::Windows::Forms::TextBox());
			this->CE = (gcnew System::Windows::Forms::TextBox());
			this->DE = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->Location = System::Drawing::Point(765, 170);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(254, 144);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			// 
			// AB
			// 
			this->AB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AB->Location = System::Drawing::Point(297, 229);
			this->AB->Name = L"AB";
			this->AB->Size = System::Drawing::Size(49, 47);
			this->AB->TabIndex = 1;
			// 
			// AC
			// 
			this->AC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AC->Location = System::Drawing::Point(385, 229);
			this->AC->Name = L"AC";
			this->AC->Size = System::Drawing::Size(49, 47);
			this->AC->TabIndex = 2;
			// 
			// BC
			// 
			this->BC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BC->Location = System::Drawing::Point(385, 315);
			this->BC->Name = L"BC";
			this->BC->Size = System::Drawing::Size(49, 47);
			this->BC->TabIndex = 3;
			// 
			// BD
			// 
			this->BD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BD->Location = System::Drawing::Point(472, 315);
			this->BD->Name = L"BD";
			this->BD->Size = System::Drawing::Size(49, 47);
			this->BD->TabIndex = 4;
			// 
			// BE
			// 
			this->BE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BE->Location = System::Drawing::Point(561, 315);
			this->BE->Name = L"BE";
			this->BE->Size = System::Drawing::Size(49, 47);
			this->BE->TabIndex = 5;
			// 
			// CD
			// 
			this->CD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CD->Location = System::Drawing::Point(472, 401);
			this->CD->Name = L"CD";
			this->CD->Size = System::Drawing::Size(49, 47);
			this->CD->TabIndex = 6;
			// 
			// CE
			// 
			this->CE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CE->Location = System::Drawing::Point(561, 401);
			this->CE->Name = L"CE";
			this->CE->Size = System::Drawing::Size(49, 47);
			this->CE->TabIndex = 7;
			// 
			// DE
			// 
			this->DE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DE->Location = System::Drawing::Point(561, 486);
			this->DE->Name = L"DE";
			this->DE->Size = System::Drawing::Size(49, 47);
			this->DE->TabIndex = 8;
			// 
			// Matriz5x5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(1149, 647);
			this->Controls->Add(this->DE);
			this->Controls->Add(this->CE);
			this->Controls->Add(this->CD);
			this->Controls->Add(this->BE);
			this->Controls->Add(this->BD);
			this->Controls->Add(this->BC);
			this->Controls->Add(this->AC);
			this->Controls->Add(this->AB);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->Name = L"Matriz5x5";
			this->Text = L"Matriz5x5";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
