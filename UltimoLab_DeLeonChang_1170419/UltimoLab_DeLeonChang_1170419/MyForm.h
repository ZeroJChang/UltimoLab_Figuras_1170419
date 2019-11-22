#pragma once
#include "TrianguloRecto.h"
#include "cuadradito.h"
#include "Figuras.h"
namespace UltimoLabDeLeonChang1170419 {

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
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lblPerimetro;
	private: System::Windows::Forms::Label^ lblArea;
	private: System::Windows::Forms::TextBox^ txtCuadrado;
	private: System::Windows::Forms::Button^ btnCalcularC;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtAlturaTriangulo;
	private: System::Windows::Forms::TextBox^ txtBaseTriangulo;
	private: System::Windows::Forms::Button^ btnCalcularT;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtApotema;
	private: System::Windows::Forms::TextBox^ txtLadosF;
	private: System::Windows::Forms::TextBox^ txtBaseF;
	private: System::Windows::Forms::Button^ btnCalcularF;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label5;


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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btnCalcularC = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtCuadrado = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->txtAlturaTriangulo = (gcnew System::Windows::Forms::TextBox());
			this->txtBaseTriangulo = (gcnew System::Windows::Forms::TextBox());
			this->btnCalcularT = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->txtApotema = (gcnew System::Windows::Forms::TextBox());
			this->txtLadosF = (gcnew System::Windows::Forms::TextBox());
			this->txtBaseF = (gcnew System::Windows::Forms::TextBox());
			this->btnCalcularF = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblPerimetro = (gcnew System::Windows::Forms::Label());
			this->lblArea = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btnCalcularC);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->txtCuadrado);
			this->groupBox1->Location = System::Drawing::Point(33, 42);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 155);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Cuadrado";
			// 
			// btnCalcularC
			// 
			this->btnCalcularC->Location = System::Drawing::Point(52, 110);
			this->btnCalcularC->Name = L"btnCalcularC";
			this->btnCalcularC->Size = System::Drawing::Size(75, 23);
			this->btnCalcularC->TabIndex = 2;
			this->btnCalcularC->Text = L"Calcular";
			this->btnCalcularC->UseVisualStyleBackColor = true;
			this->btnCalcularC->Click += gcnew System::EventHandler(this, &MyForm::BtnCalcularC_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(19, 39);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 17);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Base";
			// 
			// txtCuadrado
			// 
			this->txtCuadrado->Location = System::Drawing::Point(94, 35);
			this->txtCuadrado->Name = L"txtCuadrado";
			this->txtCuadrado->Size = System::Drawing::Size(100, 22);
			this->txtCuadrado->TabIndex = 0;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->txtAlturaTriangulo);
			this->groupBox2->Controls->Add(this->txtBaseTriangulo);
			this->groupBox2->Controls->Add(this->btnCalcularT);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Location = System::Drawing::Point(268, 42);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(200, 155);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Triangulo";
			// 
			// txtAlturaTriangulo
			// 
			this->txtAlturaTriangulo->Location = System::Drawing::Point(82, 69);
			this->txtAlturaTriangulo->Name = L"txtAlturaTriangulo";
			this->txtAlturaTriangulo->Size = System::Drawing::Size(100, 22);
			this->txtAlturaTriangulo->TabIndex = 4;
			// 
			// txtBaseTriangulo
			// 
			this->txtBaseTriangulo->Location = System::Drawing::Point(82, 40);
			this->txtBaseTriangulo->Name = L"txtBaseTriangulo";
			this->txtBaseTriangulo->Size = System::Drawing::Size(100, 22);
			this->txtBaseTriangulo->TabIndex = 3;
			// 
			// btnCalcularT
			// 
			this->btnCalcularT->Location = System::Drawing::Point(64, 110);
			this->btnCalcularT->Name = L"btnCalcularT";
			this->btnCalcularT->Size = System::Drawing::Size(75, 23);
			this->btnCalcularT->TabIndex = 3;
			this->btnCalcularT->Text = L"Calcular";
			this->btnCalcularT->UseVisualStyleBackColor = true;
			this->btnCalcularT->Click += gcnew System::EventHandler(this, &MyForm::BtnCalcularT_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(21, 69);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(45, 17);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Altura";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(21, 40);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 17);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Base";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->txtApotema);
			this->groupBox3->Controls->Add(this->txtLadosF);
			this->groupBox3->Controls->Add(this->txtBaseF);
			this->groupBox3->Controls->Add(this->btnCalcularF);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Location = System::Drawing::Point(495, 42);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(200, 155);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Figuras con mas de 4 lados";
			// 
			// txtApotema
			// 
			this->txtApotema->Location = System::Drawing::Point(94, 96);
			this->txtApotema->Name = L"txtApotema";
			this->txtApotema->Size = System::Drawing::Size(100, 22);
			this->txtApotema->TabIndex = 7;
			// 
			// txtLadosF
			// 
			this->txtLadosF->Location = System::Drawing::Point(94, 68);
			this->txtLadosF->Name = L"txtLadosF";
			this->txtLadosF->Size = System::Drawing::Size(100, 22);
			this->txtLadosF->TabIndex = 6;
			// 
			// txtBaseF
			// 
			this->txtBaseF->Location = System::Drawing::Point(94, 40);
			this->txtBaseF->Name = L"txtBaseF";
			this->txtBaseF->Size = System::Drawing::Size(100, 22);
			this->txtBaseF->TabIndex = 5;
			// 
			// btnCalcularF
			// 
			this->btnCalcularF->Location = System::Drawing::Point(63, 126);
			this->btnCalcularF->Name = L"btnCalcularF";
			this->btnCalcularF->Size = System::Drawing::Size(75, 23);
			this->btnCalcularF->TabIndex = 4;
			this->btnCalcularF->Text = L"Calcular";
			this->btnCalcularF->UseVisualStyleBackColor = true;
			this->btnCalcularF->Click += gcnew System::EventHandler(this, &MyForm::BtnCalcularF_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(28, 101);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(64, 17);
			this->label8->TabIndex = 5;
			this->label8->Text = L"Apotema";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(28, 69);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(47, 17);
			this->label7->TabIndex = 4;
			this->label7->Text = L"Lados";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(28, 40);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(40, 17);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Base";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(225, 243);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Perímetro";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(225, 270);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(38, 17);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Area";
			// 
			// lblPerimetro
			// 
			this->lblPerimetro->AutoSize = true;
			this->lblPerimetro->Location = System::Drawing::Point(329, 243);
			this->lblPerimetro->Name = L"lblPerimetro";
			this->lblPerimetro->Size = System::Drawing::Size(0, 17);
			this->lblPerimetro->TabIndex = 5;
			// 
			// lblArea
			// 
			this->lblArea->AutoSize = true;
			this->lblArea->Location = System::Drawing::Point(329, 270);
			this->lblArea->Name = L"lblArea";
			this->lblArea->Size = System::Drawing::Size(0, 17);
			this->lblArea->TabIndex = 6;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(745, 361);
			this->Controls->Add(this->lblArea);
			this->Controls->Add(this->lblPerimetro);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BtnCalcularC_Click(System::Object^ sender, System::EventArgs^ e) {
		cuadradito^ cuadrado = gcnew cuadradito();
		double prueba = System::Convert::ToDouble(txtCuadrado->Text);
		lblArea->Text = System::Convert::ToString(cuadrado->Area(prueba));
		lblPerimetro->Text = System::Convert::ToString(cuadrado->Perimetro(prueba));
	}
private: System::Void BtnCalcularT_Click(System::Object^ sender, System::EventArgs^ e) {
	TrianguloRecto^ triangulo = gcnew TrianguloRecto();
	double BaseT = System::Convert::ToDouble(txtBaseTriangulo->Text);
	double Altura = System::Convert::ToDouble(txtAlturaTriangulo->Text);
	lblArea->Text = System::Convert::ToString(triangulo->Area(BaseT,Altura));
	//lblPerimetro->Text = System::Convert::ToString(triangulo->PerimetroJALAPlZ(BaseT,Altura));
	lblPerimetro->Text = System::Convert::ToString(BaseT * 3);

}
private: System::Void BtnCalcularF_Click(System::Object^ sender, System::EventArgs^ e) {
	Figuras^ x = gcnew Figuras();
	double Base = System::Convert::ToDouble(txtBaseF->Text);
	double Apotema = System::Convert::ToDouble(txtApotema->Text);
	int lados = System::Convert::ToInt32(txtLadosF->Text);
	lblArea->Text = System::Convert::ToString(x->Area(Base, Apotema,lados));
	lblPerimetro->Text = System::Convert::ToString(x->Perimetro(lados, Base));
}
};
}
