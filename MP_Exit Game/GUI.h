#pragma once

namespace MPExitGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für GUI
	/// </summary>
	public ref class GUI : public System::Windows::Forms::Form
	{
	public:
		GUI(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~GUI()
		{
			if (components)
			{
				delete components;
			}
		}

	public: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::Label^  label2;
	public: System::Windows::Forms::PictureBox^  pictureBox2;
	private:
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	public:
	private: System::Windows::Forms::Label^  label3;
	public: System::Windows::Forms::PictureBox^  pictureBox5;
	private:
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::MenuStrip^  menuHead;
	private: System::Windows::Forms::ToolStripMenuItem^  menuHeadDatei;
	private: System::Windows::Forms::ToolStripMenuItem^  beendenToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  menuHeadProgramm;
	private: System::Windows::Forms::ToolStripMenuItem^  bilderToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  zelle1ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  zelle2ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  zelle3ToolStripMenuItem;




	private: System::Windows::Forms::Label^  Volume;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::Button^  button1;
	private: System::IO::Ports::SerialPort^  serialPort1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TrackBar^  VolumeBar;





	private: System::ComponentModel::IContainer^  components;



	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->menuHead = (gcnew System::Windows::Forms::MenuStrip());
			this->menuHeadDatei = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->beendenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuHeadProgramm = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bilderToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zelle1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zelle2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zelle3ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Volume = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->VolumeBar = (gcnew System::Windows::Forms::TrackBar());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->menuHead->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->VolumeBar))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Location = System::Drawing::Point(99, 57);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(427, 320);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::DimGray;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::LimeGreen;
			this->label1->Location = System::Drawing::Point(99, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 16);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Zelle 1";
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::DimGray;
			this->pictureBox4->Location = System::Drawing::Point(94, 38);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(437, 345);
			this->pictureBox4->TabIndex = 7;
			this->pictureBox4->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::DimGray;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::LimeGreen;
			this->label2->Location = System::Drawing::Point(566, 39);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 16);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Zelle 2";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox2->Location = System::Drawing::Point(566, 57);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(427, 320);
			this->pictureBox2->TabIndex = 9;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::DimGray;
			this->pictureBox3->Location = System::Drawing::Point(561, 38);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(437, 345);
			this->pictureBox3->TabIndex = 11;
			this->pictureBox3->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::DimGray;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::LimeGreen;
			this->label3->Location = System::Drawing::Point(566, 408);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(50, 16);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Zelle 3";
			// 
			// pictureBox5
			// 
			this->pictureBox5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox5->Location = System::Drawing::Point(566, 426);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(427, 320);
			this->pictureBox5->TabIndex = 12;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::DimGray;
			this->pictureBox6->Location = System::Drawing::Point(561, 407);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(437, 345);
			this->pictureBox6->TabIndex = 14;
			this->pictureBox6->TabStop = false;
			// 
			// menuHead
			// 
			this->menuHead->BackColor = System::Drawing::Color::DarkGreen;
			this->menuHead->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->menuHead->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->menuHeadDatei, this->menuHeadProgramm });
			this->menuHead->Location = System::Drawing::Point(0, 0);
			this->menuHead->Name = L"menuHead";
			this->menuHead->RenderMode = System::Windows::Forms::ToolStripRenderMode::Professional;
			this->menuHead->Size = System::Drawing::Size(1024, 24);
			this->menuHead->TabIndex = 15;
			this->menuHead->Text = L"menuStrip1";
			// 
			// menuHeadDatei
			// 
			this->menuHeadDatei->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->beendenToolStripMenuItem });
			this->menuHeadDatei->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->menuHeadDatei->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->menuHeadDatei->Name = L"menuHeadDatei";
			this->menuHeadDatei->Size = System::Drawing::Size(54, 20);
			this->menuHeadDatei->Text = L"Datei";
			this->menuHeadDatei->Click += gcnew System::EventHandler(this, &GUI::menuHeadDatei_Click);
			// 
			// beendenToolStripMenuItem
			// 
			this->beendenToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->beendenToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::DarkGreen;
			this->beendenToolStripMenuItem->Name = L"beendenToolStripMenuItem";
			this->beendenToolStripMenuItem->Size = System::Drawing::Size(132, 22);
			this->beendenToolStripMenuItem->Text = L"Beenden";
			this->beendenToolStripMenuItem->Click += gcnew System::EventHandler(this, &GUI::beendenToolStripMenuItem_Click);
			// 
			// menuHeadProgramm
			// 
			this->menuHeadProgramm->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->bilderToolStripMenuItem });
			this->menuHeadProgramm->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->menuHeadProgramm->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->menuHeadProgramm->Name = L"menuHeadProgramm";
			this->menuHeadProgramm->Size = System::Drawing::Size(87, 20);
			this->menuHeadProgramm->Text = L"Programm";
			// 
			// bilderToolStripMenuItem
			// 
			this->bilderToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->zelle1ToolStripMenuItem,
					this->zelle2ToolStripMenuItem, this->zelle3ToolStripMenuItem
			});
			this->bilderToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bilderToolStripMenuItem->Name = L"bilderToolStripMenuItem";
			this->bilderToolStripMenuItem->Size = System::Drawing::Size(110, 22);
			this->bilderToolStripMenuItem->Text = L"Bilder";
			// 
			// zelle1ToolStripMenuItem
			// 
			this->zelle1ToolStripMenuItem->Name = L"zelle1ToolStripMenuItem";
			this->zelle1ToolStripMenuItem->Size = System::Drawing::Size(115, 22);
			this->zelle1ToolStripMenuItem->Text = L"Zelle 1";
			this->zelle1ToolStripMenuItem->Click += gcnew System::EventHandler(this, &GUI::zelle1ToolStripMenuItem_Click_1);
			// 
			// zelle2ToolStripMenuItem
			// 
			this->zelle2ToolStripMenuItem->Name = L"zelle2ToolStripMenuItem";
			this->zelle2ToolStripMenuItem->Size = System::Drawing::Size(115, 22);
			this->zelle2ToolStripMenuItem->Text = L"Zelle 2";
			this->zelle2ToolStripMenuItem->Click += gcnew System::EventHandler(this, &GUI::zelle2ToolStripMenuItem_Click_1);
			// 
			// zelle3ToolStripMenuItem
			// 
			this->zelle3ToolStripMenuItem->Name = L"zelle3ToolStripMenuItem";
			this->zelle3ToolStripMenuItem->Size = System::Drawing::Size(115, 22);
			this->zelle3ToolStripMenuItem->Text = L"Zelle 3";
			this->zelle3ToolStripMenuItem->Click += gcnew System::EventHandler(this, &GUI::zelle3ToolStripMenuItem_Click_1);
			// 
			// Volume
			// 
			this->Volume->AutoSize = true;
			this->Volume->BackColor = System::Drawing::Color::Transparent;
			this->Volume->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Volume->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Volume->Location = System::Drawing::Point(21, 386);
			this->Volume->Name = L"Volume";
			this->Volume->Size = System::Drawing::Size(48, 15);
			this->Volume->TabIndex = 19;
			this->Volume->Text = L"Volume";
			// 
			// progressBar1
			// 
			this->progressBar1->ForeColor = System::Drawing::Color::LimeGreen;
			this->progressBar1->Location = System::Drawing::Point(24, 729);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(507, 23);
			this->progressBar1->TabIndex = 20;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->radioButton1->Location = System::Drawing::Point(431, 423);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(95, 20);
			this->radioButton1->TabIndex = 21;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"radioButton1";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->radioButton2->Location = System::Drawing::Point(431, 463);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(95, 20);
			this->radioButton2->TabIndex = 22;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"radioButton2";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->radioButton3->Location = System::Drawing::Point(431, 502);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(95, 20);
			this->radioButton3->TabIndex = 23;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"radioButton3";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkGreen;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->button1->FlatAppearance->BorderSize = 2;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(24, 661);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(158, 33);
			this->button1->TabIndex = 24;
			this->button1->Text = L"Spielstart";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &GUI::timer1_Tick_1);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Cursor = System::Windows::Forms::Cursors::No;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox1->Location = System::Drawing::Point(24, 700);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(507, 23);
			this->textBox1->TabIndex = 25;
			this->textBox1->Text = L"Statusmeldungen";
			// 
			// VolumeBar
			// 
			this->VolumeBar->BackColor = System::Drawing::Color::DarkGreen;
			this->VolumeBar->CausesValidation = false;
			this->VolumeBar->LargeChange = 20;
			this->VolumeBar->Location = System::Drawing::Point(24, 38);
			this->VolumeBar->Maximum = 100;
			this->VolumeBar->Minimum = 1;
			this->VolumeBar->Name = L"VolumeBar";
			this->VolumeBar->Orientation = System::Windows::Forms::Orientation::Vertical;
			this->VolumeBar->Size = System::Drawing::Size(45, 345);
			this->VolumeBar->SmallChange = 10;
			this->VolumeBar->TabIndex = 18;
			this->VolumeBar->TickFrequency = 10;
			this->VolumeBar->TickStyle = System::Windows::Forms::TickStyle::Both;
			this->VolumeBar->Value = 10;
			this->VolumeBar->Scroll += gcnew System::EventHandler(this, &GUI::trackBar2_Scroll);
			// 
			// GUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InfoText;
			this->ClientSize = System::Drawing::Size(1024, 768);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->Volume);
			this->Controls->Add(this->VolumeBar);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->menuHead);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"GUI";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Jailbreak";
			this->TopMost = true;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->menuHead->ResumeLayout(false);
			this->menuHead->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->VolumeBar))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void menuHeadDatei_Click(System::Object^  sender, System::EventArgs^  e) {
}
	private: System::Void beendenToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		if (MessageBox::Show("Soll das Spiel beendet werden?", "Spiel beenden", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{
			this->Close();
		}
	}
private: System::Void zelle1ToolStripMenuItem_Click_1(System::Object^  sender, System::EventArgs^  e) {
	OpenFileDialog^ bildZelle1 = gcnew OpenFileDialog;

	if (bildZelle1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		pictureBox1->ImageLocation = bildZelle1->FileName;
	}
}
private: System::Void zelle2ToolStripMenuItem_Click_1(System::Object^  sender, System::EventArgs^  e) {
	OpenFileDialog^ bildZelle2 = gcnew OpenFileDialog;

	if (bildZelle2->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		pictureBox2->ImageLocation = bildZelle2->FileName;
	}
}

private: System::Void zelle3ToolStripMenuItem_Click_1(System::Object^  sender, System::EventArgs^  e) {
	OpenFileDialog^ bildZelle3 = gcnew OpenFileDialog;

	if (bildZelle3->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		pictureBox5->ImageLocation = bildZelle3->FileName;
	}
}



private: System::Void trackBar2_Scroll(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void timer1_Tick_1(System::Object^  sender, System::EventArgs^  e) {
	
}
};
}
