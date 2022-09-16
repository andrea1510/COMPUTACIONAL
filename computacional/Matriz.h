#pragma once
#include "Matriz5x5.h"
#include "Matriz6x6.h"
#include "Matriz7x7.h"
#include "Matriz8x8.h"
#include "Matriz9x9.h"
#include "Matriz10x10.h"
#include "Matriz11x11.h"
#include "Matriz12x12.h"
#include "Matriz13x13.h"
#include "Matriz14x14.h"
#include "Matriz15x15.h"

namespace computacional {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Matriz
	/// </summary>
	public ref class Matriz : public System::Windows::Forms::Form
	{
	public:
		Matriz(void)
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
		~Matriz()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ autogenerado;
	private: System::Windows::Forms::Button^ rellenar;
	private: System::Windows::Forms::ComboBox^ comboBox1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Matriz::typeid));
			this->autogenerado = (gcnew System::Windows::Forms::Button());
			this->rellenar = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// autogenerado
			// 
			this->autogenerado->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"autogenerado.BackgroundImage")));
			this->autogenerado->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->autogenerado->Location = System::Drawing::Point(160, 299);
			this->autogenerado->Name = L"autogenerado";
			this->autogenerado->Size = System::Drawing::Size(358, 199);
			this->autogenerado->TabIndex = 0;
			this->autogenerado->UseMnemonic = false;
			this->autogenerado->UseVisualStyleBackColor = true;
			this->autogenerado->Click += gcnew System::EventHandler(this, &Matriz::autogenerado_Click);
			// 
			// rellenar
			// 
			this->rellenar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rellenar.BackgroundImage")));
			this->rellenar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->rellenar->Location = System::Drawing::Point(637, 299);
			this->rellenar->Name = L"rellenar";
			this->rellenar->Size = System::Drawing::Size(358, 199);
			this->rellenar->TabIndex = 1;
			this->rellenar->UseVisualStyleBackColor = true;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"5", L"6", L"7", L"8", L"9", L"10", L"11", L"12",
					L"13", L"14", L"15"
			});
			this->comboBox1->Location = System::Drawing::Point(519, 210);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(120, 21);
			this->comboBox1->TabIndex = 2;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Matriz::comboBox1_SelectedIndexChanged);
			// 
			// Matriz
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(1149, 647);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->rellenar);
			this->Controls->Add(this->autogenerado);
			this->DoubleBuffered = true;
			this->Name = L"Matriz";
			this->Text = L"Matriz";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void autogenerado_Click(System::Object^ sender, System::EventArgs^ e) {
		int dimension;
		switch (comboBox1->SelectedIndex) {
		case 0: {
			dimension = 5;
			computacional::Matriz5x5^ abrir_5x5 = gcnew computacional::Matriz5x5();
			this->Visible = false;
			abrir_5x5->ShowDialog();
		}
			  break;
		case 1: {
			dimension = 6;
			computacional::Matriz6x6^ abrir_6x6 = gcnew computacional::Matriz6x6();
			this->Visible = false;
			abrir_6x6->ShowDialog();
		}
			  break;
		case 2: {
			dimension = 7;
			computacional::Matriz7x7^ abrir_7x7 = gcnew computacional::Matriz7x7();
			this->Visible = false;
			abrir_7x7->ShowDialog();
		}
			  break;
		case 3: {
			dimension = 8;
			computacional::Matriz8x8^ abrir_8x8 = gcnew computacional::Matriz8x8();
			this->Visible = false;
			abrir_8x8->ShowDialog();
		}
			  break;
		case 4: {
			dimension = 9;
			computacional::Matriz9x9^ abrir_9x9 = gcnew computacional::Matriz9x9();
			this->Visible = false;
			abrir_9x9->ShowDialog();
		}
			  break;
		case 5: {
			dimension = 10;
			computacional::Matriz10x10^ abrir_10x10 = gcnew computacional::Matriz10x10();
			this->Visible = false;
			abrir_10x10->ShowDialog();
		}
			  break;
		case 6: {
			dimension = 11;
			computacional::Matriz11x11^ abrir_11x11 = gcnew computacional::Matriz11x11();
			this->Visible = false;
			abrir_11x11->ShowDialog();
		}
			  break;
		case 7: {
			dimension = 12;
			computacional::Matriz12x12^ abrir_12x12 = gcnew computacional::Matriz12x12();
			this->Visible = false;
			abrir_12x12->ShowDialog();
		}
			  break;
		case 8: {
			dimension = 13;
			computacional::Matriz13x13^ abrir_13x13 = gcnew computacional::Matriz13x13();
			this->Visible = false;
			abrir_13x13->ShowDialog();
		}
			  break;
		case 9: {
			dimension = 14;
			computacional::Matriz14x14^ abrir_14x14 = gcnew computacional::Matriz14x14();
			this->Visible = false;
			abrir_14x14->ShowDialog();
		}
			  break;
		case 10: {
			dimension = 15;
			computacional::Matriz15x15^ abrir_15x15 = gcnew computacional::Matriz15x15();
			this->Visible = false;
			abrir_15x15->ShowDialog();
		}
			   break;
		default: MessageBox::Show("Elija una opcion");
		}
	}
};
}
