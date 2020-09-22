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
	private: System::Windows::Forms::ComboBox^ cmb_pratos;
	protected:

	private: System::Windows::Forms::Button^ btn_calcular;
	private: System::Windows::Forms::TextBox^ txt_resultado;
	private: System::Windows::Forms::CheckBox^ ckb_azeitonas;
	private: System::Windows::Forms::CheckBox^ ckb_queijo;
	private: System::Windows::Forms::CheckBox^ ckb_pimentos;
	private: System::Windows::Forms::TextBox^ txt_qtd;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RadioButton^ rdb_sim;
	private: System::Windows::Forms::RadioButton^ rdb_nao;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;




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
			this->cmb_pratos = (gcnew System::Windows::Forms::ComboBox());
			this->btn_calcular = (gcnew System::Windows::Forms::Button());
			this->txt_resultado = (gcnew System::Windows::Forms::TextBox());
			this->ckb_azeitonas = (gcnew System::Windows::Forms::CheckBox());
			this->ckb_queijo = (gcnew System::Windows::Forms::CheckBox());
			this->ckb_pimentos = (gcnew System::Windows::Forms::CheckBox());
			this->txt_qtd = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->rdb_sim = (gcnew System::Windows::Forms::RadioButton());
			this->rdb_nao = (gcnew System::Windows::Forms::RadioButton());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->SuspendLayout();
			// 
			// cmb_pratos
			// 
			this->cmb_pratos->FormattingEnabled = true;
			this->cmb_pratos->Items->AddRange(gcnew cli::array< System::Object^  >(3)
				{
				L"Margarida", L"Napolitana", L"Anchova"
				});
			this->cmb_pratos->Location = System::Drawing::Point(6, 78);
			this->cmb_pratos->Name = L"cmb_pratos";
			this->cmb_pratos->Size = System::Drawing::Size(121, 21);
			this->cmb_pratos->TabIndex = 0;
			this->cmb_pratos->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// btn_calcular
			// 
			this->btn_calcular->Location = System::Drawing::Point(34, 19);
			this->btn_calcular->Name = L"btn_calcular";
			this->btn_calcular->Size = System::Drawing::Size(75, 23);
			this->btn_calcular->TabIndex = 1;
			this->btn_calcular->Text = L"Calcular";
			this->btn_calcular->UseVisualStyleBackColor = true;
			this->btn_calcular->Click += gcnew System::EventHandler(this, &Form1::btn_calcular_Click);
			// 
			// txt_resultado
			// 
			this->txt_resultado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_resultado->Location = System::Drawing::Point(231, 19);
			this->txt_resultado->Name = L"txt_resultado";
			this->txt_resultado->Size = System::Drawing::Size(83, 23);
			this->txt_resultado->TabIndex = 2;
			this->txt_resultado->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// ckb_azeitonas
			// 
			this->ckb_azeitonas->AutoSize = true;
			this->ckb_azeitonas->Location = System::Drawing::Point(13, 20);
			this->ckb_azeitonas->Name = L"ckb_azeitonas";
			this->ckb_azeitonas->Size = System::Drawing::Size(72, 17);
			this->ckb_azeitonas->TabIndex = 3;
			this->ckb_azeitonas->Text = L"Azeitonas";
			this->ckb_azeitonas->UseVisualStyleBackColor = true;
			this->ckb_azeitonas->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// ckb_queijo
			// 
			this->ckb_queijo->AutoSize = true;
			this->ckb_queijo->Location = System::Drawing::Point(13, 60);
			this->ckb_queijo->Name = L"ckb_queijo";
			this->ckb_queijo->Size = System::Drawing::Size(83, 17);
			this->ckb_queijo->TabIndex = 4;
			this->ckb_queijo->Text = L"Queijo Extra";
			this->ckb_queijo->UseVisualStyleBackColor = true;
			// 
			// ckb_pimentos
			// 
			this->ckb_pimentos->AutoSize = true;
			this->ckb_pimentos->Location = System::Drawing::Point(14, 100);
			this->ckb_pimentos->Name = L"ckb_pimentos";
			this->ckb_pimentos->Size = System::Drawing::Size(69, 17);
			this->ckb_pimentos->TabIndex = 5;
			this->ckb_pimentos->Text = L"Pimentos";
			this->ckb_pimentos->UseVisualStyleBackColor = true;
			// 
			// txt_qtd
			// 
			this->txt_qtd->Location = System::Drawing::Point(48, 144);
			this->txt_qtd->Name = L"txt_qtd";
			this->txt_qtd->Size = System::Drawing::Size(32, 20);
			this->txt_qtd->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(31, 124);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Quantidade";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(5, 19);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(132, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Tem Cartão de Desconto\?";
			// 
			// rdb_sim
			// 
			this->rdb_sim->AutoSize = true;
			this->rdb_sim->Location = System::Drawing::Point(200, 17);
			this->rdb_sim->Name = L"rdb_sim";
			this->rdb_sim->Size = System::Drawing::Size(42, 17);
			this->rdb_sim->TabIndex = 9;
			this->rdb_sim->TabStop = true;
			this->rdb_sim->Text = L"Sim";
			this->rdb_sim->UseVisualStyleBackColor = true;
			// 
			// rdb_nao
			// 
			this->rdb_nao->AutoSize = true;
			this->rdb_nao->Location = System::Drawing::Point(285, 17);
			this->rdb_nao->Name = L"rdb_nao";
			this->rdb_nao->Size = System::Drawing::Size(45, 17);
			this->rdb_nao->TabIndex = 10;
			this->rdb_nao->TabStop = true;
			this->rdb_nao->Text = L"Não";
			this->rdb_nao->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(141, 450);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(133, 13);
			this->label3->TabIndex = 11;
			this->label3->Text = L"TABELA DE PREÇOS:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(6, 57);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(121, 13);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Escolha a sua Pizza";
			this->label4->Click += gcnew System::EventHandler(this, &Form1::label4_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Controls->Add(this->cmb_pratos);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->txt_qtd);
			this->groupBox1->Location = System::Drawing::Point(24, 42);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(357, 179);
			this->groupBox1->TabIndex = 14;
			this->groupBox1->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(197, 23);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(95, 13);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Adicione Extras";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->ckb_azeitonas);
			this->groupBox2->Controls->Add(this->ckb_queijo);
			this->groupBox2->Controls->Add(this->ckb_pimentos);
			this->groupBox2->Location = System::Drawing::Point(156, 38);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(181, 125);
			this->groupBox2->TabIndex = 14;
			this->groupBox2->TabStop = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(128, 104);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(46, 13);
			this->label8->TabIndex = 8;
			this->label8->Text = L"+ 2.00 €";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(128, 60);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(46, 13);
			this->label7->TabIndex = 7;
			this->label7->Text = L"+ 1.00 €";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(128, 20);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(46, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"+ 1.00 €";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Controls->Add(this->rdb_sim);
			this->groupBox3->Controls->Add(this->rdb_nao);
			this->groupBox3->Location = System::Drawing::Point(24, 259);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(356, 44);
			this->groupBox3->TabIndex = 15;
			this->groupBox3->TabStop = false;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->btn_calcular);
			this->groupBox4->Controls->Add(this->txt_resultado);
			this->groupBox4->Location = System::Drawing::Point(25, 346);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(355, 54);
			this->groupBox4->TabIndex = 16;
			this->groupBox4->TabStop = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(139, 330);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(139, 13);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Calcule o valor a pagar";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->label12);
			this->groupBox5->Controls->Add(this->label11);
			this->groupBox5->Controls->Add(this->label10);
			this->groupBox5->Location = System::Drawing::Point(28, 466);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(353, 57);
			this->groupBox5->TabIndex = 18;
			this->groupBox5->TabStop = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(250, 25);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(94, 13);
			this->label12->TabIndex = 2;
			this->label12->Text = L"Anchovas - 8.00 €";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(128, 26);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(97, 13);
			this->label11->TabIndex = 1;
			this->label11->Text = L"Napolitana - 7.00 €";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(7, 26);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(93, 13);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Margarida - 6.00 €";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(160, 19);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(72, 20);
			this->label13->TabIndex = 19;
			this->label13->Text = L"PIZZAS";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(409, 564);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Encomenda";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

			}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
	{

	}
	private: System::Void btn_calcular_Click(System::Object^ sender, System::EventArgs^ e) 
	{	//	Variáveis
		int preco_da_pizza = 0;
		float total = 0;
		int qde = 0;
		float desconto = 0.1;

		if (cmb_pratos->Text == "")
		{
			MessageBox::Show("Por favor Escolha a Pizza primeiro.");
			return;
		}

		if (txt_qtd->Text == "")
		{
			MessageBox::Show("Por favor digite a quantidade de Pizzas que pretende.");
			return ;
		}
		

		//buscar o preço da pizza escolhida
		if (cmb_pratos->Text == "Margarida")
		{
			preco_da_pizza = 6;
		}
		if (cmb_pratos->Text == "Napolitana")
		{
			preco_da_pizza = 7;
		}
		if (cmb_pratos->Text == "Anchova")
		{
			preco_da_pizza = 8;
		}

	

		//buscar a quantidade
		qde = Convert::ToInt16(txt_qtd->Text);
		

		total = preco_da_pizza * qde;

		//extras
		if (ckb_azeitonas->Checked == true)
		{
			total = total + 1 * qde;
		}

		if (ckb_queijo->Checked == true)
		{
			total = total + 1 * qde;
		}

		if (ckb_pimentos->Checked == true)
		{
			total = total + 2 * qde;
		}

		//desconto
		if (rdb_sim->Checked == true)
		{
			total = total - total * desconto;
		}

	

		//devolver o total no formulário
		txt_resultado->Text = Convert::ToString(total) + " €";
		
	
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
