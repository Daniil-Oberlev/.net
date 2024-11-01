#pragma once

namespace proga {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::NumericUpDown^ numericUpDown1;
		System::Windows::Forms::NumericUpDown^ numericUpDown2;
		System::Windows::Forms::Button^ buttonConfirmSize;
		System::Windows::Forms::Button^ buttonMultiply;
		System::Windows::Forms::Panel^ panelMatrixA;
		System::Windows::Forms::Panel^ panelMatrixB;
		System::Windows::Forms::Panel^ panelMatrixResult;

		int rowsA, colsA, rowsB, colsB;
		bool isFirstMatrixSizeConfirmed = false;
		array<array<NumericUpDown^>^>^ matrixA;
		array<array<NumericUpDown^>^>^ matrixB;
		array<array<NumericUpDown^>^>^ matrixResult;

		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->buttonConfirmSize = (gcnew System::Windows::Forms::Button());
			this->buttonMultiply = (gcnew System::Windows::Forms::Button());
			this->panelMatrixA = (gcnew System::Windows::Forms::Panel());
			this->panelMatrixB = (gcnew System::Windows::Forms::Panel());
			this->panelMatrixResult = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(160, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(177, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Введите размер первой матрицы";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(130, 100);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(100, 20);
			this->numericUpDown1->TabIndex = 1;
			this->numericUpDown1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(250, 100);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(100, 20);
			this->numericUpDown2->TabIndex = 2;
			this->numericUpDown2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown2->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown2_ValueChanged);
			// 
			// buttonConfirmSize
			// 
			this->buttonConfirmSize->Location = System::Drawing::Point(186, 143);
			this->buttonConfirmSize->Name = L"buttonConfirmSize";
			this->buttonConfirmSize->Size = System::Drawing::Size(100, 23);
			this->buttonConfirmSize->TabIndex = 3;
			this->buttonConfirmSize->Text = L"Подтвердить";
			this->buttonConfirmSize->UseVisualStyleBackColor = true;
			this->buttonConfirmSize->Click += gcnew System::EventHandler(this, &MyForm::buttonConfirmSize_Click);
			// 
			// buttonMultiply
			// 
			this->buttonMultiply->Location = System::Drawing::Point(186, 352);
			this->buttonMultiply->Name = L"buttonMultiply";
			this->buttonMultiply->Size = System::Drawing::Size(100, 30);
			this->buttonMultiply->TabIndex = 6;
			this->buttonMultiply->Text = L"Умножить";
			this->buttonMultiply->UseVisualStyleBackColor = true;
			this->buttonMultiply->Click += gcnew System::EventHandler(this, &MyForm::buttonMultiply_Click);
			// 
			// panelMatrixA
			// 
			this->panelMatrixA->AutoScroll = true;
			this->panelMatrixA->Location = System::Drawing::Point(30, 200);
			this->panelMatrixA->Name = L"panelMatrixA";
			this->panelMatrixA->Padding = System::Windows::Forms::Padding(5);
			this->panelMatrixA->Size = System::Drawing::Size(200, 100);
			this->panelMatrixA->TabIndex = 4;
			// 
			// panelMatrixB
			// 
			this->panelMatrixB->AutoScroll = true;
			this->panelMatrixB->Location = System::Drawing::Point(250, 200);
			this->panelMatrixB->Name = L"panelMatrixB";
			this->panelMatrixB->Padding = System::Windows::Forms::Padding(5);
			this->panelMatrixB->Size = System::Drawing::Size(200, 100);
			this->panelMatrixB->TabIndex = 5;
			// 
			// panelMatrixResult
			// 
			this->panelMatrixResult->AutoScroll = true;
			this->panelMatrixResult->Cursor = System::Windows::Forms::Cursors::No;
			this->panelMatrixResult->Location = System::Drawing::Point(130, 416);
			this->panelMatrixResult->Name = L"panelMatrixResult";
			this->panelMatrixResult->Padding = System::Windows::Forms::Padding(5);
			this->panelMatrixResult->Size = System::Drawing::Size(220, 200);
			this->panelMatrixResult->TabIndex = 7;
			this->panelMatrixResult->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panelMatrixResult_Paint);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(500, 650);
			this->Controls->Add(this->panelMatrixA);
			this->Controls->Add(this->panelMatrixB);
			this->Controls->Add(this->panelMatrixResult);
			this->Controls->Add(this->buttonConfirmSize);
			this->Controls->Add(this->buttonMultiply);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Введите размеры матриц";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:
		System::Void buttonConfirmSize_Click(System::Object^ sender, System::EventArgs^ e) {
			if (!isFirstMatrixSizeConfirmed) {
				rowsA = Decimal::ToInt32(numericUpDown1->Value);
				colsA = Decimal::ToInt32(numericUpDown2->Value);
				matrixA = gcnew array<array<NumericUpDown^>^>(rowsA);

				panelMatrixA->Controls->Clear();
				for (int i = 0; i < rowsA; i++) {
					matrixA[i] = gcnew array<NumericUpDown^>(colsA);
					for (int j = 0; j < colsA; j++) {
						matrixA[i][j] = gcnew NumericUpDown();
						matrixA[i][j]->Width = 40;
						matrixA[i][j]->Height = 30;
						matrixA[i][j]->Location = System::Drawing::Point(j * 40, i * 30);
						panelMatrixA->Controls->Add(matrixA[i][j]);
					}
				}

				isFirstMatrixSizeConfirmed = true;

				label1->Text = L"Введите размер второй матрицы";
				numericUpDown1->Value = 0;
				numericUpDown2->Value = 0;
			}
			else {
				rowsB = Decimal::ToInt32(numericUpDown1->Value);
				colsB = Decimal::ToInt32(numericUpDown2->Value);
				matrixB = gcnew array<array<NumericUpDown^>^>(rowsB);

				panelMatrixB->Controls->Clear();
				for (int i = 0; i < rowsB; i++) {
					matrixB[i] = gcnew array<NumericUpDown^>(colsB);
					for (int j = 0; j < colsB; j++) {
						matrixB[i][j] = gcnew NumericUpDown();
						matrixB[i][j]->Width = 40;
						matrixB[i][j]->Height = 30;
						matrixB[i][j]->Location = System::Drawing::Point(j * 40, i * 30);
						panelMatrixB->Controls->Add(matrixB[i][j]);
					}
				}

				panelMatrixResult->Visible = true;
				buttonMultiply->Enabled = true;
			}
		}

		System::Void buttonMultiply_Click(System::Object^ sender, System::EventArgs^ e) {
			if (colsA != rowsB) {
				MessageBox::Show("Количество столбцов первой матрицы должно совпадать с количеством строк второй матрицы.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			matrixResult = gcnew array<array<NumericUpDown^>^>(rowsA);
			panelMatrixResult->Controls->Clear();

			for (int i = 0; i < rowsA; i++) {
				matrixResult[i] = gcnew array<NumericUpDown^>(colsB);
				for (int j = 0; j < colsB; j++) {
					matrixResult[i][j] = gcnew NumericUpDown();
					matrixResult[i][j]->Maximum = 1000;
					matrixResult[i][j]->Enabled = false;
					matrixResult[i][j]->Width = 40;
					matrixResult[i][j]->Height = 30;
					matrixResult[i][j]->Location = System::Drawing::Point(j * 40, i * 30);
					panelMatrixResult->Controls->Add(matrixResult[i][j]);
				}
			}

			for (int i = 0; i < rowsA; i++) {
				for (int j = 0; j < colsB; j++) {
					int sum = 0;
					for (int k = 0; k < colsA; k++) {
						int a = (int)matrixA[i][k]->Value;
						int b = (int)matrixB[k][j]->Value;
						sum += a * b;
					}
					matrixResult[i][j]->Value = sum;
				}
			}
		}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void panelMatrixResult_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void numericUpDown2_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}