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
	private: System::Windows::Forms::GroupBox^ first_group;
	protected:

	protected:
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ программаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ справкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ разработчикToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ input_box;


	private: System::Windows::Forms::Button^ Start_button;
	private: System::Windows::Forms::Button^ Exchange_button;






	private: System::Windows::Forms::Button^ Insert_button;




	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ Binary_inserts_button;

	private: System::Windows::Forms::Button^ Hoar_button;

	private: System::Windows::Forms::Button^ Simple_choise_button;

	private: System::Windows::Forms::Button^ Shell_button;


	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ algorithm_label;



	private: System::Windows::Forms::Label^ result_label;

	private: System::Windows::Forms::Button^ Show_button;
	private: System::Windows::Forms::Button^ size_entering;
	private: System::Windows::Forms::Button^ get_array;



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
			this->first_group = (gcnew System::Windows::Forms::GroupBox());
			this->get_array = (gcnew System::Windows::Forms::Button());
			this->size_entering = (gcnew System::Windows::Forms::Button());
			this->input_box = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->программаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->справкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->разработчикToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Start_button = (gcnew System::Windows::Forms::Button());
			this->Exchange_button = (gcnew System::Windows::Forms::Button());
			this->Insert_button = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->algorithm_label = (gcnew System::Windows::Forms::Label());
			this->Binary_inserts_button = (gcnew System::Windows::Forms::Button());
			this->Hoar_button = (gcnew System::Windows::Forms::Button());
			this->Simple_choise_button = (gcnew System::Windows::Forms::Button());
			this->Shell_button = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->Show_button = (gcnew System::Windows::Forms::Button());
			this->result_label = (gcnew System::Windows::Forms::Label());
			this->first_group->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// first_group
			// 
			this->first_group->Controls->Add(this->get_array);
			this->first_group->Controls->Add(this->size_entering);
			this->first_group->Controls->Add(this->input_box);
			this->first_group->Controls->Add(this->label1);
			this->first_group->Location = System::Drawing::Point(12, 36);
			this->first_group->Name = L"first_group";
			this->first_group->Size = System::Drawing::Size(313, 95);
			this->first_group->TabIndex = 0;
			this->first_group->TabStop = false;
			this->first_group->Text = L"Инициализация";
			// 
			// get_array
			// 
			this->get_array->Enabled = false;
			this->get_array->Location = System::Drawing::Point(9, 50);
			this->get_array->Name = L"get_array";
			this->get_array->Size = System::Drawing::Size(296, 34);
			this->get_array->TabIndex = 8;
			this->get_array->Text = L"Выделить память и заполнить массив псевдослучайными числами";
			this->get_array->UseVisualStyleBackColor = true;
			this->get_array->Click += gcnew System::EventHandler(this, &MainWindow::get_array_Click);
			// 
			// size_entering
			// 
			this->size_entering->Location = System::Drawing::Point(194, 21);
			this->size_entering->Name = L"size_entering";
			this->size_entering->Size = System::Drawing::Size(111, 23);
			this->size_entering->TabIndex = 7;
			this->size_entering->Text = L"Ввод";
			this->size_entering->UseVisualStyleBackColor = true;
			this->size_entering->Click += gcnew System::EventHandler(this, &MainWindow::size_entering_Click);
			// 
			// input_box
			// 
			this->input_box->Location = System::Drawing::Point(90, 23);
			this->input_box->Name = L"input_box";
			this->input_box->Size = System::Drawing::Size(100, 20);
			this->input_box->TabIndex = 2;
			this->input_box->TextChanged += gcnew System::EventHandler(this, &MainWindow::input_box_TextChanged);
			this->input_box->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainWindow::input_box_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Размерность:";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->программаToolStripMenuItem,
					this->справкаToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(341, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// программаToolStripMenuItem
			// 
			this->программаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->выходToolStripMenuItem });
			this->программаToolStripMenuItem->Name = L"программаToolStripMenuItem";
			this->программаToolStripMenuItem->Size = System::Drawing::Size(84, 20);
			this->программаToolStripMenuItem->Text = L"Программа";
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(109, 22);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::выходToolStripMenuItem_Click);
			// 
			// справкаToolStripMenuItem
			// 
			this->справкаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->разработчикToolStripMenuItem });
			this->справкаToolStripMenuItem->Name = L"справкаToolStripMenuItem";
			this->справкаToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->справкаToolStripMenuItem->Text = L"Справка";
			// 
			// разработчикToolStripMenuItem
			// 
			this->разработчикToolStripMenuItem->Name = L"разработчикToolStripMenuItem";
			this->разработчикToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->разработчикToolStripMenuItem->Text = L"Разработчик";
			// 
			// Start_button
			// 
			this->Start_button->Enabled = false;
			this->Start_button->Location = System::Drawing::Point(9, 140);
			this->Start_button->Name = L"Start_button";
			this->Start_button->Size = System::Drawing::Size(296, 23);
			this->Start_button->TabIndex = 3;
			this->Start_button->Text = L"Старт";
			this->Start_button->UseVisualStyleBackColor = true;
			this->Start_button->Click += gcnew System::EventHandler(this, &MainWindow::Start_button_Click);
			// 
			// Exchange_button
			// 
			this->Exchange_button->Enabled = false;
			this->Exchange_button->Location = System::Drawing::Point(160, 19);
			this->Exchange_button->Name = L"Exchange_button";
			this->Exchange_button->Size = System::Drawing::Size(145, 23);
			this->Exchange_button->TabIndex = 4;
			this->Exchange_button->Text = L"Стандартный обмен";
			this->Exchange_button->UseVisualStyleBackColor = true;
			this->Exchange_button->Click += gcnew System::EventHandler(this, &MainWindow::Exchange_button_Click);
			// 
			// Insert_button
			// 
			this->Insert_button->Enabled = false;
			this->Insert_button->Location = System::Drawing::Point(9, 19);
			this->Insert_button->Name = L"Insert_button";
			this->Insert_button->Size = System::Drawing::Size(145, 23);
			this->Insert_button->TabIndex = 5;
			this->Insert_button->Text = L"Вставками";
			this->Insert_button->UseVisualStyleBackColor = true;
			this->Insert_button->Click += gcnew System::EventHandler(this, &MainWindow::Insert_button_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->algorithm_label);
			this->groupBox1->Controls->Add(this->Binary_inserts_button);
			this->groupBox1->Controls->Add(this->Hoar_button);
			this->groupBox1->Controls->Add(this->Simple_choise_button);
			this->groupBox1->Controls->Add(this->Start_button);
			this->groupBox1->Controls->Add(this->Shell_button);
			this->groupBox1->Controls->Add(this->Exchange_button);
			this->groupBox1->Controls->Add(this->Insert_button);
			this->groupBox1->Location = System::Drawing::Point(13, 137);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(313, 172);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Алгоритмы";
			// 
			// algorithm_label
			// 
			this->algorithm_label->AutoSize = true;
			this->algorithm_label->Location = System::Drawing::Point(6, 115);
			this->algorithm_label->Name = L"algorithm_label";
			this->algorithm_label->Size = System::Drawing::Size(112, 13);
			this->algorithm_label->TabIndex = 10;
			this->algorithm_label->Text = L"Алгоритм не выбран";
			// 
			// Binary_inserts_button
			// 
			this->Binary_inserts_button->Enabled = false;
			this->Binary_inserts_button->Location = System::Drawing::Point(160, 77);
			this->Binary_inserts_button->Name = L"Binary_inserts_button";
			this->Binary_inserts_button->Size = System::Drawing::Size(145, 23);
			this->Binary_inserts_button->TabIndex = 9;
			this->Binary_inserts_button->Text = L"Бинарные вставки";
			this->Binary_inserts_button->UseVisualStyleBackColor = true;
			this->Binary_inserts_button->Click += gcnew System::EventHandler(this, &MainWindow::Binary_inserts_button_Click);
			// 
			// Hoar_button
			// 
			this->Hoar_button->Enabled = false;
			this->Hoar_button->Location = System::Drawing::Point(9, 77);
			this->Hoar_button->Name = L"Hoar_button";
			this->Hoar_button->Size = System::Drawing::Size(145, 23);
			this->Hoar_button->TabIndex = 8;
			this->Hoar_button->Text = L"Метод Хоара";
			this->Hoar_button->UseVisualStyleBackColor = true;
			this->Hoar_button->Click += gcnew System::EventHandler(this, &MainWindow::Hoar_button_Click);
			// 
			// Simple_choise_button
			// 
			this->Simple_choise_button->Enabled = false;
			this->Simple_choise_button->Location = System::Drawing::Point(160, 48);
			this->Simple_choise_button->Name = L"Simple_choise_button";
			this->Simple_choise_button->Size = System::Drawing::Size(145, 23);
			this->Simple_choise_button->TabIndex = 7;
			this->Simple_choise_button->Text = L"Простой выбор";
			this->Simple_choise_button->UseVisualStyleBackColor = true;
			this->Simple_choise_button->Click += gcnew System::EventHandler(this, &MainWindow::Simple_choise_button_Click);
			// 
			// Shell_button
			// 
			this->Shell_button->Enabled = false;
			this->Shell_button->Location = System::Drawing::Point(9, 48);
			this->Shell_button->Name = L"Shell_button";
			this->Shell_button->Size = System::Drawing::Size(145, 23);
			this->Shell_button->TabIndex = 6;
			this->Shell_button->Text = L"Метод Шелла";
			this->Shell_button->UseVisualStyleBackColor = true;
			this->Shell_button->Click += gcnew System::EventHandler(this, &MainWindow::Shell_button_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->Show_button);
			this->groupBox3->Controls->Add(this->result_label);
			this->groupBox3->Location = System::Drawing::Point(12, 315);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(313, 89);
			this->groupBox3->TabIndex = 10;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Результат";
			// 
			// Show_button
			// 
			this->Show_button->Enabled = false;
			this->Show_button->Location = System::Drawing::Point(9, 55);
			this->Show_button->Name = L"Show_button";
			this->Show_button->Size = System::Drawing::Size(296, 23);
			this->Show_button->TabIndex = 11;
			this->Show_button->Text = L"Показать массив";
			this->Show_button->UseVisualStyleBackColor = true;
			// 
			// result_label
			// 
			this->result_label->AutoSize = true;
			this->result_label->Location = System::Drawing::Point(6, 28);
			this->result_label->Name = L"result_label";
			this->result_label->Size = System::Drawing::Size(146, 13);
			this->result_label->TabIndex = 11;
			this->result_label->Text = L"Время работы алгоритма: -";
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(341, 418);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->first_group);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"MainWindow";
			this->Text = L"Алгоритмы сортировки";
			this->first_group->ResumeLayout(false);
			this->first_group->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void input_box_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);
private: System::Void input_box_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void size_entering_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void get_array_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Insert_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Shell_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Hoar_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Exchange_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Simple_choise_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Binary_inserts_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Start_button_Click(System::Object^ sender, System::EventArgs^ e);
};
}
