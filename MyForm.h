#pragma once

namespace Lab12 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Label^ label4;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(474, 397);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 517);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(1611, 112);
			this->dataGridView1->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(12, 415);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(141, 80);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Вставить карту неправильной стороной";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(159, 415);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(141, 80);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Возврат карты";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(306, 415);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(141, 80);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Вставить карту првильной стороной";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(453, 415);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(141, 80);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Ввести неверный пин";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(600, 415);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(141, 80);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Кнопка \"Ввести пин повторно\"";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(747, 415);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(141, 80);
			this->button6->TabIndex = 8;
			this->button6->Text = L"Ввести верный пин";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(894, 415);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(141, 80);
			this->button7->TabIndex = 9;
			this->button7->Text = L"Снять деньги";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(1041, 415);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(141, 80);
			this->button8->TabIndex = 10;
			this->button8->Text = L"Кнопка \"Продолжить\"";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(1188, 415);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(141, 80);
			this->button9->TabIndex = 11;
			this->button9->Text = L"Внести деньги";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(1335, 415);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(141, 80);
			this->button10->TabIndex = 12;
			this->button10->Text = L"Кнопка \"Вернуться\"";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(1482, 415);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(141, 80);
			this->button11->TabIndex = 13;
			this->button11->Text = L"Закончить обслуживание";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(492, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(378, 240);
			this->label1->TabIndex = 14;
			this->label1->Text = resources->GetString(L"label1.Text");
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(890, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(521, 240);
			this->label2->TabIndex = 15;
			this->label2->Text = resources->GetString(L"label2.Text");
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(1265, 110);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(358, 160);
			this->label3->TabIndex = 16;
			this->label3->Text = resources->GetString(L"label3.Text");
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(668, 290);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(457, 26);
			this->textBox1->TabIndex = 17;
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->Location = System::Drawing::Point(1131, 293);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(141, 26);
			this->button12->TabIndex = 18;
			this->button12->Text = L"Выполнить";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->Location = System::Drawing::Point(1482, 356);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(141, 26);
			this->button13->TabIndex = 19;
			this->button13->Text = L"Очистить";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(492, 293);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(170, 20);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Введите строку из Х:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1638, 641);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->MinimumSize = System::Drawing::Size(1654, 605);
			this->Name = L"MyForm";
			this->Text = L"Банкомат (Литвинов МД)";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		S = 0; a = 1; b = 1;
		dataGridView1->Columns->Clear();
		dataGridView1->Columns->Add("column-1", "t");		//создание 1 столбца
		dataGridView1->Rows->Add("X");						//добавление строки X
		dataGridView1->Rows->Add("S");						//добавление строки S
		dataGridView1->Rows->Add("Y");						//добавление строки Y
		dataGridView1->Columns->Add("column-2", "0");		//создание 2 столбца
		dataGridView1[1, 1]->Value = "S0";					//внесение значения в ячейку 1-го столбца 1 строки
	}
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		S = 0; a = 1; b = 1;
		dataGridView1->Columns->Clear();
		dataGridView1->Columns->Add("column-1", "t");		//создание 1 столбца
		dataGridView1->Rows->Add("X");						//добавление строки X
		dataGridView1->Rows->Add("S");						//добавление строки S
		dataGridView1->Rows->Add("Y");						//добавление строки Y
		dataGridView1->Columns->Add("column-2", "0");		//создание 2 столбца
		dataGridView1[1, 1]->Value = "S0";					//внесение значения в ячейку 1-го столбца 1 строки
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		S = 0; a = 1; b = 1;
		dataGridView1->Columns->Clear();
		dataGridView1->Columns->Add("column-1", "t");		//создание 1 столбца
		dataGridView1->Rows->Add("X");						//добавление строки X
		dataGridView1->Rows->Add("S");						//добавление строки S
		dataGridView1->Rows->Add("Y");						//добавление строки Y
		dataGridView1->Columns->Add("column-2", "0");		//создание 2 столбца
		dataGridView1[1, 1]->Value = "S0";					//внесение значения в ячейку 1-го столбца 1 строки

		String^ s = textBox1->Text;							//строка из textBox1
		array <String^>^ word = s->Split(',', ' ', '.');	//массив слов
		for each (String ^ word2 in word) {
			if (word2 == "1")
				mili(1);
			if (word2 == "2")
				mili(2);
			if (word2 == "3")
				mili(3);
			if (word2 == "4")
				mili(4);
			if (word2 == "5")
				mili(5);
			if (word2 == "6")
				mili(6);
			if (word2 == "7")
				mili(7);
			if (word2 == "8")
				mili(8);
			if (word2 == "9")
				mili(9);
			if (word2 == "10")
				mili(10);
			if (word2 == "11")
				mili(11);
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		mili(1);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		mili(2);
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		mili(3);
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		mili(4);
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		mili(5);
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		mili(6);
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		mili(7);
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		mili(8);
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		mili(9);
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		mili(10);
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		mili(11);
	}
		  
		   int S = 0;		//состояние
		   int a = 1;		//строки
		   int b = 1;		//столбцы

		   //Автомат
		   void mili(char x) {
			   switch (S)
			   {
			   case 0:
				   switch (x)
				   {
				   case 1:
					   S = 1;
					   dataGridView1->ColumnCount += 1;				//Следующий столбик
					   dataGridView1[a + 1, b]->Value = "S" + S;	//S в ячейку a+1 столбца и b строки
					   dataGridView1[a, b + 1]->Value = "Y1";		//Y в ячейку a столбца и b+1 строки
					   dataGridView1[a, b - 1]->Value = "X1";		//X в ячейку a столбца и b-1 строки
					   a++;
					   break;
				   case 3:
					   S = 2;
					   dataGridView1->ColumnCount += 1;				//Следующий столбик
					   dataGridView1[a + 1, b]->Value = "S" + S;	//S в ячейку a+1 столбца и b строки
					   dataGridView1[a, b + 1]->Value = "Y3";		//Y в ячейку a столбца и b+1 строки
					   dataGridView1[a, b - 1]->Value = "X3";		//X в ячейку a столбца и b-1 строки
					   a++;
					   break;
				   default:
					   MessageBox::Show("Входной символ неверный");
					   break;
				   }	   
				   break;
			   case 1:
				   switch (x)
				   {
				   case 2:
					   S = 0;
					   dataGridView1->ColumnCount += 1;				//Следующий столбик
					   dataGridView1[a + 1, b]->Value = "S" + S;	//S в ячейку a+1 столбца и b строки
					   dataGridView1[a, b + 1]->Value = "Y2";		//Y в ячейку a столбца и b+1 строки
					   dataGridView1[a, b - 1]->Value = "X2";		//X в ячейку a столбца и b+1 строки
					   a++;
					   break;
				   default:
					   MessageBox::Show("Входной символ неверный");
					   break;
				   }	   
				   break;
			   case 2:
				   switch (x)
				   {
				   case 4:
					   S = 3;
					   dataGridView1->ColumnCount += 1;				//Следующий столбик
					   dataGridView1[a + 1, b]->Value = "S" + S;	//S в ячейку a+1 столбца и b строки
					   dataGridView1[a, b + 1]->Value = "Y4";		//Y в ячейку a столбца и b+1 строки
					   dataGridView1[a, b - 1]->Value = "X4";		//X в ячейку a столбца и b+1 строки
					   a++;
					   break;
				   case 6:
					   S = 4;
					   dataGridView1->ColumnCount += 1;				//Следующий столбик
					   dataGridView1[a + 1, b]->Value = "S" + S;	//S в ячейку a+1 столбца и b строки
					   dataGridView1[a, b + 1]->Value = "Y6";		//Y в ячейку a столбца и b+1 строки
					   dataGridView1[a, b - 1]->Value = "X6";		//X в ячейку a столбца и b+1 строки
					   a++;
					   break;
				   default:
					   MessageBox::Show("Входной символ неверный");
					   break;
				   }  
				   break;
			   case 3:
				   switch (x)
				   {
				   case 5:
					   S = 2;
					   dataGridView1->ColumnCount += 1;				//Следующий столбик
					   dataGridView1[a + 1, b]->Value = "S" + S;	//S в ячейку a+1 столбца и b строки
					   dataGridView1[a, b + 1]->Value = "Y5";		//Y в ячейку a столбца и b+1 строки
					   dataGridView1[a, b - 1]->Value = "X5";		//X в ячейку a столбца и b+1 строки
					   a++;
					   break;
				   default:
					   MessageBox::Show("Входной символ неверный");
					   break;
				   }					   
				   break;
			   case 4:
				   switch (x)
				   {
				   case 7:
					   S = 5;
					   dataGridView1->ColumnCount += 1;				//Следующий столбик
					   dataGridView1[a + 1, b]->Value = "S" + S;	//S в ячейку a+1 столбца и b строки
					   dataGridView1[a, b + 1]->Value = "Y7";		//Y в ячейку a столбца и b+1 строки
					   dataGridView1[a, b - 1]->Value = "X7";		//X в ячейку a столбца и b+1 строки
					   a++;
					   break;
				   case 9:
					   S = 6;
					   dataGridView1->ColumnCount += 1;				//Следующий столбик
					   dataGridView1[a + 1, b]->Value = "S" + S;	//S в ячейку a+1 столбца и b строки
					   dataGridView1[a, b + 1]->Value = "Y9";		//Y в ячейку a столбца и b+1 строки
					   dataGridView1[a, b - 1]->Value = "X9";		//X в ячейку a столбца и b+1 строки
					   a++;
					   break;
				   case 11:
					   S = 0;
					   dataGridView1->ColumnCount += 1;				//Следующий столбик
					   dataGridView1[a + 1, b]->Value = "S" + S;	//S в ячейку a+1 столбца и b строки
					   dataGridView1[a, b + 1]->Value = "Y11";		//Y в ячейку a столбца и b+1 строки
					   dataGridView1[a, b - 1]->Value = "X11";		//X в ячейку a столбца и b+1 строки
					   a++;
					   break;
				   default:
					   MessageBox::Show("Входной символ неверный");
					   break;
				   }
				   break;
			   case 5:
				   switch (x)
				   {
				   case 8:
					   S = 4;
					   dataGridView1->ColumnCount += 1;				//Следующий столбик
					   dataGridView1[a + 1, b]->Value = "S" + S;	//S в ячейку a+1 столбца и b строки
					   dataGridView1[a, b + 1]->Value = "Y8";		//Y в ячейку a столбца и b+1 строки
					   dataGridView1[a, b - 1]->Value = "X8";		//X в ячейку a столбца и b+1 строки
					   a++;
					   break;
				   default:
					   MessageBox::Show("Входной символ неверный");
					   break;
				   }
				   break;
			   case 6:
				   switch (x)
				   {
				   case 10:
					   S = 4;
					   dataGridView1->ColumnCount += 1;				//Следующий столбик
					   dataGridView1[a + 1, b]->Value = "S" + S;	//S в ячейку a+1 столбца и b строки
					   dataGridView1[a, b + 1]->Value = "Y10";		//Y в ячейку a столбца и b+1 строки
					   dataGridView1[a, b - 1]->Value = "X10";		//X в ячейку a столбца и b+1 строки
					   a++;
					   break;
				   default:
					   MessageBox::Show("Входной символ неверный");
					   break;
				   }
				   break;
			   default:
				   break;
			   }
		   }
	};
}