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
	private: System::Windows::Forms::TabControl^ tab_control;




	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::ToolStripMenuItem^ программаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exit_short_button;

	private: System::Windows::Forms::TabPage^ tabPage1;


	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ size_enter_button;
	private: System::Windows::Forms::Label^ memory_label;



	private: System::Windows::Forms::Button^ getting_array_button;
	private: System::Windows::Forms::Label^ size_label;




	private: System::Windows::Forms::TextBox^ input_box;



	private: System::Windows::Forms::GroupBox^ groupBox2;






















	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::GroupBox^ parameters_box;

	private: System::Windows::Forms::Label^ start_label;

	private: System::Windows::Forms::Button^ start_button;
	private: System::Windows::Forms::NumericUpDown^ counter;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ all_selecting_button;


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
private: System::Windows::Forms::Button^ export_m_button;


private: System::Windows::Forms::Button^ export_txt_button;

private: System::Windows::Forms::DataGridView^ dataGridView2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
private: System::Windows::Forms::Label^ status_label;

private: System::Windows::Forms::TabPage^ tabPage3;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::PictureBox^ pictureBox2;
private: System::Windows::Forms::ToolStripMenuItem^ руководствоToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ разработчикToolStripMenuItem;

private: System::Windows::Forms::Button^ exit_button;


private: System::Windows::Forms::Button^ no_good_selecting_button;
private: System::Windows::Forms::Button^ good_selecting_button;


private: System::ComponentModel::BackgroundWorker^ backgroundWorker2;
private: System::Windows::Forms::Button^ all_unselecting_button;
private: System::Windows::Forms::Button^ algorithm_button;



























































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
			this->exit_short_button = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->руководствоToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->разработчикToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->tab_control = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->exit_button = (gcnew System::Windows::Forms::Button());
			this->status_label = (gcnew System::Windows::Forms::Label());
			this->parameters_box = (gcnew System::Windows::Forms::GroupBox());
			this->algorithm_button = (gcnew System::Windows::Forms::Button());
			this->no_good_selecting_button = (gcnew System::Windows::Forms::Button());
			this->good_selecting_button = (gcnew System::Windows::Forms::Button());
			this->all_unselecting_button = (gcnew System::Windows::Forms::Button());
			this->start_label = (gcnew System::Windows::Forms::Label());
			this->start_button = (gcnew System::Windows::Forms::Button());
			this->counter = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->all_selecting_button = (gcnew System::Windows::Forms::Button());
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
			this->memory_label = (gcnew System::Windows::Forms::Label());
			this->getting_array_button = (gcnew System::Windows::Forms::Button());
			this->size_label = (gcnew System::Windows::Forms::Label());
			this->input_box = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->size_enter_button = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->export_m_button = (gcnew System::Windows::Forms::Button());
			this->export_txt_button = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->backgroundWorker2 = (gcnew System::ComponentModel::BackgroundWorker());
			this->menuStrip1->SuspendLayout();
			this->tab_control->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->parameters_box->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->counter))->BeginInit();
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
			this->программаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->exit_short_button });
			this->программаToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->программаToolStripMenuItem->Name = L"программаToolStripMenuItem";
			this->программаToolStripMenuItem->Size = System::Drawing::Size(84, 20);
			this->программаToolStripMenuItem->Text = L"Программа";
			// 
			// exit_short_button
			// 
			this->exit_short_button->Name = L"exit_short_button";
			this->exit_short_button->Size = System::Drawing::Size(120, 22);
			this->exit_short_button->Text = L"Закрыть";
			this->exit_short_button->Click += gcnew System::EventHandler(this, &MainWindow::exit_short_button_Click);
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
			// tab_control
			// 
			this->tab_control->Controls->Add(this->tabPage1);
			this->tab_control->Controls->Add(this->tabPage2);
			this->tab_control->Controls->Add(this->tabPage3);
			this->tab_control->Location = System::Drawing::Point(12, 36);
			this->tab_control->Name = L"tab_control";
			this->tab_control->SelectedIndex = 0;
			this->tab_control->Size = System::Drawing::Size(1047, 677);
			this->tab_control->TabIndex = 2;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->groupBox4);
			this->tabPage1->Controls->Add(this->parameters_box);
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
			this->groupBox4->Controls->Add(this->exit_button);
			this->groupBox4->Controls->Add(this->status_label);
			this->groupBox4->Location = System::Drawing::Point(628, 6);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(404, 357);
			this->groupBox4->TabIndex = 10;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Статус выполнения";
			// 
			// exit_button
			// 
			this->exit_button->Location = System::Drawing::Point(9, 309);
			this->exit_button->Name = L"exit_button";
			this->exit_button->Size = System::Drawing::Size(389, 42);
			this->exit_button->TabIndex = 26;
			this->exit_button->Text = L"Выход";
			this->exit_button->UseVisualStyleBackColor = true;
			this->exit_button->Click += gcnew System::EventHandler(this, &MainWindow::exit_button_Click);
			// 
			// status_label
			// 
			this->status_label->AutoSize = true;
			this->status_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->status_label->ForeColor = System::Drawing::Color::DarkGreen;
			this->status_label->Location = System::Drawing::Point(6, 21);
			this->status_label->Name = L"status_label";
			this->status_label->Size = System::Drawing::Size(150, 15);
			this->status_label->TabIndex = 10;
			this->status_label->Text = L"Программа запущена";
			// 
			// parameters_box
			// 
			this->parameters_box->Controls->Add(this->algorithm_button);
			this->parameters_box->Controls->Add(this->no_good_selecting_button);
			this->parameters_box->Controls->Add(this->good_selecting_button);
			this->parameters_box->Controls->Add(this->all_unselecting_button);
			this->parameters_box->Controls->Add(this->start_label);
			this->parameters_box->Controls->Add(this->start_button);
			this->parameters_box->Controls->Add(this->counter);
			this->parameters_box->Controls->Add(this->label5);
			this->parameters_box->Controls->Add(this->all_selecting_button);
			this->parameters_box->Controls->Add(this->checkBox10);
			this->parameters_box->Controls->Add(this->checkBox9);
			this->parameters_box->Controls->Add(this->checkBox8);
			this->parameters_box->Controls->Add(this->checkBox7);
			this->parameters_box->Controls->Add(this->checkBox6);
			this->parameters_box->Controls->Add(this->checkBox5);
			this->parameters_box->Controls->Add(this->checkBox4);
			this->parameters_box->Controls->Add(this->checkBox3);
			this->parameters_box->Controls->Add(this->checkBox2);
			this->parameters_box->Controls->Add(this->checkBox1);
			this->parameters_box->Location = System::Drawing::Point(6, 133);
			this->parameters_box->Name = L"parameters_box";
			this->parameters_box->Size = System::Drawing::Size(616, 230);
			this->parameters_box->TabIndex = 9;
			this->parameters_box->TabStop = false;
			this->parameters_box->Text = L"Выбор параметров";
			// 
			// algorithm_button
			// 
			this->algorithm_button->Enabled = false;
			this->algorithm_button->Location = System::Drawing::Point(13, 174);
			this->algorithm_button->Name = L"algorithm_button";
			this->algorithm_button->Size = System::Drawing::Size(96, 33);
			this->algorithm_button->TabIndex = 28;
			this->algorithm_button->Text = L"Подтвердить";
			this->algorithm_button->UseVisualStyleBackColor = true;
			this->algorithm_button->Click += gcnew System::EventHandler(this, &MainWindow::algorithm_button_Click);
			// 
			// no_good_selecting_button
			// 
			this->no_good_selecting_button->Enabled = false;
			this->no_good_selecting_button->Location = System::Drawing::Point(346, 58);
			this->no_good_selecting_button->Name = L"no_good_selecting_button";
			this->no_good_selecting_button->Size = System::Drawing::Size(238, 29);
			this->no_good_selecting_button->TabIndex = 27;
			this->no_good_selecting_button->Text = L"Тест неэффективных алгоритмов";
			this->no_good_selecting_button->UseVisualStyleBackColor = true;
			this->no_good_selecting_button->Click += gcnew System::EventHandler(this, &MainWindow::no_good_selecting_button_Click);
			// 
			// good_selecting_button
			// 
			this->good_selecting_button->Enabled = false;
			this->good_selecting_button->Location = System::Drawing::Point(346, 93);
			this->good_selecting_button->Name = L"good_selecting_button";
			this->good_selecting_button->Size = System::Drawing::Size(238, 29);
			this->good_selecting_button->TabIndex = 26;
			this->good_selecting_button->Text = L"Тест эффективных алгоритмов";
			this->good_selecting_button->UseVisualStyleBackColor = true;
			this->good_selecting_button->Click += gcnew System::EventHandler(this, &MainWindow::good_selecting_button_Click);
			// 
			// all_unselecting_button
			// 
			this->all_unselecting_button->Enabled = false;
			this->all_unselecting_button->Location = System::Drawing::Point(500, 23);
			this->all_unselecting_button->Name = L"all_unselecting_button";
			this->all_unselecting_button->Size = System::Drawing::Size(84, 29);
			this->all_unselecting_button->TabIndex = 25;
			this->all_unselecting_button->Text = L"Снять все";
			this->all_unselecting_button->UseVisualStyleBackColor = true;
			this->all_unselecting_button->Click += gcnew System::EventHandler(this, &MainWindow::all_unselecting_button_Click);
			// 
			// start_label
			// 
			this->start_label->AutoSize = true;
			this->start_label->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->start_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->start_label->ForeColor = System::Drawing::Color::Maroon;
			this->start_label->Location = System::Drawing::Point(359, 182);
			this->start_label->Name = L"start_label";
			this->start_label->Size = System::Drawing::Size(206, 15);
			this->start_label->TabIndex = 23;
			this->start_label->Text = L"Ошибка! Не выбран алгоритм";
			// 
			// start_button
			// 
			this->start_button->Enabled = false;
			this->start_button->Location = System::Drawing::Point(122, 174);
			this->start_button->Name = L"start_button";
			this->start_button->Size = System::Drawing::Size(219, 33);
			this->start_button->TabIndex = 10;
			this->start_button->Text = L"Запуск";
			this->start_button->UseVisualStyleBackColor = true;
			this->start_button->Click += gcnew System::EventHandler(this, &MainWindow::start_button_Click);
			// 
			// counter
			// 
			this->counter->Enabled = false;
			this->counter->Location = System::Drawing::Point(122, 139);
			this->counter->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->counter->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->counter->Name = L"counter";
			this->counter->Size = System::Drawing::Size(35, 20);
			this->counter->TabIndex = 22;
			this->counter->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
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
			// all_selecting_button
			// 
			this->all_selecting_button->Enabled = false;
			this->all_selecting_button->Location = System::Drawing::Point(346, 23);
			this->all_selecting_button->Name = L"all_selecting_button";
			this->all_selecting_button->Size = System::Drawing::Size(148, 29);
			this->all_selecting_button->TabIndex = 10;
			this->all_selecting_button->Text = L"Выбрать все";
			this->all_selecting_button->UseVisualStyleBackColor = true;
			this->all_selecting_button->Click += gcnew System::EventHandler(this, &MainWindow::all_selecting_button_Click);
			// 
			// checkBox10
			// 
			this->checkBox10->AutoSize = true;
			this->checkBox10->Enabled = false;
			this->checkBox10->ForeColor = System::Drawing::Color::Maroon;
			this->checkBox10->Location = System::Drawing::Point(199, 111);
			this->checkBox10->Name = L"checkBox10";
			this->checkBox10->Size = System::Drawing::Size(108, 17);
			this->checkBox10->TabIndex = 19;
			this->checkBox10->Text = L"Пирамидальная";
			this->checkBox10->UseVisualStyleBackColor = true;
			this->checkBox10->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::checkBox10_CheckedChanged);
			// 
			// checkBox9
			// 
			this->checkBox9->AutoSize = true;
			this->checkBox9->Enabled = false;
			this->checkBox9->Location = System::Drawing::Point(199, 88);
			this->checkBox9->Name = L"checkBox9";
			this->checkBox9->Size = System::Drawing::Size(57, 17);
			this->checkBox9->TabIndex = 18;
			this->checkBox9->Text = L"Хоара";
			this->checkBox9->UseVisualStyleBackColor = true;
			this->checkBox9->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::checkBox9_CheckedChanged);
			// 
			// checkBox8
			// 
			this->checkBox8->AutoSize = true;
			this->checkBox8->Enabled = false;
			this->checkBox8->Location = System::Drawing::Point(199, 65);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(59, 17);
			this->checkBox8->TabIndex = 17;
			this->checkBox8->Text = L"Шелла";
			this->checkBox8->UseVisualStyleBackColor = true;
			this->checkBox8->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::checkBox8_CheckedChanged);
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->Enabled = false;
			this->checkBox7->ForeColor = System::Drawing::Color::Maroon;
			this->checkBox7->Location = System::Drawing::Point(199, 42);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(81, 17);
			this->checkBox7->TabIndex = 16;
			this->checkBox7->Text = L"Челночная";
			this->checkBox7->UseVisualStyleBackColor = true;
			this->checkBox7->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::checkBox7_CheckedChanged);
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Enabled = false;
			this->checkBox6->ForeColor = System::Drawing::Color::Maroon;
			this->checkBox6->Location = System::Drawing::Point(199, 19);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(69, 17);
			this->checkBox6->TabIndex = 15;
			this->checkBox6->Text = L"Слияние";
			this->checkBox6->UseVisualStyleBackColor = true;
			this->checkBox6->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::checkBox6_CheckedChanged);
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Enabled = false;
			this->checkBox5->ForeColor = System::Drawing::Color::Maroon;
			this->checkBox5->Location = System::Drawing::Point(9, 111);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(167, 17);
			this->checkBox5->TabIndex = 14;
			this->checkBox5->Text = L"Интерполяционная вставка";
			this->checkBox5->UseVisualStyleBackColor = true;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::checkBox5_CheckedChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Enabled = false;
			this->checkBox4->Location = System::Drawing::Point(9, 88);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(119, 17);
			this->checkBox4->TabIndex = 13;
			this->checkBox4->Text = L"Бинарная вставка";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::checkBox4_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Enabled = false;
			this->checkBox3->Location = System::Drawing::Point(9, 65);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(113, 17);
			this->checkBox3->TabIndex = 12;
			this->checkBox3->Text = L"Простая вставка";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::checkBox3_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Enabled = false;
			this->checkBox2->Location = System::Drawing::Point(9, 42);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(104, 17);
			this->checkBox2->TabIndex = 11;
			this->checkBox2->Text = L"Простой выбор";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::checkBox2_CheckedChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Enabled = false;
			this->checkBox1->Location = System::Drawing::Point(9, 19);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(128, 17);
			this->checkBox1->TabIndex = 10;
			this->checkBox1->Text = L"Стандартный обмен";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::checkBox1_CheckedChanged);
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
			this->groupBox2->Text = L"Проведение тестов, мс";
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
			this->groupBox1->Controls->Add(this->memory_label);
			this->groupBox1->Controls->Add(this->getting_array_button);
			this->groupBox1->Controls->Add(this->size_label);
			this->groupBox1->Controls->Add(this->input_box);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->size_enter_button);
			this->groupBox1->Location = System::Drawing::Point(6, 6);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(616, 121);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Инициализация массива";
			// 
			// memory_label
			// 
			this->memory_label->AutoSize = true;
			this->memory_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->memory_label->ForeColor = System::Drawing::Color::Maroon;
			this->memory_label->Location = System::Drawing::Point(302, 74);
			this->memory_label->Name = L"memory_label";
			this->memory_label->Size = System::Drawing::Size(282, 15);
			this->memory_label->TabIndex = 9;
			this->memory_label->Text = L"Ошибка! Выделение памяти невозможно";
			// 
			// getting_array_button
			// 
			this->getting_array_button->Enabled = false;
			this->getting_array_button->Location = System::Drawing::Point(9, 58);
			this->getting_array_button->Name = L"getting_array_button";
			this->getting_array_button->Size = System::Drawing::Size(287, 50);
			this->getting_array_button->TabIndex = 8;
			this->getting_array_button->Text = L"Выделить память, заполнить псевдо-случайными числами";
			this->getting_array_button->UseVisualStyleBackColor = true;
			this->getting_array_button->Click += gcnew System::EventHandler(this, &MainWindow::getting_array_button_Click);
			// 
			// size_label
			// 
			this->size_label->AutoSize = true;
			this->size_label->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->size_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->size_label->ForeColor = System::Drawing::Color::Maroon;
			this->size_label->Location = System::Drawing::Point(302, 24);
			this->size_label->Name = L"size_label";
			this->size_label->Size = System::Drawing::Size(312, 15);
			this->size_label->TabIndex = 8;
			this->size_label->Text = L"Ошибка! Предполагается ввод пустой строки";
			// 
			// input_box
			// 
			this->input_box->Location = System::Drawing::Point(115, 20);
			this->input_box->Name = L"input_box";
			this->input_box->Size = System::Drawing::Size(100, 20);
			this->input_box->TabIndex = 6;
			this->input_box->TextChanged += gcnew System::EventHandler(this, &MainWindow::input_box_TextChanged);
			this->input_box->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainWindow::input_box_KeyPress);
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
			// size_enter_button
			// 
			this->size_enter_button->Enabled = false;
			this->size_enter_button->Location = System::Drawing::Point(221, 19);
			this->size_enter_button->Name = L"size_enter_button";
			this->size_enter_button->Size = System::Drawing::Size(75, 23);
			this->size_enter_button->TabIndex = 0;
			this->size_enter_button->Text = L"Ввод";
			this->size_enter_button->UseVisualStyleBackColor = true;
			this->size_enter_button->Click += gcnew System::EventHandler(this, &MainWindow::size_enter_button_Click);
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
			this->groupBox5->Controls->Add(this->export_m_button);
			this->groupBox5->Controls->Add(this->export_txt_button);
			this->groupBox5->Controls->Add(this->pictureBox1);
			this->groupBox5->Controls->Add(this->dataGridView2);
			this->groupBox5->Location = System::Drawing::Point(6, 6);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(1027, 639);
			this->groupBox5->TabIndex = 0;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Для выполнения в MatLab";
			// 
			// export_m_button
			// 
			this->export_m_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->export_m_button->Location = System::Drawing::Point(607, 541);
			this->export_m_button->Name = L"export_m_button";
			this->export_m_button->Size = System::Drawing::Size(414, 85);
			this->export_m_button->TabIndex = 3;
			this->export_m_button->Text = L"Экспорт в sorting_algorithms_script.m";
			this->export_m_button->UseVisualStyleBackColor = true;
			// 
			// export_txt_button
			// 
			this->export_txt_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->export_txt_button->Location = System::Drawing::Point(607, 450);
			this->export_txt_button->Name = L"export_txt_button";
			this->export_txt_button->Size = System::Drawing::Size(414, 85);
			this->export_txt_button->TabIndex = 2;
			this->export_txt_button->Text = L"Экспорт в sorting_algorithms_script.txt";
			this->export_txt_button->UseVisualStyleBackColor = true;
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
			this->Controls->Add(this->tab_control);
			this->Controls->Add(this->menuStrip1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"MainWindow";
			this->Text = L"Сортировка";
			this->Load += gcnew System::EventHandler(this, &MainWindow::MainWindow_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tab_control->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->parameters_box->ResumeLayout(false);
			this->parameters_box->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->counter))->EndInit();
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

private: System::Void input_box_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void input_box_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);

private: System::Void size_enter_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void getting_array_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void all_selecting_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void all_unselecting_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void no_good_selecting_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void good_selecting_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void algorithm_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void start_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void exit_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void exit_short_button_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void checkBox5_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void checkBox6_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void checkBox7_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void checkBox8_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void checkBox9_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void checkBox10_CheckedChanged(System::Object^ sender, System::EventArgs^ e);

private: System::Void BubbleSortingTesting();
private: System::Void ChoiceSortTesting();
private: System::Void InsertSortTesting();
private: System::Void BinaryInsertSortTesting();
private: System::Void ShellSortTesting();
private: System::Void QuickSortTesting();

private: System::Void DeleteArrays();
private: System::Void SetTrueFlags();
private: System::Void SetStartingMessage();

};
}
