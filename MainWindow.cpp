#include "MainWindow.h"
#include "sorting_algorithms.h"

using namespace System;
using namespace System::Windows::Forms;

int rows_count = 10;
int columns_count = 10;

int array_size = 0;
int* array = nullptr;
int* array_copy = nullptr;

bool status_label_memory_flag = true;
bool status_label_size_flag = true;
bool status_label_alg_flag = true;
bool status_label_start_flag = true;

bool check_box_changed = false;

void main() 
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	SortingAlgorithmsWithForms::MainWindow form;
	Application::Run(% form);
}

System::Void SortingAlgorithmsWithForms::MainWindow::MainWindow_Load(System::Object^ sender, System::EventArgs^ e)
{
	CreateMatLabCodeTable();
	CreateResultTable();

	return System::Void();
}

System::Void SortingAlgorithmsWithForms::MainWindow::CreateResultTable()
{
	dataGridView1->RowCount = rows_count;
	dataGridView1->ColumnCount = columns_count;

	// Заполнение верхней левой ячейки
	dataGridView1->TopLeftHeaderCell->Value = "Алгоритм";

	// Заполнение верхней строки
	for (int i = 0; i < columns_count; i++) {
		dataGridView1->Columns[i]->HeaderCell->Value = "Тест № " + Convert::ToString(i + 1);
	}

	// Заполнение столбца алгоритмов
	dataGridView1->Rows[0]->HeaderCell->Value = "Стандартный обмен";
	dataGridView1->Rows[1]->HeaderCell->Value = "Простой выбор";
	dataGridView1->Rows[2]->HeaderCell->Value = "Простая вставка";
	dataGridView1->Rows[3]->HeaderCell->Value = "Бинарная вставка";
	dataGridView1->Rows[4]->HeaderCell->Value = "Интерполяционная вставка";
	dataGridView1->Rows[5]->HeaderCell->Value = "Слияние";
	dataGridView1->Rows[6]->HeaderCell->Value = "Челночная";
	dataGridView1->Rows[7]->HeaderCell->Value = "Шелла";
	dataGridView1->Rows[8]->HeaderCell->Value = "Хоара";
	dataGridView1->Rows[9]->HeaderCell->Value = "Пирамидальная";
	
	dataGridView1->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataGridView1->AutoResizeColumns();

	return System::Void();
}
System::Void SortingAlgorithmsWithForms::MainWindow::CreateMatLabCodeTable()
{

	dataGridView2->RowCount = 50;
	dataGridView2->ColumnCount = 2;

	dataGridView2->Columns[0]->SortMode = DataGridViewColumnSortMode::NotSortable;
	dataGridView2->Columns[1]->SortMode = DataGridViewColumnSortMode::NotSortable;

	for (int i = 0; i < dataGridView2->RowCount; i++) {
		dataGridView2->Rows[i]->Cells[0]->Value = Convert::ToString(i + 1);
	}

	dataGridView2->Rows[0]->Cells[1]->Value = "hold on";
	dataGridView2->Rows[1]->Cells[1]->Value = "grid on";


	dataGridView2->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataGridView2->AutoResizeColumns();

	return System::Void();
}

System::Void SortingAlgorithmsWithForms::MainWindow::input_box_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	// Освобождение памяти
	if (array != nullptr) {
		delete[] array;
		array = nullptr;
		memory_label->Text = "Память освобождена";
		memory_label->ForeColor = Color::Maroon;
	}

	// Блокировка кнопок
	getting_array_button->Enabled = false;
	all_selecting_button->Enabled = false;
	all_unselecting_button->Enabled = false;
	no_good_selecting_button->Enabled = false;
	good_selecting_button->Enabled = false;
	start_button->Enabled = false;

	checkBox1->Enabled = false;
	checkBox2->Enabled = false;
	checkBox3->Enabled = false;
	checkBox4->Enabled = false;
	checkBox5->Enabled = false;
	checkBox6->Enabled = false;
	checkBox7->Enabled = false;
	checkBox8->Enabled = false;
	checkBox9->Enabled = false;
	checkBox10->Enabled = false;

	algorithm_button->Enabled = false;
	counter->Enabled = false;

	if (Convert::ToString(input_box->Text) == "") {
		
		size_enter_button->Enabled = false;
		size_label->Text = "Ошибка! Предполагается ввод пустой строки";
		size_label->ForeColor = Color::Maroon;
	}
	else if (Convert::ToString(input_box->Text)[0] == '0') {
		size_enter_button->Enabled = false;
		size_label->Text = "Ошибка! 0 - не натуральное число";
		size_label->ForeColor = Color::Maroon;
	}
	else if (Convert::ToInt32(input_box->Text) >= 1000000) {
		size_enter_button->Enabled = false;
		size_label->Text = "Ошибка! Введено слишком большое число";
		size_label->ForeColor = Color::Maroon;
	}
	else {
		size_enter_button->Enabled = true;
		size_label->Text = "Готовность ввода размерности";
		size_label->ForeColor = Color::Maroon;
	}

	status_label->Text = "Программа запущена";
	status_label_memory_flag = true;
	status_label_size_flag = true;

	return System::Void();
}
System::Void SortingAlgorithmsWithForms::MainWindow::input_box_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
	if ((e->KeyChar < 48 || e->KeyChar > 57) && e->KeyChar != '\b') {
		e->Handled = true;
	}

	return System::Void();
}

System::Void SortingAlgorithmsWithForms::MainWindow::size_enter_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	array_size = Convert::ToInt32(input_box->Text);

	size_label->Text = "Размерность введена";
	size_label->ForeColor = Color::DarkGreen;

	if (status_label_size_flag) {
		status_label->Text = status_label->Text + "\nРазмерность введена";
		status_label_size_flag = false;
	}


	getting_array_button->Enabled = true;
	memory_label->Text = "Готовность выделения памяти";
	memory_label->ForeColor = Color::Maroon;

	return System::Void();
}
System::Void SortingAlgorithmsWithForms::MainWindow::getting_array_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (array != nullptr) {
		delete[] array;
		delete[] array_copy;
		array = nullptr;
	}

	array = new int[array_size];
	array_copy = new int[array_size];

	array = GetSomeArray(array_size);
	for (int i = 0; i < array_size; i++) {
		array_copy[i] = array[i];
	}

	memory_label->Text = "Память освобождена/выделена!";
	memory_label->ForeColor = Color::DarkGreen;

	if (status_label_memory_flag) {
		status_label->Text = status_label->Text + "\nМассив сформирован";
		status_label_memory_flag = false;
	}

	// Разблокирование кнопок

	checkBox1->Enabled = true;
	checkBox2->Enabled = true;
	checkBox3->Enabled = true;
	checkBox4->Enabled = true;
	checkBox5->Enabled = true;
	checkBox6->Enabled = true;
	checkBox7->Enabled = true;
	checkBox8->Enabled = true;
	checkBox9->Enabled = true;
	checkBox10->Enabled = true;

	all_selecting_button->Enabled = true;
	all_unselecting_button->Enabled = true;
	no_good_selecting_button->Enabled = true;
	good_selecting_button->Enabled = true;

	algorithm_button->Enabled = true;
	counter->Enabled = true;

	return System::Void();
}
System::Void SortingAlgorithmsWithForms::MainWindow::all_selecting_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	checkBox1->Checked = true;
	checkBox2->Checked = true;
	checkBox3->Checked = true;
	checkBox4->Checked = true;
	checkBox5->Checked = true;
	checkBox6->Checked = true;
	checkBox7->Checked = true;
	checkBox8->Checked = true;
	checkBox9->Checked = true;
	checkBox10->Checked = true;

	return System::Void();
}
System::Void SortingAlgorithmsWithForms::MainWindow::all_unselecting_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	checkBox1->Checked = false;
	checkBox2->Checked = false;
	checkBox3->Checked = false;
	checkBox4->Checked = false;
	checkBox5->Checked = false;
	checkBox6->Checked = false;
	checkBox7->Checked = false;
	checkBox8->Checked = false;
	checkBox9->Checked = false;
	checkBox10->Checked = false;

	return System::Void();
}
System::Void SortingAlgorithmsWithForms::MainWindow::no_good_selecting_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	checkBox1->Checked = true;
	checkBox2->Checked = true;
	checkBox3->Checked = true;
	checkBox5->Checked = true;

	checkBox4->Checked = false;
	checkBox6->Checked = false;
	checkBox7->Checked = false;
	checkBox8->Checked = false;
	checkBox9->Checked = false;
	checkBox10->Checked = false;

	return System::Void();
}
System::Void SortingAlgorithmsWithForms::MainWindow::good_selecting_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	checkBox1->Checked = false;
	checkBox2->Checked = false;
	checkBox3->Checked = false;
	checkBox5->Checked = false;

	checkBox4->Checked = true;
	checkBox6->Checked = true;
	checkBox7->Checked = true;
	checkBox8->Checked = true;
	checkBox9->Checked = true;
	checkBox10->Checked = true;

	return System::Void();
}
System::Void SortingAlgorithmsWithForms::MainWindow::algorithm_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	bool checked_status = checkBox1->Checked + checkBox2->Checked + checkBox3->Checked + checkBox4->Checked;
	checked_status = checked_status + checkBox5->Checked + checkBox6->Checked + checkBox7->Checked + checkBox8->Checked;
	checked_status = checked_status + checkBox9->Checked + checkBox10->Checked;
	
	if (checked_status) {
		start_button->Enabled = true;

		if (status_label_alg_flag) {
			status_label->Text = status_label->Text + "\nАлгоритмы выбраны";
			status_label_alg_flag = false;
		}

		start_label->Text = "Готовность запуска";
		start_label->ForeColor = Color::Maroon;

	}
	else {
		start_label->Text = "Ошибка!Алгоритмы не выбраны";
		start_label->ForeColor = Color::Maroon;
	}
	
	return System::Void();
}
System::Void SortingAlgorithmsWithForms::MainWindow::exit_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	DeleteArrays();

	Application::Exit();

	return System::Void();
}
System::Void SortingAlgorithmsWithForms::MainWindow::exit_short_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	DeleteArrays();

	Application::Exit();

	return System::Void();
}
System::Void SortingAlgorithmsWithForms::MainWindow::start_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	start_label->ForeColor = Color::DarkGreen;
	start_label->Text = "Анализ запущен";

	status_label->Text = "Программа запущена\nРазмерность введена\nМассив сформирован\nАнализ запущен";

	BubbleSortingTesting();
	ChoiceSortTesting();
	InsertSortTesting();
	BinaryInsertSortTesting();
	ShellSortTesting();
	QuickSortTesting();

	status_label->Text = status_label->Text + "\nАнализ завершён";

	return System::Void();
}

System::Void SortingAlgorithmsWithForms::MainWindow::checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	SetStartingMessage();
	SetTrueFlags();

	start_button->Enabled = false;
	start_label->ForeColor = Color::Maroon;

	return System::Void();
}
System::Void SortingAlgorithmsWithForms::MainWindow::checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	SetStartingMessage();
	SetTrueFlags();

	start_button->Enabled = false;
	start_label->ForeColor = Color::Maroon;

	return System::Void();
}
System::Void SortingAlgorithmsWithForms::MainWindow::checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	SetStartingMessage();
	SetTrueFlags();

		start_button->Enabled = false;
		start_label->ForeColor = Color::Maroon;

	return System::Void();
}
System::Void SortingAlgorithmsWithForms::MainWindow::checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	SetStartingMessage();
	SetTrueFlags();

	start_button->Enabled = false;
	start_label->ForeColor = Color::Maroon;

	return System::Void();
}
System::Void SortingAlgorithmsWithForms::MainWindow::checkBox5_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	SetStartingMessage();
	SetTrueFlags();

	start_button->Enabled = false;
	start_label->ForeColor = Color::Maroon;

	return System::Void();
}
System::Void SortingAlgorithmsWithForms::MainWindow::checkBox6_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	SetStartingMessage();
	SetTrueFlags();

	start_button->Enabled = false;
	start_label->ForeColor = Color::Maroon;

	return System::Void();
}
System::Void SortingAlgorithmsWithForms::MainWindow::checkBox7_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	SetStartingMessage();
	SetTrueFlags();

	start_button->Enabled = false;
	start_label->ForeColor = Color::Maroon;

	return System::Void();
}
System::Void SortingAlgorithmsWithForms::MainWindow::checkBox8_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	SetStartingMessage();
	SetTrueFlags();

	start_button->Enabled = false;
	start_label->ForeColor = Color::Maroon;

	return System::Void();
}
System::Void SortingAlgorithmsWithForms::MainWindow::checkBox9_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	SetStartingMessage();
	SetTrueFlags();

	start_button->Enabled = false;
	start_label->ForeColor = Color::Maroon;

	return System::Void();
}
System::Void SortingAlgorithmsWithForms::MainWindow::checkBox10_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	SetStartingMessage();
	SetTrueFlags();

	start_button->Enabled = false;
	start_label->ForeColor = Color::Maroon;

	return System::Void();
}

System::Void SortingAlgorithmsWithForms::MainWindow::BubbleSortingTesting()
{
	int time = 0;

	if (checkBox1->Checked) {

		for (int i = 0; i < counter->Value; i++) {

			int temp_time = BubbleSort(array_copy, array_size).count();

			time += temp_time;

			dataGridView1->Rows[0]->Cells[i]->Value = temp_time;

			for (int i = 0; i < array_size; i++) {
				array_copy[i] = array[i];
			}
		}
		status_label->Text = status_label->Text + "\nТестирование алгоритма стандартного обмена: " + Convert::ToString(time/counter->Value);
	}

	return System::Void();
}
System::Void SortingAlgorithmsWithForms::MainWindow::ChoiceSortTesting()
{
	int time = 0;

	if (checkBox2->Checked) {

		for (int i = 0; i < counter->Value; i++) {

			int temp_time = ChoiceSort(array_copy, array_size).count();

			time += temp_time;

			dataGridView1->Rows[1]->Cells[i]->Value = temp_time;

			for (int i = 0; i < array_size; i++) {
				array_copy[i] = array[i];
			}
		}
		status_label->Text = status_label->Text + "\nТестирование алгоритма стандартного обмена: " + Convert::ToString(time/counter->Value);
	}

	return System::Void();
}
System::Void SortingAlgorithmsWithForms::MainWindow::InsertSortTesting()
{
	int time = 0;

	if (checkBox3->Checked) {

		for (int i = 0; i < counter->Value; i++) {

			int temp_time = InsertSort(array_copy, array_size).count();

			time += temp_time;

			dataGridView1->Rows[2]->Cells[i]->Value = temp_time;

			for (int i = 0; i < array_size; i++) {
				array_copy[i] = array[i];
			}
		}
		status_label->Text = status_label->Text + "\nТестирование алгоритма стандартного обмена: " + Convert::ToString(time / counter->Value);
	}

	return System::Void();
}
System::Void SortingAlgorithmsWithForms::MainWindow::BinaryInsertSortTesting()
{
	int time = 0;

	if (checkBox4->Checked) {

		for (int i = 0; i < counter->Value; i++) {

			int temp_time = BinaryInsertSort(array_copy, array_size).count();

			time += temp_time;

			dataGridView1->Rows[3]->Cells[i]->Value = temp_time;

			for (int i = 0; i < array_size; i++) {
				array_copy[i] = array[i];
			}
		}
		status_label->Text = status_label->Text + "\nТестирование алгоритма стандартного обмена: " + Convert::ToString(time / counter->Value);
	}

	return System::Void();
}
System::Void SortingAlgorithmsWithForms::MainWindow::ShellSortTesting()
{
	int time = 0;

	if (checkBox8->Checked) {

		for (int i = 0; i < counter->Value; i++) {

			int temp_time = ShellSort(array_copy, array_size).count();

			time += temp_time;

			dataGridView1->Rows[7]->Cells[i]->Value = temp_time;

			for (int i = 0; i < array_size; i++) {
				array_copy[i] = array[i];
			}
		}
		status_label->Text = status_label->Text + "\nТестирование алгоритма стандартного обмена: " + Convert::ToString(time / counter->Value);
	}

	return System::Void();
}
System::Void SortingAlgorithmsWithForms::MainWindow::QuickSortTesting()
{
	int time = 0;

	if (checkBox9->Checked) {

		for (int i = 0; i < counter->Value; i++) {

			int temp_time = QuickSort(array_copy, 0, array_size - 1).count();

			time += temp_time;

			dataGridView1->Rows[8]->Cells[i]->Value = temp_time;

			for (int i = 0; i < array_size; i++) {
				array_copy[i] = array[i];
			}
		}
		status_label->Text = status_label->Text + "\nТестирование алгоритма стандартного обмена: " + Convert::ToString(time / counter->Value);
	}

	return System::Void();
}

System::Void SortingAlgorithmsWithForms::MainWindow::DeleteArrays()
{
	if (array != nullptr) {
		delete[] array;
	}

	if (array_copy != nullptr) {
		delete[] array;
	}

	return System::Void();
}
System::Void SortingAlgorithmsWithForms::MainWindow::SetTrueFlags()
{
	status_label_alg_flag = true;
	check_box_changed = true;
	status_label_start_flag = true;

	return System::Void();
}

System::Void SortingAlgorithmsWithForms::MainWindow::SetStartingMessage()
{
	status_label->Text = "Программа запущена\nРазмерность введена\nМассив сформирован";
	start_label->Text = "Требуется подтверждение";

	return System::Void();
}