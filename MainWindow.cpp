#include "MainWindow.h"
#include "sorting_algorithms.h"

using namespace System;
using namespace System::Windows::Forms;

void main() 
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	SortingAlgorithmsWithForms::MainWindow form;
	Application::Run(% form);
}

int array_size = 0;
int* array = nullptr;
int algorithm_number = 0;
int working_time = 0;

System::Void SortingAlgorithmsWithForms::MainWindow::input_box_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
	if ((e->KeyChar < 48 || e->KeyChar > 57) && e->KeyChar != '\b') {
		e->Handled = true;
	}
	return System::Void();
}

System::Void SortingAlgorithmsWithForms::MainWindow::input_box_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	get_array->Enabled = false;

	Show_button->Enabled = false;

	Insert_button->Enabled = false;
	Exchange_button->Enabled = false;
	Shell_button->Enabled = false;
	Simple_choise_button->Enabled = false;
	Hoar_button->Enabled = false;
	Binary_inserts_button->Enabled = false;

	algorithm_label->Text = "Алгоритм не выбран.";

	return System::Void();
}

System::Void SortingAlgorithmsWithForms::MainWindow::выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
	return System::Void();
}

System::Void SortingAlgorithmsWithForms::MainWindow::size_entering_Click(System::Object^ sender, System::EventArgs^ e)
{
	array_size = Convert::ToInt32(input_box->Text);
	if (array_size != 0) {
		get_array->Enabled = true;
	}
	else {
		get_array->Enabled = false;
	}

	return System::Void();
}

System::Void SortingAlgorithmsWithForms::MainWindow::get_array_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (array != nullptr) {
		delete[] array;
	}

	array = GetSomeArray(array_size);

	if (array == nullptr) {
		MessageBox::Show("Ошибка выделения памяти", "Ошибка");
	}

	Show_button->Enabled = true;

	Insert_button->Enabled = true;
	Exchange_button->Enabled = true;
	Shell_button->Enabled = true;
	Simple_choise_button->Enabled = true;
	Hoar_button->Enabled = true;
	Binary_inserts_button->Enabled = true;

	return System::Void();
}

System::Void SortingAlgorithmsWithForms::MainWindow::Insert_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	result_label->Text = "Время работы алгоритма: -";
	Start_button->Enabled = true;
	algorithm_label->Text = "Алгоритм: сортировка вставками.";
	algorithm_number = 1;
	return System::Void();
}

System::Void SortingAlgorithmsWithForms::MainWindow::Shell_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	result_label->Text = "Время работы алгоритма: -";
	Start_button->Enabled = true;
	algorithm_label->Text = "Алгоритм: сортировка методом Шелла.";
	algorithm_number = 3;
	return System::Void();
}

System::Void SortingAlgorithmsWithForms::MainWindow::Hoar_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	result_label->Text = "Время работы алгоритма: -";
	Start_button->Enabled = true;
	algorithm_label->Text = "Алгоритм: сортировка методом Хоара.";
	algorithm_number = 5;
	return System::Void();
}

System::Void SortingAlgorithmsWithForms::MainWindow::Exchange_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	result_label->Text = "Время работы алгоритма: -";
	Start_button->Enabled = true;
	algorithm_label->Text = "Алгоритм: сортировка стандартным обменом.";
	algorithm_number = 2;
	return System::Void();
}

System::Void SortingAlgorithmsWithForms::MainWindow::Simple_choise_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	result_label->Text = "Время работы алгоритма: -";
	Start_button->Enabled = true;
	algorithm_label->Text = "Алгоритм: сортировка простым выбором.";
	algorithm_number = 4;
	return System::Void();
}

System::Void SortingAlgorithmsWithForms::MainWindow::Binary_inserts_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	result_label->Text = "Время работы алгоритма: -";
	Start_button->Enabled = true;
	algorithm_label->Text = "Алгоритм: сортировка бинарными вставками.";
	algorithm_number = 6;
	return System::Void();
}

System::Void SortingAlgorithmsWithForms::MainWindow::Start_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	Show_button->Enabled = false;

	switch (algorithm_number) {
	case 1:
		result_label->Text = "Начало сортировки...";
		working_time = Convert::ToInt32(InsertSort(array, array_size).count());
		break;
	case 3:
		working_time = Convert::ToInt32(ShellSort(array, array_size).count());
		break;
	case 5:
		working_time = Convert::ToInt32(QuickSort(array, 0, array_size - 1).count());
		break;
	case 2:
		working_time = Convert::ToInt32(BubbleSort(array, array_size).count());
		break;
	case 4:
		working_time = Convert::ToInt32(ChoiceSort(array, array_size).count());
		break;
	case 6:
		working_time = Convert::ToInt32(BinaryInsertSort(array, array_size).count());
		break;

	}

	result_label->Text = "Время работы алгоритма: " + Convert::ToString(working_time) + "ms";
	
	Show_button->Enabled = true;

	return System::Void();
}

