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
	private: System::Windows::Forms::Label^ label2;
	public:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ListBox^ lstG1;
	private: System::Windows::Forms::ListBox^ lstG2;
	private: System::Windows::Forms::ListBox^ lstG3;
	private: System::Windows::Forms::ListBox^ lstG4;
	private: System::Windows::Forms::ListBox^ lstG6;





	private: System::Windows::Forms::ListBox^ lstG5;
	private: System::Windows::Forms::ListBox^ lstG7;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ lblMazo;
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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lstG1 = (gcnew System::Windows::Forms::ListBox());
			this->lstG2 = (gcnew System::Windows::Forms::ListBox());
			this->lstG3 = (gcnew System::Windows::Forms::ListBox());
			this->lstG4 = (gcnew System::Windows::Forms::ListBox());
			this->lstG6 = (gcnew System::Windows::Forms::ListBox());
			this->lstG5 = (gcnew System::Windows::Forms::ListBox());
			this->lstG7 = (gcnew System::Windows::Forms::ListBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->lblMazo = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(269, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Presione el boton para empezar el juego:";
			// 
			// btmEmpezar
			// 
			this->btmEmpezar->Location = System::Drawing::Point(12, 29);
			this->btmEmpezar->Name = L"btmEmpezar";
			this->btmEmpezar->Size = System::Drawing::Size(75, 29);
			this->btmEmpezar->TabIndex = 1;
			this->btmEmpezar->Text = L"Empezar";
			this->btmEmpezar->UseVisualStyleBackColor = true;
			this->btmEmpezar->Click += gcnew System::EventHandler(this, &MyForm::btmEmpezar_Click);
			// 
			// btmMover
			// 
			this->btmMover->Enabled = false;
			this->btmMover->Location = System::Drawing::Point(632, 214);
			this->btmMover->Name = L"btmMover";
			this->btmMover->Size = System::Drawing::Size(95, 51);
			this->btmMover->TabIndex = 2;
			this->btmMover->Text = L"Hacer Movimiento";
			this->btmMover->UseVisualStyleBackColor = true;
			this->btmMover->Click += gcnew System::EventHandler(this, &MyForm::btmMover_Click);
			// 
			// txtFuente
			// 
			this->txtFuente->Enabled = false;
			this->txtFuente->Location = System::Drawing::Point(515, 200);
			this->txtFuente->Name = L"txtFuente";
			this->txtFuente->Size = System::Drawing::Size(100, 22);
			this->txtFuente->TabIndex = 3;
			// 
			// txtDestino
			// 
			this->txtDestino->Enabled = false;
			this->txtDestino->Location = System::Drawing::Point(515, 228);
			this->txtDestino->Name = L"txtDestino";
			this->txtDestino->Size = System::Drawing::Size(100, 22);
			this->txtDestino->TabIndex = 4;
			// 
			// txtCantCartas
			// 
			this->txtCantCartas->Enabled = false;
			this->txtCantCartas->Location = System::Drawing::Point(515, 256);
			this->txtCantCartas->Name = L"txtCantCartas";
			this->txtCantCartas->Size = System::Drawing::Size(100, 22);
			this->txtCantCartas->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(416, 203);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 17);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Desde donde";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(448, 231);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 17);
			this->label3->TabIndex = 7;
			this->label3->Text = L"A donde";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(380, 259);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(129, 17);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Cantidad de Cartas";
			// 
			// lstG1
			// 
			this->lstG1->FormattingEnabled = true;
			this->lstG1->ItemHeight = 16;
			this->lstG1->Location = System::Drawing::Point(25, 197);
			this->lstG1->Name = L"lstG1";
			this->lstG1->Size = System::Drawing::Size(41, 228);
			this->lstG1->TabIndex = 9;
			// 
			// lstG2
			// 
			this->lstG2->FormattingEnabled = true;
			this->lstG2->ItemHeight = 16;
			this->lstG2->Location = System::Drawing::Point(72, 197);
			this->lstG2->Name = L"lstG2";
			this->lstG2->Size = System::Drawing::Size(41, 228);
			this->lstG2->TabIndex = 10;
			// 
			// lstG3
			// 
			this->lstG3->FormattingEnabled = true;
			this->lstG3->ItemHeight = 16;
			this->lstG3->Location = System::Drawing::Point(119, 197);
			this->lstG3->Name = L"lstG3";
			this->lstG3->Size = System::Drawing::Size(41, 228);
			this->lstG3->TabIndex = 11;
			// 
			// lstG4
			// 
			this->lstG4->FormattingEnabled = true;
			this->lstG4->ItemHeight = 16;
			this->lstG4->Location = System::Drawing::Point(166, 197);
			this->lstG4->Name = L"lstG4";
			this->lstG4->Size = System::Drawing::Size(41, 228);
			this->lstG4->TabIndex = 12;
			// 
			// lstG6
			// 
			this->lstG6->FormattingEnabled = true;
			this->lstG6->ItemHeight = 16;
			this->lstG6->Location = System::Drawing::Point(260, 197);
			this->lstG6->Name = L"lstG6";
			this->lstG6->Size = System::Drawing::Size(41, 228);
			this->lstG6->TabIndex = 13;
			// 
			// lstG5
			// 
			this->lstG5->FormattingEnabled = true;
			this->lstG5->ItemHeight = 16;
			this->lstG5->Location = System::Drawing::Point(213, 197);
			this->lstG5->Name = L"lstG5";
			this->lstG5->Size = System::Drawing::Size(41, 228);
			this->lstG5->TabIndex = 14;
			// 
			// lstG7
			// 
			this->lstG7->FormattingEnabled = true;
			this->lstG7->ItemHeight = 16;
			this->lstG7->Location = System::Drawing::Point(307, 197);
			this->lstG7->Name = L"lstG7";
			this->lstG7->Size = System::Drawing::Size(41, 228);
			this->lstG7->TabIndex = 15;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(13, 136);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(46, 17);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Mazo:";
			// 
			// lblMazo
			// 
			this->lblMazo->AutoSize = true;
			this->lblMazo->Location = System::Drawing::Point(69, 136);
			this->lblMazo->Name = L"lblMazo";
			this->lblMazo->Size = System::Drawing::Size(0, 17);
			this->lblMazo->TabIndex = 17;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(847, 589);
			this->Controls->Add(this->lblMazo);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->lstG7);
			this->Controls->Add(this->lstG5);
			this->Controls->Add(this->lstG6);
			this->Controls->Add(this->lstG4);
			this->Controls->Add(this->lstG3);
			this->Controls->Add(this->lstG2);
			this->Controls->Add(this->lstG1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtCantCartas);
			this->Controls->Add(this->txtDestino);
			this->Controls->Add(this->txtFuente);
			this->Controls->Add(this->btmMover);
			this->Controls->Add(this->btmEmpezar);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btmEmpezar_Click(System::Object^ sender, System::EventArgs^ e) {
		
		btmMover->Enabled = true;
		txtFuente->Enabled = true;
		txtDestino->Enabled = true;
		txtCantCartas->Enabled = true;
		int Vector[52];
		int Comprobar = 0;
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
		Comprobar = Grupo3->Revisar(0);
	}

	private: System::Void btmMover_Click(System::Object^ sender, System::EventArgs^ e) {
		int Comprobar = 0;
		//Vector que sera de apoyo para pasar datos de una pila a otra.
		int VecAux[15];
		//Varaibles que contienen la dirección de donde viene y a la que van las cartas.
		int OpciónF = VerOpcionF();
		int OpciónD = VerOpcionD();
		//Variable para obetener la cantidad de cartas que sacaran de la pila.
		int CantidadCartas = Convert::ToInt16(txtCantCartas->Text);
		//Switch para ver de donde saldran las cartas y llamar la función que hara el traslado de datos.
		switch (OpciónF)
		{
		case 1:
			Grupo1->Sacar(CantidadCartas);
			Llenar(VecAux, OpciónD, CantidadCartas);
			break;
		case 2:
			Grupo2->Sacar(CantidadCartas);
			Llenar(VecAux, OpciónD, CantidadCartas);
			break;
		case 3:
			Grupo3->Sacar(CantidadCartas, VecAux);
			Llenar(VecAux, OpciónD, CantidadCartas);
			break;
		case 4:
			Grupo4->Sacar(CantidadCartas);
			Llenar(VecAux, OpciónD, CantidadCartas);
			break;
		case 5:
			Grupo5->Sacar(CantidadCartas);
			Llenar(VecAux, OpciónD, CantidadCartas);
			break;
		case 6:
			Grupo6->Sacar(CantidadCartas);
			Llenar(VecAux, OpciónD, CantidadCartas);
			break;
		case 7:
			Grupo7->Sacar(CantidadCartas);
			Llenar(VecAux, OpciónD, CantidadCartas);
			break;
		case 8:
			GrupoM->Sacar();
			Llenar(VecAux, OpciónD, CantidadCartas);
			break;
		default:
			break;
		}
		//Mostrar los datos.
		//Comprobación por si hay 5 seguidas en alguna pila.
		Comprobar = Grupo1->Revisar(0);
		if (Comprobar < 5)
		{
			Comprobar = Grupo2->Revisar(0);
		}
		if (Comprobar < 5)
		{
			Comprobar = Grupo3->Revisar(0);
		}
		if (Comprobar < 5)
		{
			Comprobar = Grupo4->Revisar(0);
		}
		if (Comprobar < 5)
		{
			Comprobar = Grupo5->Revisar(0);
		}
		if (Comprobar < 5)
		{
			Comprobar = Grupo6->Revisar(0);
		}
		if (Comprobar < 5)
		{
			Comprobar = Grupo7->Revisar(0);
		}
		else
		{
			btmMover->Enabled = false;
			txtFuente->Enabled = false;
			txtDestino->Enabled = false;
			txtCantCartas->Enabled = false;

		}
	}

	void Llenar(int Vec[15], int destino, int Cont) {
		int i = 0;
		if (destino == 1)
		{
			while (Cont != 0)
			{
				Grupo1->Llenar(Vec[i]);
				Vec[i] = 0;
				i++;
				Cont--;
			}
		}
		if (destino == 2)
		{
			while (Cont != 0)
			{
				Grupo2->Llenar(Vec[i]);
				Vec[i] = 0;
				i++;
				Cont--;
			}
		}
		if (destino == 3)
		{
			while (Cont != 0)
			{
				Grupo3->Llenar(Vec[i]);
				Vec[i] = 0;
				i++;
				Cont--;
			}
		}
		if (destino == 4)
		{
			while (Cont != 0)
			{
				Grupo4->Llenar(Vec[i]);
				Vec[i] = 0;
				i++;
				Cont--;
			}
		}
		if (destino == 5)
		{
			while (Cont != 0)
			{
				Grupo5->Llenar(Vec[i]);
				Vec[i] = 0;
				i++;
				Cont--;
			}
		}
		if (destino == 6)
		{
			while (Cont != 0)
			{
				Grupo6->Llenar(Vec[i]);
				Vec[i] = 0;
				i++;
				Cont--;
			}
		}
		if (destino == 7)
		{
			while (Cont != 0)
			{
				Grupo7->Llenar(Vec[i]);
				Vec[i] = 0;
				i++;
				Cont--;
			}
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
	void Picas() {

	}
	void Espadas() {

	}
	void Diamantes() {

	}
	void Trebol() {

	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}
};
}
