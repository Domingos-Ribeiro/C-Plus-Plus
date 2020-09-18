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
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::ComboBox^ cbo_cidade;
	private: System::Windows::Forms::Label^ lbl_escolha;
	private: System::Windows::Forms::Button^ btn_escolha;

	private: System::Windows::Forms::TextBox^ txt_escolha;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_Resultado;


	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
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
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->cbo_cidade = (gcnew System::Windows::Forms::ComboBox());
			this->lbl_escolha = (gcnew System::Windows::Forms::Label());
			this->btn_escolha = (gcnew System::Windows::Forms::Button());
			this->txt_escolha = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_Resultado = (gcnew System::Windows::Forms::TextBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// cbo_cidade
			// 
			this->cbo_cidade->FormattingEnabled = true;
			this->cbo_cidade->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Braga", L"Porto", L"Coimbra" });
			this->cbo_cidade->Location = System::Drawing::Point(214, 99);
			this->cbo_cidade->Name = L"cbo_cidade";
			this->cbo_cidade->Size = System::Drawing::Size(89, 21);
			this->cbo_cidade->TabIndex = 0;
			this->cbo_cidade->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// lbl_escolha
			// 
			this->lbl_escolha->AutoSize = true;
			this->lbl_escolha->Location = System::Drawing::Point(65, 102);
			this->lbl_escolha->Name = L"lbl_escolha";
			this->lbl_escolha->Size = System::Drawing::Size(90, 13);
			this->lbl_escolha->TabIndex = 1;
			this->lbl_escolha->Text = L"Escolha a Cidade";
			// 
			// btn_escolha
			// 
			this->btn_escolha->Location = System::Drawing::Point(68, 179);
			this->btn_escolha->Name = L"btn_escolha";
			this->btn_escolha->Size = System::Drawing::Size(235, 23);
			this->btn_escolha->TabIndex = 2;
			this->btn_escolha->Text = L"Qual a Cidade escolhida";
			this->btn_escolha->UseVisualStyleBackColor = true;
			this->btn_escolha->Click += gcnew System::EventHandler(this, &Form1::btn_escolha_Click);
			// 
			// txt_escolha
			// 
			this->txt_escolha->Location = System::Drawing::Point(106, 244);
			this->txt_escolha->Name = L"txt_escolha";
			this->txt_escolha->Size = System::Drawing::Size(100, 20);
			this->txt_escolha->TabIndex = 3;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(68, 349);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(235, 20);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(65, 321);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(244, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"O que foi selecionado na ComboBox aparece aqui";
			// 
			// txt_Resultado
			// 
			this->txt_Resultado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_Resultado->Location = System::Drawing::Point(654, 197);
			this->txt_Resultado->Name = L"txt_Resultado";
			this->txt_Resultado->Size = System::Drawing::Size(100, 38);
			this->txt_Resultado->TabIndex = 6;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"81", L"80", L"79", L"78", L"77", L"76", L"75",
					L"74", L"73", L"72", L"71", L"70"
			});
			this->comboBox2->Location = System::Drawing::Point(564, 123);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 8;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox2_SelectedIndexChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"90.5", L"90", L"89.5", L"89", L"88.5", L"88",
					L"87.5", L"87", L"86.5", L"86", L"85.5", L"85"
			});
			this->comboBox1->Location = System::Drawing::Point(691, 123);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 9;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged_1);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(654, 253);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 23);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Limpar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(654, 321);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 23);
			this->button2->TabIndex = 11;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(943, 480);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->txt_Resultado);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->txt_escolha);
			this->Controls->Add(this->btn_escolha);
			this->Controls->Add(this->lbl_escolha);
			this->Controls->Add(this->cbo_cidade);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
	
	{
		
	textBox1->Text = cbo_cidade->Text;

	}
	private: System::Void btn_escolha_Click(System::Object^ sender, System::EventArgs^ e) 
	
	{
		txt_escolha->Text = cbo_cidade->Text;


	}


private: System::Void nivel_2(System::Object^ sender, System::EventArgs^ e) 

	{

	}

private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{

	String^ s = "";
	String^ elementos_2;
	String^ elementos_1;
	

	elementos_2 == comboBox2->SelectedItem;
	elementos_1 == comboBox1->SelectedItem;

	
	//elementos_1 = elementos_2;
	s = elementos_2;
	
	if (elementos_2)
	{
		txt_Resultado->Text = s;
	}

	

}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 

{
	txt_Resultado->Text = "";
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 

{
	String^ s = "";
	int n_elementos = comboBox2->Items->Count;
	int maior = 0;
	


	int i;

	for (i = 0; i < n_elementos; i++)
	{

		if (Convert::ToInt16(comboBox2->Items[i]) > maior)
		{
			maior = Convert::ToInt16(comboBox2->Items[i]);
			s = (Convert::ToString(comboBox1->Items[i]));
		} 

		txt_Resultado->Text = Convert::ToString(s);
	}
}
private: System::Void comboBox1_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}
