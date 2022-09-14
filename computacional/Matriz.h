#pragma once
#include "MatrizAleatoria.h"

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
		computacional::MatrizAleatoria^ abrir_aleatoria = gcnew computacional::MatrizAleatoria();
		this->Visible = false;
		abrir_aleatoria->ShowDialog();
	}
};
}
