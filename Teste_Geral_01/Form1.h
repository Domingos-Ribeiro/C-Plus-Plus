#pragma once

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
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exercíciosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->primeiroToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->segundoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->terceiroToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gridBoxToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->projeto1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->projeto2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->projeto3ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(39, 20);
			this->editToolStripMenuItem->Text = L"Edit";
			// 
			// viewToolStripMenuItem
			// 
			this->viewToolStripMenuItem->Name = L"viewToolStripMenuItem";
			this->viewToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->viewToolStripMenuItem->Text = L"View";
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
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// primeiroToolStripMenuItem
			// 
			this->primeiroToolStripMenuItem->Name = L"primeiroToolStripMenuItem";
			this->primeiroToolStripMenuItem->Size = System::Drawing::Size(201, 22);
			this->primeiroToolStripMenuItem->Text = L"Alguns Itens da Toolbox";
			// 
			// segundoToolStripMenuItem
			// 
			this->segundoToolStripMenuItem->Name = L"segundoToolStripMenuItem";
			this->segundoToolStripMenuItem->Size = System::Drawing::Size(201, 22);
			this->segundoToolStripMenuItem->Text = L"Encomenda";
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
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(642, 585);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Janela Principal";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

			}
#pragma endregion
	};
}
