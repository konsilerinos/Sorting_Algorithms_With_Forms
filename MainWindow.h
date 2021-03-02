#pragma once

namespace SortingAlgorithmsWithForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainWindow
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		MainWindow(void)
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
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:
	private: System::Windows::Forms::MenuStrip^ menuStrip1;










	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::TabControl^ arra;



	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::ToolStripMenuItem^ программаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ экспортКодаДляMatLabToolStripMenuItem;
	private: System::Windows::Forms::TabPage^ tabPage1;


	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;


	private: System::Windows::Forms::GroupBox^ groupBox2;






















	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::CheckBox^ checkBox10;
	private: System::Windows::Forms::CheckBox^ checkBox9;
	private: System::Windows::Forms::CheckBox^ checkBox8;
	private: System::Windows::Forms::CheckBox^ checkBox7;
	private: System::Windows::Forms::CheckBox^ checkBox6;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::DataGridView^ dataGridView2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::TabPage^ tabPage3;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::PictureBox^ pictureBox2;
private: System::Windows::Forms::ToolStripMenuItem^ руководствоToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ разработчикToolStripMenuItem;
private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::Button^ button10;
private: System::Windows::Forms::Button^ button8;

























































	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainWindow::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->программаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->экспортКодаДляMatLabToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->руководствоToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->разработчикToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->arra = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->checkBox10 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1->SuspendLayout();
			this->arra->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::White;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->программаToolStripMenuItem,
					this->руководствоToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1071, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// программаToolStripMenuItem
			// 
			this->программаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->экспортКодаДляMatLabToolStripMenuItem });
			this->программаToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->программаToolStripMenuItem->Name = L"программаToolStripMenuItem";
			this->программаToolStripMenuItem->Size = System::Drawing::Size(84, 20);
			this->программаToolStripMenuItem->Text = L"Программа";
			// 
			// экспортКодаДляMatLabToolStripMenuItem
			// 
			this->экспортКодаДляMatLabToolStripMenuItem->Name = L"экспортКодаДляMatLabToolStripMenuItem";
			this->экспортКодаДляMatLabToolStripMenuItem->Size = System::Drawing::Size(120, 22);
			this->экспортКодаДляMatLabToolStripMenuItem->Text = L"Закрыть";
			// 
			// руководствоToolStripMenuItem
			// 
			this->руководствоToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->разработчикToolStripMenuItem });
			this->руководствоToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->руководствоToolStripMenuItem->Name = L"руководствоToolStripMenuItem";
			this->руководствоToolStripMenuItem->Size = System::Drawing::Size(88, 20);
			this->руководствоToolStripMenuItem->Text = L"Руководство";
			// 
			// разработчикToolStripMenuItem
			// 
			this->разработчикToolStripMenuItem->Name = L"разработчикToolStripMenuItem";
			this->разработчикToolStripMenuItem->Size = System::Drawing::Size(123, 22);
			this->разработчикToolStripMenuItem->Text = L"Помощь";
			// 
			// arra
			// 
			this->arra->Controls->Add(this->tabPage1);
			this->arra->Controls->Add(this->tabPage2);
			this->arra->Controls->Add(this->tabPage3);
			this->arra->Location = System::Drawing::Point(12, 36);
			this->arra->Name = L"arra";
			this->arra->SelectedIndex = 0;
			this->arra->Size = System::Drawing::Size(1047, 677);
			this->arra->TabIndex = 2;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->groupBox4);
			this->tabPage1->Controls->Add(this->groupBox3);
			this->tabPage1->Controls->Add(this->groupBox2);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1039, 651);
			this->tabPage1->TabIndex = 2;
			this->tabPage1->Text = L"Запуск";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->button5);
			this->groupBox4->Controls->Add(this->label1);
			this->groupBox4->Location = System::Drawing::Point(628, 6);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(404, 357);
			this->groupBox4->TabIndex = 10;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Статус выполнения";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(9, 309);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(389, 42);
			this->button5->TabIndex = 26;
			this->button5->Text = L"Выход";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::DarkGreen;
			this->label1->Location = System::Drawing::Point(6, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(150, 15);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Программа запущена";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button10);
			this->groupBox3->Controls->Add(this->button8);
			this->groupBox3->Controls->Add(this->button9);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->button6);
			this->groupBox3->Controls->Add(this->numericUpDown1);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->button4);
			this->groupBox3->Controls->Add(this->checkBox10);
			this->groupBox3->Controls->Add(this->checkBox9);
			this->groupBox3->Controls->Add(this->checkBox8);
			this->groupBox3->Controls->Add(this->checkBox7);
			this->groupBox3->Controls->Add(this->checkBox6);
			this->groupBox3->Controls->Add(this->checkBox5);
			this->groupBox3->Controls->Add(this->checkBox4);
			this->groupBox3->Controls->Add(this->checkBox3);
			this->groupBox3->Controls->Add(this->checkBox2);
			this->groupBox3->Controls->Add(this->checkBox1);
			this->groupBox3->Location = System::Drawing::Point(6, 133);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(616, 230);
			this->groupBox3->TabIndex = 9;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Выбор параметров";
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(346, 58);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(238, 29);
			this->button10->TabIndex = 27;
			this->button10->Text = L"Тест неэффективных алгоритмов";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(346, 93);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(238, 29);
			this->button8->TabIndex = 26;
			this->button8->Text = L"Тест эффективных алгоритмов";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(500, 23);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(84, 29);
			this->button9->TabIndex = 25;
			this->button9->Text = L"Снять все";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::Maroon;
			this->label6->Location = System::Drawing::Point(302, 182);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(206, 15);
			this->label6->TabIndex = 23;
			this->label6->Text = L"Ошибка! Не выбран алгоритм";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(13, 174);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(283, 33);
			this->button6->TabIndex = 10;
			this->button6->Text = L"Запуск";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(122, 139);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(35, 20);
			this->numericUpDown1->TabIndex = 22;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(10, 141);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(106, 13);
			this->label5->TabIndex = 21;
			this->label5->Text = L"Количество тестов:";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(346, 23);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(148, 29);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Выбрать все";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// checkBox10
			// 
			this->checkBox10->AutoSize = true;
			this->checkBox10->Location = System::Drawing::Point(199, 111);
			this->checkBox10->Name = L"checkBox10";
			this->checkBox10->Size = System::Drawing::Size(108, 17);
			this->checkBox10->TabIndex = 19;
			this->checkBox10->Text = L"Пирамидальная";
			this->checkBox10->UseVisualStyleBackColor = true;
			// 
			// checkBox9
			// 
			this->checkBox9->AutoSize = true;
			this->checkBox9->Location = System::Drawing::Point(199, 88);
			this->checkBox9->Name = L"checkBox9";
			this->checkBox9->Size = System::Drawing::Size(57, 17);
			this->checkBox9->TabIndex = 18;
			this->checkBox9->Text = L"Хоара";
			this->checkBox9->UseVisualStyleBackColor = true;
			// 
			// checkBox8
			// 
			this->checkBox8->AutoSize = true;
			this->checkBox8->Location = System::Drawing::Point(199, 65);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(59, 17);
			this->checkBox8->TabIndex = 17;
			this->checkBox8->Text = L"Шелла";
			this->checkBox8->UseVisualStyleBackColor = true;
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->Location = System::Drawing::Point(199, 42);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(81, 17);
			this->checkBox7->TabIndex = 16;
			this->checkBox7->Text = L"Челночная";
			this->checkBox7->UseVisualStyleBackColor = true;
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Location = System::Drawing::Point(199, 19);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(69, 17);
			this->checkBox6->TabIndex = 15;
			this->checkBox6->Text = L"Слияние";
			this->checkBox6->UseVisualStyleBackColor = true;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(9, 111);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(167, 17);
			this->checkBox5->TabIndex = 14;
			this->checkBox5->Text = L"Интерполяционная вставка";
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(9, 88);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(119, 17);
			this->checkBox4->TabIndex = 13;
			this->checkBox4->Text = L"Бинарная вставка";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(9, 65);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(113, 17);
			this->checkBox3->TabIndex = 12;
			this->checkBox3->Text = L"Простая вставка";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(9, 42);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(104, 17);
			this->checkBox2->TabIndex = 11;
			this->checkBox2->Text = L"Простой выбор";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(9, 19);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(128, 17);
			this->checkBox1->TabIndex = 10;
			this->checkBox1->Text = L"Стандартный обмен";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox2->Controls->Add(this->dataGridView1);
			this->groupBox2->Location = System::Drawing::Point(6, 364);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1026, 281);
			this->groupBox2->TabIndex = 8;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Проведение тестов";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Enabled = false;
			this->dataGridView1->Location = System::Drawing::Point(13, 19);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(997, 243);
			this->dataGridView1->TabIndex = 9;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Location = System::Drawing::Point(6, 6);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(616, 121);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Инициализация массива";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::Maroon;
			this->label4->Location = System::Drawing::Point(302, 74);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(282, 15);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Ошибка! Выделение памяти невозможно";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(9, 58);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(287, 50);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Выделить память, заполнить псевдо-случайными числами";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Maroon;
			this->label3->Location = System::Drawing::Point(302, 24);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(296, 15);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Ошибка! Размерность - натуральное число";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(115, 20);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 23);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(103, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Размерность (∈ℕ):";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(221, 19);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Ввод";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->groupBox5);
			this->tabPage2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1039, 651);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Код для MatLab";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->button7);
			this->groupBox5->Controls->Add(this->button2);
			this->groupBox5->Controls->Add(this->pictureBox1);
			this->groupBox5->Controls->Add(this->dataGridView2);
			this->groupBox5->Location = System::Drawing::Point(6, 6);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(1027, 639);
			this->groupBox5->TabIndex = 0;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Для выполнения в MatLab";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(607, 541);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(414, 85);
			this->button7->TabIndex = 3;
			this->button7->Text = L"Экспорт в sorting_algorithms_script.m";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(607, 450);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(414, 85);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Экспорт в sorting_algorithms_script.txt";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(607, 20);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(414, 424);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->AllowUserToResizeColumns = false;
			this->dataGridView2->AllowUserToResizeRows = false;
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column2,
					this->Column1
			});
			this->dataGridView2->Enabled = false;
			this->dataGridView2->Location = System::Drawing::Point(6, 20);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(595, 606);
			this->dataGridView2->TabIndex = 0;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"№";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 30;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Код MatLab";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 900;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->label9);
			this->tabPage3->Controls->Add(this->label8);
			this->tabPage3->Controls->Add(this->label7);
			this->tabPage3->Controls->Add(this->pictureBox2);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1039, 651);
			this->tabPage3->TabIndex = 3;
			this->tabPage3->Text = L"Разработчик";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(197, 75);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(381, 25);
			this->label9->TabIndex = 3;
			this->label9->Text = L"GitHub: https://github.com/konsilerinos";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(197, 129);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(260, 25);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Связь: konsilerin@mail.ru";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(197, 21);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(412, 25);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Программу написал: Никки Консильери";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(6, 6);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(176, 399);
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1071, 725);
			this->Controls->Add(this->arra);
			this->Controls->Add(this->menuStrip1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"MainWindow";
			this->Text = L"Сортировка";
			this->Load += gcnew System::EventHandler(this, &MainWindow::MainWindow_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->arra->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void MainWindow_Load(System::Object^ sender, System::EventArgs^ e);
private: System::Void CreateResultTable();
private: System::Void CreateMatLabCodeTable();
};
}
