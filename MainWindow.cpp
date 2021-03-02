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

int rows_count = 10;
int columns_count = 10;

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
