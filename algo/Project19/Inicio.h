#pragma once
#include "MyForm.h"
#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>

using namespace std;

namespace Project19 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Inicio
	/// </summary>
	public ref class Inicio : public System::Windows::Forms::Form
	{
	public:
		Inicio(void)
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
		~Inicio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Button^  btnOpc;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Inicio::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->btnOpc = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Red;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(52, 246);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(88, 51);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Iniciar Nuevo Juego";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Inicio::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Red;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(178, 246);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(88, 51);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Cargar ultimo Juego";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Inicio::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Red;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(52, 303);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(88, 51);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Creditos";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Inicio::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Red;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(105, 360);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(88, 51);
			this->button4->TabIndex = 2;
			this->button4->Text = L"Salir";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Inicio::button4_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(-3, -1);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(332, 121);
			this->label1->TabIndex = 5;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(90, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(162, 82);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox2->TabIndex = 6;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(68, 123);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(184, 100);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(280, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 8;
			this->label2->Visible = false;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Inicio::timer1_Tick);
			// 
			// btnOpc
			// 
			this->btnOpc->BackColor = System::Drawing::Color::Red;
			this->btnOpc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOpc->ForeColor = System::Drawing::Color::White;
			this->btnOpc->Location = System::Drawing::Point(178, 303);
			this->btnOpc->Name = L"btnOpc";
			this->btnOpc->Size = System::Drawing::Size(88, 51);
			this->btnOpc->TabIndex = 9;
			this->btnOpc->Text = L"Opciones";
			this->btnOpc->UseVisualStyleBackColor = false;
			this->btnOpc->Click += gcnew System::EventHandler(this, &Inicio::btnOpc_Click);
			// 
			// Inicio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(327, 438);
			this->Controls->Add(this->btnOpc);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"Inicio";
			this->Text = L"Inicio";
			this->Load += gcnew System::EventHandler(this, &Inicio::Inicio_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		int n;
		int guardo;
		bool ocupado = false;
		bool ina = false;
	private: System::Void Inicio_Load(System::Object^  sender, System::EventArgs^  e) {
		ifstream datos("guardo.txt", ios::in);
		if (!datos.is_open()) {
			cout << "no se abrio";
		}
		else
		{
			string lineaguardo;
			getline(datos, lineaguardo);
			guardo = stoi(lineaguardo);
		}
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		MyForm ^nuevo = gcnew MyForm();

		nuevo->ShowDialog();
		nuevo->Close();

		guardo = Convert::ToInt16(nuevo->label1->Text);

		ofstream datos;
		datos.open("guardo.txt");
		if (!datos.is_open()) {
			label1->Text = "mal";
		}
		else { datos << guardo << endl; }
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		if (guardo == 1) {
			MyForm ^nuevo = gcnew MyForm();
			nuevo->Cargo->Text = "" + guardo;
			nuevo->ShowDialog();
			nuevo->Close();

			guardo = Convert::ToInt16(nuevo->label1->Text);
			ofstream datos;
			datos.open("guardo.txt");
			if (!datos.is_open()) {
				label1->Text = "mal";
			}
			else { datos << guardo << endl; }
		}
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show("Integrantes: \nLuciano Lopez\nMark Smitch\nHector");
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}

	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void btnOpc_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show("      PARA MOVERSE \n\n (W) Para moverse hacia arriba \n (S) Para moverse hacia abajo \n (A) Para moverse a la izquierda \n (D) Para moverse a la derecha \n\n     PARA GUARDAR Y CARGAR PARTIDA: \n\n (G) Para guardar la partida 'presionar durante el juego' \n\n NOTA: EL BOTON CARGAR SOLO APARECERA CUANDO HALLAS GUARDADO LA PARTIDA. SOLO PUEDES GUARDAR UNA VEZ");
	}
	};
}
