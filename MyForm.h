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
		G1* Grupo1 = new G1();
		G2* Grupo2 = new G2();
		G3* Grupo3 = new G3();
		G4* Grupo4 = new G4();
		G5* Grupo5 = new G5();
		G6* Grupo6 = new G6();
		G7* Grupo7 = new G7();
		Mazo* GrupoM = new Mazo();
		Auxiliar* Auxi = new Auxiliar();
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
	private: System::Windows::Forms::Button^ btmMover;
	private: System::Windows::Forms::TextBox^ txtFuente;
	private: System::Windows::Forms::TextBox^ txtDestino;
	private: System::Windows::Forms::TextBox^ txtCantCartas;

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
			this->btmMover = (gcnew System::Windows::Forms::Button());
			this->txtFuente = (gcnew System::Windows::Forms::TextBox());
			this->txtDestino = (gcnew System::Windows::Forms::TextBox());
			this->txtCantCartas = (gcnew System::Windows::Forms::TextBox());
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
			// btmMover
			// 
			this->btmMover->Location = System::Drawing::Point(138, 108);
			this->btmMover->Name = L"btmMover";
			this->btmMover->Size = System::Drawing::Size(95, 51);
			this->btmMover->TabIndex = 2;
			this->btmMover->Text = L"Hacer Movimiento";
			this->btmMover->UseVisualStyleBackColor = true;
			this->btmMover->Click += gcnew System::EventHandler(this, &MyForm::btmMover_Click);
			// 
			// txtFuente
			// 
			this->txtFuente->Location = System::Drawing::Point(16, 94);
			this->txtFuente->Name = L"txtFuente";
			this->txtFuente->Size = System::Drawing::Size(100, 22);
			this->txtFuente->TabIndex = 3;
			// 
			// txtDestino
			// 
			this->txtDestino->Location = System::Drawing::Point(16, 122);
			this->txtDestino->Name = L"txtDestino";
			this->txtDestino->Size = System::Drawing::Size(100, 22);
			this->txtDestino->TabIndex = 4;
			// 
			// txtCantCartas
			// 
			this->txtCantCartas->Location = System::Drawing::Point(16, 150);
			this->txtCantCartas->Name = L"txtCantCartas";
			this->txtCantCartas->Size = System::Drawing::Size(100, 22);
			this->txtCantCartas->TabIndex = 5;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(509, 589);
			this->Controls->Add(this->txtCantCartas);
			this->Controls->Add(this->txtDestino);
			this->Controls->Add(this->txtFuente);
			this->Controls->Add(this->btmMover);
			this->Controls->Add(this->btmEmpezar);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btmEmpezar_Click(System::Object^ sender, System::EventArgs^ e) {
		
		
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

	private: System::Void btmMover_Click(System::Object^ sender, System::EventArgs^ e) {
		int OpciónF = VerOpcionF();
		int OpciónD = VerOpcionD();
		int CantidadCartas = Convert::ToInt16(txtCantCartas->Text);
		switch (OpciónF)
		{
		case 1:
			Grupo1->Sacar(CantidadCartas);
			break;
		case 2:
			Grupo2->Sacar(CantidadCartas);
			break;
		case 3:
			Grupo3->Sacar(CantidadCartas);
			break;
		case 4:
			Grupo4->Sacar(CantidadCartas);
			break;
		case 5:
			Grupo5->Sacar(CantidadCartas);
			break;
		case 6:
			Grupo6->Sacar(CantidadCartas);
			break;
		case 7:
			Grupo7->Sacar(CantidadCartas);
			break;
		case 8:
			GrupoM->Sacar();
			break;
		default:
			break;
		}
		switch (OpciónD)
		{
		case 1:
			Auxi->Sacar();
			break;
		case 2:
			Auxi->Sacar();
			break;
		case 3:
			Auxi->Sacar();
			break;
		case 4:
			Auxi->Sacar();
			break;
		case 5:
			Auxi->Sacar();
			break;
		case 6:
			Auxi->Sacar();
			break;
		case 7:
			Auxi->Sacar();
			break;
		default:
			break;
		}
		
	}

	int VerOpcionF() {
		int opción = 0;
		if (txtFuente->Text == "G1")
		{
			opción = 1;
		}
		if (txtFuente->Text == "G2")
		{
			opción = 2;
		}
		if (txtFuente->Text == "G3")
		{
			opción = 3;
		}
		if (txtFuente->Text == "G4")
		{
			opción = 4;
		}
		if (txtFuente->Text == "G5")
		{
			opción = 5;
		}
		if (txtFuente->Text == "G6")
		{
			opción = 6;
		}
		if (txtFuente->Text == "G7")
		{
			opción = 7;
		}
		if (txtFuente->Text == "Mazo")
		{
			opción = 8;
		}
		return opción;
	}

	int VerOpcionD() {
		int opción = 0;
		if (txtDestino->Text == "G1")
		{
			opción = 1;
		}
		if (txtDestino->Text == "G2")
		{
			opción = 2;
		}
		if (txtDestino->Text == "G3")
		{
			opción = 3;
		}
		if (txtDestino->Text == "G4")
		{
			opción = 4;
		}
		if (txtDestino->Text == "G5")
		{
			opción = 5;
		}
		if (txtDestino->Text == "G6")
		{
			opción = 6;
		}
		if (txtDestino->Text == "G7")
		{
			opción = 7;
		}
		return opción;
	}
};
}
