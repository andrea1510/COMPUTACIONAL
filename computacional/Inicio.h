#pragma once
#include "Creditos.h"
#include "Matriz.h"

namespace computacional {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Inicio
	/// </summary>
	public ref class Inicio : public System::Windows::Forms::Form
	{
	public:
		Inicio(void)
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
		~Inicio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ empecemos;
	protected:

	private: System::Windows::Forms::Button^ creditos;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Inicio::typeid));
			this->empecemos = (gcnew System::Windows::Forms::Button());
			this->creditos = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// empecemos
			// 
			this->empecemos->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"empecemos.BackgroundImage")));
			this->empecemos->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->empecemos->Location = System::Drawing::Point(579, 489);
			this->empecemos->Name = L"empecemos";
			this->empecemos->Size = System::Drawing::Size(187, 102);
			this->empecemos->TabIndex = 0;
			this->empecemos->UseVisualStyleBackColor = true;
			this->empecemos->Click += gcnew System::EventHandler(this, &Inicio::empecemos_Click);
			// 
			// creditos
			// 
			this->creditos->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"creditos.BackgroundImage")));
			this->creditos->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->creditos->Location = System::Drawing::Point(342, 489);
			this->creditos->Name = L"creditos";
			this->creditos->Size = System::Drawing::Size(187, 102);
			this->creditos->TabIndex = 1;
			this->creditos->UseVisualStyleBackColor = true;
			this->creditos->Click += gcnew System::EventHandler(this, &Inicio::creditos_Click);
			// 
			// Inicio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(1149, 647);
			this->Controls->Add(this->creditos);
			this->Controls->Add(this->empecemos);
			this->DoubleBuffered = true;
			this->Name = L"Inicio";
			this->Text = L"Inicio";
			this->Load += gcnew System::EventHandler(this, &Inicio::Inicio_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void creditos_Click(System::Object^ sender, System::EventArgs^ e) {
		computacional::Creditos^ abrir_creditos = gcnew computacional::Creditos();
		this->Visible = false;
		abrir_creditos->ShowDialog();
		this->Visible = true;
	}
	private: System::Void empecemos_Click(System::Object^ sender, System::EventArgs^ e) {
		computacional::Matriz^ abrir_menu = gcnew computacional::Matriz();
		this->Visible = false;
		abrir_menu->ShowDialog();
		this->Visible = true;
	}
	private: System::Void Inicio_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
