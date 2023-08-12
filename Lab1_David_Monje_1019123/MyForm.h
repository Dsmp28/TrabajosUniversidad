#pragma once


namespace Lab1DavidMonje1019123 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblnum1;
	protected:
	private: System::Windows::Forms::Label^ lblnum2;
	private: System::Windows::Forms::Label^ lbltotal;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ txtNum1;
	private: System::Windows::Forms::TextBox^ txtNum2;



	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lblnum1 = (gcnew System::Windows::Forms::Label());
			this->lblnum2 = (gcnew System::Windows::Forms::Label());
			this->lbltotal = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txtNum1 = (gcnew System::Windows::Forms::TextBox());
			this->txtNum2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// lblnum1
			// 
			this->lblnum1->AutoSize = true;
			this->lblnum1->Location = System::Drawing::Point(80, 35);
			this->lblnum1->Name = L"lblnum1";
			this->lblnum1->Size = System::Drawing::Size(63, 13);
			this->lblnum1->TabIndex = 0;
			this->lblnum1->Text = L"Operando 1";
			// 
			// lblnum2
			// 
			this->lblnum2->AutoSize = true;
			this->lblnum2->Location = System::Drawing::Point(80, 71);
			this->lblnum2->Name = L"lblnum2";
			this->lblnum2->Size = System::Drawing::Size(63, 13);
			this->lblnum2->TabIndex = 1;
			this->lblnum2->Text = L"Operando 2";
			// 
			// lbltotal
			// 
			this->lbltotal->AutoSize = true;
			this->lbltotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbltotal->Location = System::Drawing::Point(138, 161);
			this->lbltotal->Name = L"lbltotal";
			this->lbltotal->Size = System::Drawing::Size(43, 16);
			this->lbltotal->TabIndex = 2;
			this->lbltotal->Text = L"Total";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(122, 116);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Calcular";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// txtNum1
			// 
			this->txtNum1->Location = System::Drawing::Point(160, 32);
			this->txtNum1->Name = L"txtNum1";
			this->txtNum1->Size = System::Drawing::Size(100, 20);
			this->txtNum1->TabIndex = 4;
			// 
			// txtNum2
			// 
			this->txtNum2->Location = System::Drawing::Point(160, 68);
			this->txtNum2->Name = L"txtNum2";
			this->txtNum2->Size = System::Drawing::Size(100, 20);
			this->txtNum2->TabIndex = 5;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(332, 200);
			this->Controls->Add(this->txtNum2);
			this->Controls->Add(this->txtNum1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lbltotal);
			this->Controls->Add(this->lblnum2);
			this->Controls->Add(this->lblnum1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		int num1 = Convert::ToInt32(txtNum1->Text);
		int num2 = Convert::ToInt32(txtNum2->Text);
		int total = num1 + num2;

		lbltotal->Text = Convert::ToString(total);
	}
};
}
