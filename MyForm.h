#pragma once
#include "Auxiliar.h"
#include "G1.h"
#include "G2.h"
#include "G3.h"
#include "G4.h"
#include "G5.h"
#include "G6.h"
#include "G7.h"
#include "Mazo.h"
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
		G4* Grupo4 = new G4();
		G5* Grupo5 = new G5();
		G6* Grupo6 = new G6();
		G7* Grupo7 = new G7();
		Mazo* GrupoM = new Mazo();
		Auxiliar* Auxi = new Auxiliar();
		
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
		//Llenar cuarto grupo
		for (int i = 0; i < 4; i++)
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
				Grupo4->Llenar(Vector[random]);
				Vector[random] = 0;
			}
		}
		//Llenar quinto grupo
		for (int i = 0; i < 5; i++)
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
				Grupo5->Llenar(Vector[random]);
				Vector[random] = 0;
			}
		}
		//Llenar sexto grupo
		for (int i = 0; i < 6; i++)
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
				Grupo6->Llenar(Vector[random]);
				Vector[random] = 0;
			}
		}
		//Llenar septimo grupo
		for (int i = 0; i < 7; i++)
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
				Grupo7->Llenar(Vector[random]);
				Vector[random] = 0;
			}
		}
		//Llenar el mazo con las cartas restantes.
		for (int i = 0; i < 52; i++)
		{
			if (Vector[i] != 0)
			{
				GrupoM->Llenar(Vector[i]);

			}
		}
		//Mostrar los valores
		

		

		
	}
	};
}
