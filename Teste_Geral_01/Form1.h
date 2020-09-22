#pragma once
#include "Form_2.h"
#include "Form_3.h"

namespace ProjetoCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ editToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ viewToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exercíciosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ primeiroToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ segundoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ terceiroToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ gridBoxToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ projeto1ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ projeto2ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ projeto3ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nadaAEditarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aindaNãoTemNadaParaVerToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ perguntaAoProfToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ créditosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sairToolStripMenuItem;



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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sairToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nadaAEditarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aindaNãoTemNadaParaVerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exercíciosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->primeiroToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->segundoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->terceiroToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gridBoxToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->projeto1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->projeto2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->projeto3ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->perguntaAoProfToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->créditosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5)
				{
				this->fileToolStripMenuItem,
					this->editToolStripMenuItem, this->viewToolStripMenuItem, this->exercíciosToolStripMenuItem, this->helpToolStripMenuItem
				});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(642, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1)
				{
				this->sairToolStripMenuItem
				});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// sairToolStripMenuItem
			// 
			this->sairToolStripMenuItem->Name = L"sairToolStripMenuItem";
			this->sairToolStripMenuItem->Size = System::Drawing::Size(93, 22);
			this->sairToolStripMenuItem->Text = L"Sair";
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1)
				{
				this->nadaAEditarToolStripMenuItem
				});
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(39, 20);
			this->editToolStripMenuItem->Text = L"Edit";
			// 
			// nadaAEditarToolStripMenuItem
			// 
			this->nadaAEditarToolStripMenuItem->Name = L"nadaAEditarToolStripMenuItem";
			this->nadaAEditarToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->nadaAEditarToolStripMenuItem->Text = L"Nada a Editar";
			// 
			// viewToolStripMenuItem
			// 
			this->viewToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1)
				{
				this->aindaNãoTemNadaParaVerToolStripMenuItem
				});
			this->viewToolStripMenuItem->Name = L"viewToolStripMenuItem";
			this->viewToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->viewToolStripMenuItem->Text = L"View";
			// 
			// aindaNãoTemNadaParaVerToolStripMenuItem
			// 
			this->aindaNãoTemNadaParaVerToolStripMenuItem->Name = L"aindaNãoTemNadaParaVerToolStripMenuItem";
			this->aindaNãoTemNadaParaVerToolStripMenuItem->Size = System::Drawing::Size(226, 22);
			this->aindaNãoTemNadaParaVerToolStripMenuItem->Text = L"Ainda não tem nada para ver";
			// 
			// exercíciosToolStripMenuItem
			// 
			this->exercíciosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7)
				{
				this->primeiroToolStripMenuItem,
					this->segundoToolStripMenuItem, this->terceiroToolStripMenuItem, this->gridBoxToolStripMenuItem, this->projeto1ToolStripMenuItem,
					this->projeto2ToolStripMenuItem, this->projeto3ToolStripMenuItem
				});
			this->exercíciosToolStripMenuItem->Name = L"exercíciosToolStripMenuItem";
			this->exercíciosToolStripMenuItem->Size = System::Drawing::Size(70, 20);
			this->exercíciosToolStripMenuItem->Text = L"Exercícios";
			// 
			// primeiroToolStripMenuItem
			// 
			this->primeiroToolStripMenuItem->Name = L"primeiroToolStripMenuItem";
			this->primeiroToolStripMenuItem->Size = System::Drawing::Size(201, 22);
			this->primeiroToolStripMenuItem->Text = L"Alguns Itens da Toolbox";
			this->primeiroToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::primeiroToolStripMenuItem_Click);
			// 
			// segundoToolStripMenuItem
			// 
			this->segundoToolStripMenuItem->Name = L"segundoToolStripMenuItem";
			this->segundoToolStripMenuItem->Size = System::Drawing::Size(201, 22);
			this->segundoToolStripMenuItem->Text = L"Encomenda";
			this->segundoToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::segundoToolStripMenuItem_Click);
			// 
			// terceiroToolStripMenuItem
			// 
			this->terceiroToolStripMenuItem->Name = L"terceiroToolStripMenuItem";
			this->terceiroToolStripMenuItem->Size = System::Drawing::Size(201, 22);
			this->terceiroToolStripMenuItem->Text = L"ListBox";
			// 
			// gridBoxToolStripMenuItem
			// 
			this->gridBoxToolStripMenuItem->Name = L"gridBoxToolStripMenuItem";
			this->gridBoxToolStripMenuItem->Size = System::Drawing::Size(201, 22);
			this->gridBoxToolStripMenuItem->Text = L"GridBox";
			// 
			// projeto1ToolStripMenuItem
			// 
			this->projeto1ToolStripMenuItem->Name = L"projeto1ToolStripMenuItem";
			this->projeto1ToolStripMenuItem->Size = System::Drawing::Size(201, 22);
			this->projeto1ToolStripMenuItem->Text = L"Projeto 1";
			// 
			// projeto2ToolStripMenuItem
			// 
			this->projeto2ToolStripMenuItem->Name = L"projeto2ToolStripMenuItem";
			this->projeto2ToolStripMenuItem->Size = System::Drawing::Size(201, 22);
			this->projeto2ToolStripMenuItem->Text = L"Projeto 2";
			// 
			// projeto3ToolStripMenuItem
			// 
			this->projeto3ToolStripMenuItem->Name = L"projeto3ToolStripMenuItem";
			this->projeto3ToolStripMenuItem->Size = System::Drawing::Size(201, 22);
			this->projeto3ToolStripMenuItem->Text = L"Projeto 3";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2)
				{
				this->perguntaAoProfToolStripMenuItem,
					this->créditosToolStripMenuItem
				});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// perguntaAoProfToolStripMenuItem
			// 
			this->perguntaAoProfToolStripMenuItem->Name = L"perguntaAoProfToolStripMenuItem";
			this->perguntaAoProfToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->perguntaAoProfToolStripMenuItem->Text = L"Não há ajuda";
			this->perguntaAoProfToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::perguntaAoProfToolStripMenuItem_Click);
			// 
			// créditosToolStripMenuItem
			// 
			this->créditosToolStripMenuItem->Name = L"créditosToolStripMenuItem";
			this->créditosToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->créditosToolStripMenuItem->Text = L"Créditos";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(642, 585);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Resumo dos Exercícios de C++";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

			}
#pragma endregion
	private: System::Void perguntaAoProfToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
		{
		}
private: System::Void primeiroToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
	this->Hide();
	ProjetoCLR::Form_2 formS;
	formS.ShowDialog();
	this->Show();

	}
private: System::Void segundoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
	this->Hide();
	ProjetoCLR::Form_3 formS;
	formS.ShowDialog();
	this->Show();

	}
};
}
