#pragma once

namespace ProjetoCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form_2
	/// </summary>
	public ref class Form_2 : public System::Windows::Forms::Form
	{
	public:
		Form_2(void)
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
		~Form_2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ txt_escolha;
	private: System::Windows::Forms::Button^ btn_escolha;
	private: System::Windows::Forms::Label^ lbl_escolha;
	private: System::Windows::Forms::ComboBox^ cbo_cidade;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txt_resultado_idade;
	private: System::Windows::Forms::TextBox^ txt_idade;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ txt_resultado;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ txt_nome;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TextBox^ txt_do_clube_que_entra;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::TextBox^ txt_clube_que_sai;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::TextBox^ txt_sim_ou_nao;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::TextBox^ txt_procurar;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::TextBox^ txt_contagem;
	private: System::Windows::Forms::TextBox^ txt_adiciona;

	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Label^ label8;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->txt_escolha = (gcnew System::Windows::Forms::TextBox());
			this->btn_escolha = (gcnew System::Windows::Forms::Button());
			this->lbl_escolha = (gcnew System::Windows::Forms::Label());
			this->cbo_cidade = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txt_resultado_idade = (gcnew System::Windows::Forms::TextBox());
			this->txt_idade = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->txt_resultado = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->txt_nome = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->txt_do_clube_que_entra = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->txt_clube_que_sai = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->txt_sim_ou_nao = (gcnew System::Windows::Forms::TextBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->txt_procurar = (gcnew System::Windows::Forms::TextBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->txt_contagem = (gcnew System::Windows::Forms::TextBox());
			this->txt_adiciona = (gcnew System::Windows::Forms::TextBox());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 73);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(245, 13);
			this->label1->TabIndex = 11;
			this->label1->Text = L"O que for selecionado na ComboBox aparece aqui";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(87, 92);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(111, 20);
			this->textBox1->TabIndex = 10;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt_escolha
			// 
			this->txt_escolha->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_escolha->Location = System::Drawing::Point(87, 264);
			this->txt_escolha->Name = L"txt_escolha";
			this->txt_escolha->Size = System::Drawing::Size(100, 21);
			this->txt_escolha->TabIndex = 9;
			this->txt_escolha->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txt_escolha->TextChanged += gcnew System::EventHandler(this, &Form_2::txt_escolha_TextChanged);
			// 
			// btn_escolha
			// 
			this->btn_escolha->Location = System::Drawing::Point(25, 223);
			this->btn_escolha->Name = L"btn_escolha";
			this->btn_escolha->Size = System::Drawing::Size(235, 23);
			this->btn_escolha->TabIndex = 8;
			this->btn_escolha->Text = L"Qual a Cidade escolhida";
			this->btn_escolha->UseVisualStyleBackColor = true;
			this->btn_escolha->Click += gcnew System::EventHandler(this, &Form_2::btn_escolha_Click);
			// 
			// lbl_escolha
			// 
			this->lbl_escolha->AutoSize = true;
			this->lbl_escolha->Location = System::Drawing::Point(22, 146);
			this->lbl_escolha->Name = L"lbl_escolha";
			this->lbl_escolha->Size = System::Drawing::Size(90, 13);
			this->lbl_escolha->TabIndex = 7;
			this->lbl_escolha->Text = L"Escolha a Cidade";
			// 
			// cbo_cidade
			// 
			this->cbo_cidade->FormattingEnabled = true;
			this->cbo_cidade->Items->AddRange(gcnew cli::array< System::Object^  >(3)
				{
				L"Braga", L"Porto", L"Coimbra"
				});
			this->cbo_cidade->Location = System::Drawing::Point(171, 143);
			this->cbo_cidade->Name = L"cbo_cidade";
			this->cbo_cidade->Size = System::Drawing::Size(89, 21);
			this->cbo_cidade->TabIndex = 6;
			this->cbo_cidade->SelectedIndexChanged += gcnew System::EventHandler(this, &Form_2::cbo_cidade_SelectedIndexChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->btn_escolha);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->cbo_cidade);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->lbl_escolha);
			this->groupBox1->Controls->Add(this->txt_escolha);
			this->groupBox1->Location = System::Drawing::Point(16, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(281, 309);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(10, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(253, 20);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Caixas de Texto e Botões - Parte 1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(27, 272);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(157, 13);
			this->label3->TabIndex = 33;
			this->label3->Text = L"Quantos anos tem a tua amiga\?";
			// 
			// txt_resultado_idade
			// 
			this->txt_resultado_idade->Location = System::Drawing::Point(331, 268);
			this->txt_resultado_idade->Name = L"txt_resultado_idade";
			this->txt_resultado_idade->Size = System::Drawing::Size(228, 20);
			this->txt_resultado_idade->TabIndex = 32;
			// 
			// txt_idade
			// 
			this->txt_idade->Location = System::Drawing::Point(190, 269);
			this->txt_idade->Name = L"txt_idade";
			this->txt_idade->Size = System::Drawing::Size(36, 20);
			this->txt_idade->TabIndex = 31;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(246, 266);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(60, 23);
			this->button6->TabIndex = 30;
			this->button6->Text = L"Ver";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form_2::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(468, 204);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(60, 23);
			this->button5->TabIndex = 29;
			this->button5->Text = L"Limpar";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(397, 204);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(60, 23);
			this->button4->TabIndex = 28;
			this->button4->Text = L"Somar";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(430, 151);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(64, 23);
			this->textBox5->TabIndex = 27;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(468, 100);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(60, 20);
			this->textBox4->TabIndex = 26;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(397, 100);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(60, 20);
			this->textBox3->TabIndex = 25;
			// 
			// txt_resultado
			// 
			this->txt_resultado->Location = System::Drawing::Point(32, 207);
			this->txt_resultado->Name = L"txt_resultado";
			this->txt_resultado->Size = System::Drawing::Size(108, 20);
			this->txt_resultado->TabIndex = 24;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(32, 175);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(108, 23);
			this->button3->TabIndex = 23;
			this->button3->Text = L"Clique aqui";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form_2::button3_Click);
			// 
			// txt_nome
			// 
			this->txt_nome->Location = System::Drawing::Point(30, 97);
			this->txt_nome->Name = L"txt_nome";
			this->txt_nome->Size = System::Drawing::Size(106, 20);
			this->txt_nome->TabIndex = 22;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(29, 81);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(109, 13);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Introduza o seu nome";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(204, 207);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(121, 20);
			this->textBox2->TabIndex = 20;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(204, 175);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(121, 23);
			this->button2->TabIndex = 19;
			this->button2->Text = L"Inglês";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form_2::button2_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(204, 113);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(121, 20);
			this->textBox6->TabIndex = 18;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(204, 84);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 23);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Português";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form_2::button1_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->txt_resultado_idade);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->button6);
			this->groupBox2->Controls->Add(this->txt_nome);
			this->groupBox2->Controls->Add(this->txt_idade);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->txt_resultado);
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->textBox6);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Location = System::Drawing::Point(322, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(578, 309);
			this->groupBox2->TabIndex = 34;
			this->groupBox2->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(138, 16);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(253, 20);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Caixas de Texto e Botões - Parte 2";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(440, 135);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(42, 13);
			this->label7->TabIndex = 21;
			this->label7->Text = L"TOTAL";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(394, 84);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(139, 13);
			this->label6->TabIndex = 21;
			this->label6->Text = L"Digite um n.º em cada caixa";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button12);
			this->groupBox3->Controls->Add(this->button7);
			this->groupBox3->Controls->Add(this->txt_do_clube_que_entra);
			this->groupBox3->Controls->Add(this->listBox1);
			this->groupBox3->Controls->Add(this->txt_clube_que_sai);
			this->groupBox3->Controls->Add(this->button8);
			this->groupBox3->Controls->Add(this->txt_sim_ou_nao);
			this->groupBox3->Controls->Add(this->button9);
			this->groupBox3->Controls->Add(this->txt_procurar);
			this->groupBox3->Controls->Add(this->button10);
			this->groupBox3->Controls->Add(this->button13);
			this->groupBox3->Controls->Add(this->button11);
			this->groupBox3->Controls->Add(this->txt_contagem);
			this->groupBox3->Controls->Add(this->txt_adiciona);
			this->groupBox3->Controls->Add(this->button14);
			this->groupBox3->Controls->Add(this->button15);
			this->groupBox3->Location = System::Drawing::Point(16, 353);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(884, 298);
			this->groupBox3->TabIndex = 35;
			this->groupBox3->TabStop = false;
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(179, 215);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(110, 58);
			this->button12->TabIndex = 44;
			this->button12->Text = L"Substituir";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form_2::button12_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(601, 249);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(264, 23);
			this->button7->TabIndex = 41;
			this->button7->Text = L"Remove os 5 últimos Clubes da ListBox";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form_2::button7_Click);
			// 
			// txt_do_clube_que_entra
			// 
			this->txt_do_clube_que_entra->Location = System::Drawing::Point(25, 253);
			this->txt_do_clube_que_entra->Name = L"txt_do_clube_que_entra";
			this->txt_do_clube_que_entra->Size = System::Drawing::Size(133, 20);
			this->txt_do_clube_que_entra->TabIndex = 43;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(338, 34);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(221, 238);
			this->listBox1->TabIndex = 13;
			// 
			// txt_clube_que_sai
			// 
			this->txt_clube_que_sai->Location = System::Drawing::Point(25, 215);
			this->txt_clube_que_sai->Name = L"txt_clube_que_sai";
			this->txt_clube_que_sai->Size = System::Drawing::Size(133, 20);
			this->txt_clube_que_sai->TabIndex = 42;
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(601, 201);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(264, 23);
			this->button8->TabIndex = 40;
			this->button8->Text = L"Remove os 5 primeiros Clubes";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form_2::button8_Click);
			// 
			// txt_sim_ou_nao
			// 
			this->txt_sim_ou_nao->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_sim_ou_nao->Location = System::Drawing::Point(245, 160);
			this->txt_sim_ou_nao->Name = L"txt_sim_ou_nao";
			this->txt_sim_ou_nao->Size = System::Drawing::Size(44, 20);
			this->txt_sim_ou_nao->TabIndex = 41;
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(601, 100);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(264, 23);
			this->button9->TabIndex = 39;
			this->button9->Text = L"Remove apenas o Clube escrito na TextBox";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form_2::button9_Click);
			// 
			// txt_procurar
			// 
			this->txt_procurar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_procurar->Location = System::Drawing::Point(25, 161);
			this->txt_procurar->Name = L"txt_procurar";
			this->txt_procurar->Size = System::Drawing::Size(87, 20);
			this->txt_procurar->TabIndex = 40;
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(601, 33);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(264, 23);
			this->button10->TabIndex = 38;
			this->button10->Text = L"Adiciona texto da TextBox para a ListBox";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form_2::button10_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(119, 158);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(120, 23);
			this->button13->TabIndex = 39;
			this->button13->Text = L"Existe na ListBox\?";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Form_2::button13_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(601, 149);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(264, 23);
			this->button11->TabIndex = 36;
			this->button11->Text = L"Preencher a ListBox com 15 Clubes";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form_2::button11_Click);
			// 
			// txt_contagem
			// 
			this->txt_contagem->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_contagem->Location = System::Drawing::Point(235, 98);
			this->txt_contagem->Name = L"txt_contagem";
			this->txt_contagem->Size = System::Drawing::Size(54, 23);
			this->txt_contagem->TabIndex = 38;
			this->txt_contagem->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt_adiciona
			// 
			this->txt_adiciona->Location = System::Drawing::Point(689, 68);
			this->txt_adiciona->Name = L"txt_adiciona";
			this->txt_adiciona->Size = System::Drawing::Size(83, 20);
			this->txt_adiciona->TabIndex = 37;
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(25, 98);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(204, 23);
			this->button14->TabIndex = 37;
			this->button14->Text = L"Contagem dos Clubes da ListBox";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Form_2::button14_Click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(25, 34);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(264, 23);
			this->button15->TabIndex = 36;
			this->button15->Text = L"Remover Todos os Nomes da ListBox";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Form_2::button15_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(350, 331);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(228, 25);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Exercícios com a ListBox";
			// 
			// Form_2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(922, 674);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label8);
			this->Name = L"Form_2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Toolbox Itens";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

			}
#pragma endregion
	private: System::Void txt_escolha_TextChanged(System::Object^ sender, System::EventArgs^ e)
		{
		}
private: System::Void btn_escolha_Click(System::Object^ sender, System::EventArgs^ e)
	{
	txt_escolha->Text = cbo_cidade->Text;
	}
private: System::Void cbo_cidade_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
	{
	textBox1->Text = cbo_cidade->Text;
	}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e)
	{
	int idade;

	idade = Convert::ToInt16(txt_idade->Text);

	if (idade >= 18)
		{
		txt_resultado_idade->Text = "Já pode tirar a carta de condução!";
		}
	else
		{

		txt_resultado_idade->Text = "Ainda é Menor de idade, só pode tirar a carta de bicicleta.";
		}
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
	{
	txt_resultado->Text = "Olá" + ", " + txt_nome->Text + "!";
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
	textBox6->Text = "Olá mundo!";
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
	textBox2->Text = "Hello Word!";
	}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e)
	{
	//Colocar nomes na listbox
	listBox1->Items->Add(txt_adiciona->Text);
	}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e)
	{
	listBox1->Items->Remove(txt_adiciona->Text);
	}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e)
	{
	//Colocar nomes na listbox
	//listBox1->Items->Add(txt_nome->Text);

	//também podemos usar o seguinte código
	//String^ s;
	//s = txt_nome->Text;
	//ltb_nomes->Items->Add(s);

	//inicializa com 29 equipas
	listBox1->Items->Add("Porto");
	listBox1->Items->Add("Estoril");
	listBox1->Items->Add("Braga");
	listBox1->Items->Add("Sporting");
	listBox1->Items->Add("Benfica");
	listBox1->Items->Add("Santa Clara");
	listBox1->Items->Add("Feirense");
	listBox1->Items->Add("Boavista");
	listBox1->Items->Add("Paços de Ferreira");
	listBox1->Items->Add("Moreirense");
	listBox1->Items->Add("Belenenses");
	listBox1->Items->Add("Tondela");
	listBox1->Items->Add("Académica");
	listBox1->Items->Add("Varzim");
	listBox1->Items->Add("Vizela");

	}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e)
	try //Evita exceções
	{
	//Remove 5 itens de uma só vez
	for (size_t i = 0; i < 5; i++)
		{
		listBox1->Items->RemoveAt(0);
		}
	}
	   catch (...)//Fecha o cilo do try
		   {

		   }
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e)
	try //Evita exceções
	{
	//Remove 5 itens de uma só vez
	for (size_t i = 0; i < 5; i++)
		{
		listBox1->Items->RemoveAt(0);
		}
	}
	   catch (...)//Fecha o cilo do try
		   {

		   }
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e)
	{
	//Apaga os nomes todos da listbox
	listBox1->Items->Clear();
	}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e)
	{
	//Contagem dos nomes da listbox
		//NOTA: Está a contar os "Nomes" sem texto
	txt_contagem->Text = Convert::ToString(listBox1->Items->Count);
	}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e)
	{
	if (listBox1->Items->Contains(txt_procurar->Text) == true)
		{
		txt_sim_ou_nao->Text = "Sim";
		}
	else
		{
		txt_sim_ou_nao->Text = "Não";
		}
	}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e)
	{
	if (listBox1->Items->Contains(txt_clube_que_sai->Text) == true)
		{
		int p;
		p = listBox1->Items->IndexOf(txt_clube_que_sai->Text);

		Windows::Forms::DialogResult dr = MessageBox::Show("\n" + "O" + " " + txt_clube_que_sai->Text + " " + "encontra-se na Posição n.º " + (Convert::ToString(p + 1)) + "\n" + "" + "\n" + "Tem a certeza que deseja Substituir o " + txt_clube_que_sai->Text + " pelo " + txt_do_clube_que_entra->Text, "Aviso", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);
		if (dr == Windows::Forms::DialogResult::Yes) listBox1->Items[p] = txt_do_clube_que_entra->Text;

		return;
		}
	else
		{
		MessageBox::Show("O nome do Clube digitado, não existe na ListBox");
		}
	}
};
}
