#pragma once

namespace projagui1 {

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
	private: System::Windows::Forms::Button^  btnconfirma;
	protected: 

	private: System::Windows::Forms::CheckBox^  chkhot;
	private: System::Windows::Forms::ComboBox^  cmbtamanho;

	protected: 


	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::CheckBox^  chkbebida;

	private: System::Windows::Forms::Label^  lblmensagem;
	private: System::Windows::Forms::TextBox^  txbusuario;
	private: System::Windows::Forms::RadioButton^  rdbnutella;



	private: System::Windows::Forms::RadioButton^  rdbpure;

	private: System::Windows::Forms::RadioButton^  rdbfrango;

	private: System::Windows::Forms::PictureBox^  pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->btnconfirma = (gcnew System::Windows::Forms::Button());
			this->chkhot = (gcnew System::Windows::Forms::CheckBox());
			this->cmbtamanho = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->rdbnutella = (gcnew System::Windows::Forms::RadioButton());
			this->rdbpure = (gcnew System::Windows::Forms::RadioButton());
			this->rdbfrango = (gcnew System::Windows::Forms::RadioButton());
			this->chkbebida = (gcnew System::Windows::Forms::CheckBox());
			this->lblmensagem = (gcnew System::Windows::Forms::Label());
			this->txbusuario = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnconfirma
			// 
			this->btnconfirma->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->btnconfirma->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnconfirma.BackgroundImage")));
			this->btnconfirma->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnconfirma->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnconfirma->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnconfirma->Location = System::Drawing::Point(23, 206);
			this->btnconfirma->Name = L"btnconfirma";
			this->btnconfirma->Size = System::Drawing::Size(91, 44);
			this->btnconfirma->TabIndex = 0;
			this->btnconfirma->Text = L"ok";
			this->btnconfirma->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->btnconfirma->UseVisualStyleBackColor = false;
			this->btnconfirma->Click += gcnew System::EventHandler(this, &Form1::btnconfirma_Click);
			// 
			// chkhot
			// 
			this->chkhot->AutoSize = true;
			this->chkhot->Location = System::Drawing::Point(11, 117);
			this->chkhot->Name = L"chkhot";
			this->chkhot->Size = System::Drawing::Size(126, 17);
			this->chkhot->TabIndex = 1;
			this->chkhot->Text = L"pedido de hot catioro";
			this->chkhot->UseVisualStyleBackColor = true;
			// 
			// cmbtamanho
			// 
			this->cmbtamanho->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->cmbtamanho->FormattingEnabled = true;
			this->cmbtamanho->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"pequeno", L"médio", L"gigante", L"extra big hard G"});
			this->cmbtamanho->Location = System::Drawing::Point(12, 168);
			this->cmbtamanho->Name = L"cmbtamanho";
			this->cmbtamanho->Size = System::Drawing::Size(79, 21);
			this->cmbtamanho->TabIndex = 2;
			this->cmbtamanho->Text = L"   tamanho";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->rdbnutella);
			this->groupBox1->Controls->Add(this->rdbpure);
			this->groupBox1->Controls->Add(this->rdbfrango);
			this->groupBox1->Location = System::Drawing::Point(235, 64);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(95, 145);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"adicionais";
			// 
			// rdbnutella
			// 
			this->rdbnutella->AutoSize = true;
			this->rdbnutella->Location = System::Drawing::Point(4, 108);
			this->rdbnutella->Name = L"rdbnutella";
			this->rdbnutella->Size = System::Drawing::Size(56, 17);
			this->rdbnutella->TabIndex = 2;
			this->rdbnutella->TabStop = true;
			this->rdbnutella->Text = L"nutella";
			this->rdbnutella->UseVisualStyleBackColor = true;
			// 
			// rdbpure
			// 
			this->rdbpure->AutoSize = true;
			this->rdbpure->Location = System::Drawing::Point(4, 75);
			this->rdbpure->Name = L"rdbpure";
			this->rdbpure->Size = System::Drawing::Size(46, 17);
			this->rdbpure->TabIndex = 1;
			this->rdbpure->TabStop = true;
			this->rdbpure->Text = L"pure";
			this->rdbpure->UseVisualStyleBackColor = true;
			// 
			// rdbfrango
			// 
			this->rdbfrango->AutoSize = true;
			this->rdbfrango->Location = System::Drawing::Point(4, 43);
			this->rdbfrango->Name = L"rdbfrango";
			this->rdbfrango->Size = System::Drawing::Size(55, 17);
			this->rdbfrango->TabIndex = 0;
			this->rdbfrango->TabStop = true;
			this->rdbfrango->Text = L"frango";
			this->rdbfrango->UseVisualStyleBackColor = true;
			// 
			// chkbebida
			// 
			this->chkbebida->AutoSize = true;
			this->chkbebida->Location = System::Drawing::Point(11, 140);
			this->chkbebida->Name = L"chkbebida";
			this->chkbebida->Size = System::Drawing::Size(108, 17);
			this->chkbebida->TabIndex = 4;
			this->chkbebida->Text = L"pedido de bebida";
			this->chkbebida->UseVisualStyleBackColor = true;
			// 
			// lblmensagem
			// 
			this->lblmensagem->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblmensagem->Location = System::Drawing::Point(17, 18);
			this->lblmensagem->Name = L"lblmensagem";
			this->lblmensagem->Size = System::Drawing::Size(723, 39);
			this->lblmensagem->TabIndex = 5;
			this->lblmensagem->Text = L"bora comer, digite o que deseja retirar do seu dogão e escolha as opções\r\n ";
			// 
			// txbusuario
			// 
			this->txbusuario->Location = System::Drawing::Point(11, 76);
			this->txbusuario->Name = L"txbusuario";
			this->txbusuario->Size = System::Drawing::Size(142, 20);
			this->txbusuario->TabIndex = 6;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(417, 93);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(284, 179);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(742, 298);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->txbusuario);
			this->Controls->Add(this->lblmensagem);
			this->Controls->Add(this->chkbebida);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->cmbtamanho);
			this->Controls->Add(this->chkhot);
			this->Controls->Add(this->btnconfirma);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"Pedido de hot catioro";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnconfirma_Click(System::Object^  sender, System::EventArgs^  e) {
				 lblmensagem->Text="pedido confirmado, ";
				 if(chkhot->Checked)
					 lblmensagem->Text = lblmensagem->Text + "dogão, ";
				 if(chkbebida->Checked)
					 lblmensagem->Text = lblmensagem->Text +"";
			
				 lblmensagem->Text=lblmensagem->Text+cmbtamanho->SelectedItem->ToString();
				  lblmensagem->Text=lblmensagem->Text+" sem "+txbusuario->Text+ " com ";
				 if(rdbfrango->Checked)
					  lblmensagem->Text=lblmensagem->Text+ "frango.";
				  if(rdbpure->Checked)
					  lblmensagem->Text=lblmensagem->Text+ "pure.";
				   if(rdbnutella->Checked)
					  lblmensagem->Text=lblmensagem->Text+ "nutella.";

			 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 cmbtamanho->SelectedIndex=0;
		 }
};
}

