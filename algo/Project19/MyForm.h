#pragma once
#include "cJuego.h"
#include "Pila.h"
#include "Punto.h"
#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>

namespace Project19 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

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
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  lblVida;

	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  lblCorazon;
	public: System::Windows::Forms::Label^  Cargo;
	private:


	private:

	private:

	public: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	public:
	private:


	protected:
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->lblVida = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lblCorazon = (gcnew System::Windows::Forms::Label());
			this->Cargo = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(76, 89);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(8, 8);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			// 
			// lblVida
			// 
			this->lblVida->AutoSize = true;
			this->lblVida->Location = System::Drawing::Point(12, 9);
			this->lblVida->Name = L"lblVida";
			this->lblVida->Size = System::Drawing::Size(31, 13);
			this->lblVida->TabIndex = 1;
			this->lblVida->Text = L"Vida:";
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(0, 25);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(388, 342);
			this->panel1->TabIndex = 2;
			// 
			// lblCorazon
			// 
			this->lblCorazon->AutoSize = true;
			this->lblCorazon->Location = System::Drawing::Point(49, 9);
			this->lblCorazon->Name = L"lblCorazon";
			this->lblCorazon->Size = System::Drawing::Size(0, 13);
			this->lblCorazon->TabIndex = 3;
			// 
			// Cargo
			// 
			this->Cargo->AutoSize = true;
			this->Cargo->BackColor = System::Drawing::Color::PaleVioletRed;
			this->Cargo->Location = System::Drawing::Point(341, 9);
			this->Cargo->Name = L"Cargo";
			this->Cargo->Size = System::Drawing::Size(13, 13);
			this->Cargo->TabIndex = 4;
			this->Cargo->Text = L"0";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::PaleVioletRed;
			this->label1->Location = System::Drawing::Point(289, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(13, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(168, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"label2";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PaleTurquoise;
			this->ClientSize = System::Drawing::Size(388, 368);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Cargo);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->lblCorazon);
			this->Controls->Add(this->lblVida);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		cJuego *Juego;
		Direccion teclapulsada;
		int vida = 3; //Vida del jugador
		int repetidor = 1; //Repetidor del destructor
		int posy, posx; //Guardar posiciones
		int aparece = 0; //Tiempo de aparicion del enemigo
		int guardo = 0; //Delvolver valor al form princiapl
		int cargar = 0; //Valor del form principal al secundario2
		int puntaje = 0;
		int puntos = 0;
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		Juego = new cJuego();
		Juego->Inicializar();
		teclapulsada = Ninguno;
		lblCorazon->Text = "" + vida;

		cargar = Convert::ToInt16(Cargo->Text);

		if (cargar == 1) {
			ifstream datos("posicion_guardada.txt", ios::in);
			if (!datos.is_open()) {
				cout << "no se abrio";
			}
			else
			{
				string linex;
				string liney;
				string linecora;
				string linerepi;
				string linepunto;
				getline(datos, linex);
				getline(datos, liney);
				getline(datos, linecora);
				getline(datos, linerepi);
				getline(datos, linepunto);
				Juego->AsignarCargaX(stoi(linex));
				Juego->AsignarCargaY(stoi(liney));
				vida = stoi(linecora);
				repetidor = stoi(linerepi);
				puntos = stoi(linepunto);
			}
			lblCorazon->Text = "" + vida;
		}

	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		if (Juego->GET_Choque() == true) {
			Pila<Punto> cola;
			for (int i = 0; i < vida; i++) {
				Punto p(i);
				cola.push(p);
			}

			Punto q = cola.peek();
			for (int i = 0; i < repetidor; i++) {
				q = cola.pop();
				lblCorazon->Text = "" + q.GET_vida();
			}
			repetidor++;

			Juego->SET_Choque(false);
			if (q.GET_vida() == 0) {
				timer1->Enabled = false;
				MessageBox::Show("Perdiste");
			}
		}

		if (aparece == 20) {
			Juego->Agregar(panel1->CreateGraphics());
			aparece = 0;
		}

		if (puntaje == 10) {
			puntos++;
			puntaje = 0;
		}


		label2->Text = "" + puntos;
		puntaje++;

		if (puntos == 20) {
			timer1->Enabled = false;
			MessageBox::Show("Ganaste");
		}

		Graphics ^g = panel1->CreateGraphics();
		BufferedGraphicsContext ^espaciobuffer = BufferedGraphicsManager::Current;
		BufferedGraphics ^buffer = espaciobuffer->Allocate(g, panel1->ClientRectangle);
		buffer->Graphics->DrawImage(pictureBox1->Image, 0, 0, Convert::ToInt16(g->VisibleClipBounds.Width), Convert::ToInt16(g->VisibleClipBounds.Height));

		Juego->Mover(buffer->Graphics, teclapulsada);
		Juego->Mover2(buffer->Graphics);


		buffer->Render(g);
		delete buffer;
		delete espaciobuffer;
		delete g;
		aparece++;

		label1->Text = "" + guardo;
		lblCorazon->Text = "" + (vida - repetidor + 1);
	}
	private: System::Void MyForm_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		if (e->KeyCode == Keys::W) { teclapulsada = Arriba; }
		if (e->KeyCode == Keys::S) { teclapulsada = Abajo; }
		if (e->KeyCode == Keys::D) { teclapulsada = Derecha; }
		if (e->KeyCode == Keys::A) { teclapulsada = Izquierda; }

		if (e->KeyCode == Keys::G) {
			guardo = 1;
			ofstream posicion;
			posicion.open("posicion_guardada.txt"); // Abrimos el archivo en modo lectura

			if (posicion.is_open()) {
				posx = Juego->GET_jugador_x();
				posy = Juego->GET_jugador_y();
				posicion << posx << endl;
				posicion << posy << endl;
				posicion << vida << endl;
				posicion << repetidor << endl;
				posicion << puntos << endl;
			}
			label1->Text = "1";
		}

		Juego->TeclaPulsada(teclapulsada);
	}
	private: System::Void MyForm_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		teclapulsada = Ninguno;
		Juego->TeclaPulsada(teclapulsada);
	}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
