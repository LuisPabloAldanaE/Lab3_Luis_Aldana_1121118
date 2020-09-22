#pragma once
#include "Auxiliar.h"
#include "G1.h"
#include "G2.h"
#include <iostream>


namespace Lab3LuisAldana1121118 {
	using namespace std;
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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ btmEmpezar;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btmEmpezar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// btmEmpezar
			// 
			this->btmEmpezar->Location = System::Drawing::Point(16, 49);
			this->btmEmpezar->Name = L"btmEmpezar";
			this->btmEmpezar->Size = System::Drawing::Size(75, 29);
			this->btmEmpezar->TabIndex = 1;
			this->btmEmpezar->Text = L"Empezar";
			this->btmEmpezar->UseVisualStyleBackColor = true;
			this->btmEmpezar->Click += gcnew System::EventHandler(this, &MyForm::btmEmpezar_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(509, 589);
			this->Controls->Add(this->btmEmpezar);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btmEmpezar_Click(System::Object^ sender, System::EventArgs^ e) {
		G1* Grupo1 = new G1();
		G2* Grupo2 = new G2();
		G3* Grupo3 = new G3();
		//Borra los datos por si quiere volver a jugar.
		/*Grupo1->Eliminar();
		Grupo2->Eliminar();
		Grupo3->Eliminar();*/
		//int Llenar = 1;
		int Vector[52];
		for (int i = 0; i < 52; i++)
		{
			Vector[i] = i + 1;
		}
		int random = 1+rand() %52;
		//Llenar primer grupo
		Grupo1->Llenar(Vector[random]);
		Vector[random] = 0;
		//Llenar segundo grupo
		for (int i = 0; i < 2; i++)
		{
			random = 1 + rand() % 52;
			if (Vector[random] == 0)
			{
				if (i != 0)
				{
					i--;
				}
				else
				{
					i = 0;
				}
			}
			else
			{
				Grupo2->Llenar(Vector[random]);
				Vector[random] = 0;
			}
		}
		//Llenar tercer grupo
		for (int i = 0; i < 3; i++)
		{
			random = 1 + rand() % 52;
			if (Vector[random] == 0)
			{
				if (i != 0)
				{
					i--;
				}
				else
				{
					i = 0;
				}
			}
			else
			{
				Grupo3->Llenar(Vector[random]);
				Vector[random] = 0;
			}
		}



		

		
	}
	};
}
