#pragma once
#include "ruinas_machupichu.h"

namespace machupichu {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Resumen de info_salida
	/// </summary>
	public ref class info_salida : public System::Windows::Forms::Form
	{
	public:
		info_salida(void)
		{
			InitializeComponent();
			mostrarListaGeneral();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~info_salida()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::ColumnHeader^ columnHeader4;
	private: System::Windows::Forms::ColumnHeader^ columnHeader5;
	private: System::Windows::Forms::ColumnHeader^ columnHeader6;
	private: System::Windows::Forms::ColumnHeader^ columnHeader7;
	private: System::Windows::Forms::ColumnHeader^ columnHeader8;
	private: System::Windows::Forms::ColumnHeader^ columnHeader9;
	private: System::Windows::Forms::ColumnHeader^ columnHeader10;
	private: System::Windows::Forms::ColumnHeader^ columnHeader11;
	private: System::Windows::Forms::ColumnHeader^ columnHeader12;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ txt_ordenS;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ lbl_reparado;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DateTimePicker^ date_entrega;
	private: System::Windows::Forms::TextBox^ txt_total;
	private: System::Windows::Forms::TextBox^ txt_informe;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button1;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(info_salida::typeid));
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader8 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader9 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader10 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader11 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader12 = (gcnew System::Windows::Forms::ColumnHeader());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->txt_ordenS = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->lbl_reparado = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->date_entrega = (gcnew System::Windows::Forms::DateTimePicker());
			this->txt_total = (gcnew System::Windows::Forms::TextBox());
			this->txt_informe = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(12) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader6, this->columnHeader7, this->columnHeader8,
					this->columnHeader9, this->columnHeader10, this->columnHeader11, this->columnHeader12
			});
			this->listView1->Dock = System::Windows::Forms::DockStyle::Top;
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(0, 0);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(860, 114);
			this->listView1->TabIndex = 20;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"ID";
			this->columnHeader1->Width = 90;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"NOMBRE";
			this->columnHeader2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader2->Width = 90;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"DIRECCION";
			this->columnHeader3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader3->Width = 90;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"TELEFONO";
			this->columnHeader4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader4->Width = 90;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"TIPO";
			this->columnHeader5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader5->Width = 90;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"MARCA";
			this->columnHeader6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader6->Width = 90;
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"MODELO";
			this->columnHeader7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader7->Width = 90;
			// 
			// columnHeader8
			// 
			this->columnHeader8->Text = L"No. SERIE";
			this->columnHeader8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader8->Width = 90;
			// 
			// columnHeader9
			// 
			this->columnHeader9->Text = L"ACCESORIOS";
			this->columnHeader9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader9->Width = 90;
			// 
			// columnHeader10
			// 
			this->columnHeader10->Text = L"ESTADO DEL EQUIPO";
			this->columnHeader10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader10->Width = 90;
			// 
			// columnHeader11
			// 
			this->columnHeader11->Text = L"TECNICO";
			this->columnHeader11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader11->Width = 90;
			// 
			// columnHeader12
			// 
			this->columnHeader12->Text = L"TEL TECNICO";
			this->columnHeader12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader12->Width = 90;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::LightSeaGreen;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel3->Location = System::Drawing::Point(0, 114);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(161, 323);
			this->panel3->TabIndex = 23;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::PaleGoldenrod;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->txt_ordenS);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label24);
			this->panel2->Controls->Add(this->lbl_reparado);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->date_entrega);
			this->panel2->Controls->Add(this->txt_total);
			this->panel2->Controls->Add(this->txt_informe);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 114);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(699, 323);
			this->panel2->TabIndex = 22;
			// 
			// txt_ordenS
			// 
			this->txt_ordenS->Location = System::Drawing::Point(293, 68);
			this->txt_ordenS->Name = L"txt_ordenS";
			this->txt_ordenS->Size = System::Drawing::Size(37, 20);
			this->txt_ordenS->TabIndex = 28;
			this->txt_ordenS->TextChanged += gcnew System::EventHandler(this, &info_salida::textBox1_TextChanged);
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(398, 227);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(20, 25);
			this->label6->TabIndex = 27;
			this->label6->Text = L"*";
			this->label6->Click += gcnew System::EventHandler(this, &info_salida::label6_Click);
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(334, 66);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(20, 25);
			this->label5->TabIndex = 26;
			this->label5->Text = L"*";
			this->label5->Click += gcnew System::EventHandler(this, &info_salida::label5_Click);
			// 
			// label24
			// 
			this->label24->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(666, 152);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(20, 25);
			this->label24->TabIndex = 25;
			this->label24->Text = L"*";
			// 
			// lbl_reparado
			// 
			this->lbl_reparado->AutoSize = true;
			this->lbl_reparado->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_reparado->Location = System::Drawing::Point(199, 27);
			this->lbl_reparado->Name = L"lbl_reparado";
			this->lbl_reparado->Size = System::Drawing::Size(111, 25);
			this->lbl_reparado->TabIndex = 24;
			this->lbl_reparado->Text = L"REPARADO";
			this->lbl_reparado->Click += gcnew System::EventHandler(this, &info_salida::lbl_reparado_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(201, 68);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(88, 16);
			this->label4->TabIndex = 23;
			this->label4->Text = L"No. Orden:";
			this->label4->Click += gcnew System::EventHandler(this, &info_salida::label4_Click);
			// 
			// date_entrega
			// 
			this->date_entrega->Location = System::Drawing::Point(336, 267);
			this->date_entrega->Name = L"date_entrega";
			this->date_entrega->Size = System::Drawing::Size(221, 20);
			this->date_entrega->TabIndex = 21;
			this->date_entrega->ValueChanged += gcnew System::EventHandler(this, &info_salida::date_entrega_ValueChanged);
			// 
			// txt_total
			// 
			this->txt_total->Location = System::Drawing::Point(303, 223);
			this->txt_total->Name = L"txt_total";
			this->txt_total->Size = System::Drawing::Size(91, 20);
			this->txt_total->TabIndex = 20;
			this->txt_total->TextChanged += gcnew System::EventHandler(this, &info_salida::txt_total_TextChanged);
			// 
			// txt_informe
			// 
			this->txt_informe->Location = System::Drawing::Point(204, 130);
			this->txt_informe->Multiline = true;
			this->txt_informe->Name = L"txt_informe";
			this->txt_informe->Size = System::Drawing::Size(458, 68);
			this->txt_informe->TabIndex = 19;
			this->txt_informe->TextChanged += gcnew System::EventHandler(this, &info_salida::txt_informe_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(201, 224);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(96, 16);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Costo Total:";
			this->label3->Click += gcnew System::EventHandler(this, &info_salida::label3_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(201, 267);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(129, 16);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Feha de Entrega:";
			this->label2->Click += gcnew System::EventHandler(this, &info_salida::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(201, 111);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(159, 16);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Informe del Técnico:";
			this->label1->Click += gcnew System::EventHandler(this, &info_salida::label1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::LightSeaGreen;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->button1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel1->Location = System::Drawing::Point(699, 114);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(161, 323);
			this->panel1->TabIndex = 21;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Control;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Khaki;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(18, 125);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(131, 54);
			this->button1->TabIndex = 22;
			this->button1->Text = L"GUARDAR";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &info_salida::button1_Click_1);
			// 
			// info_salida
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(860, 437);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->listView1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"info_salida";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"INFORMACION SALIDA - DOCKET";
			this->Load += gcnew System::EventHandler(this, &info_salida::info_salida_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   void mostrarListaGeneral() {
			   char mystring[200];
			   FILE* fe;
			   fe = fopen("machupichu_ingreso.txt", "r");
			   char cadena[80], * d1, * d2, * d3, * d4, * d5, * d6, * d7, * d8, * d9, * d10, * d11, * d12, * d13;
			   rewind(fe); //Situa el cursos de lectura/escritura al inicio
			   listView1->Items->Clear(); //REVISAR
			   bool found = false;
			   do {
				   fgets(mystring, 200, fe);
				   d1 = strtok(mystring, ";");
				   d2 = strtok(NULL, ";");
				   d3 = strtok(NULL, ";");
				   d4 = strtok(NULL, ";");
				   d5 = strtok(NULL, ";");
				   d6 = strtok(NULL, ";");
				   d7 = strtok(NULL, ";");
				   d8 = strtok(NULL, ";");
				   d9 = strtok(NULL, ";");
				   d10 = strtok(NULL, ";");
				   d11 = strtok(NULL, ";");
				   d12 = strtok(NULL, ";");
				   //d13 = strtok(NULL, ";");
				   String^ id = gcnew String(d1);
				   String^ nombre = gcnew String(d2);
				   String^ direccion = gcnew String(d3);
				   String^ telefono = gcnew String(d4);
				   String^ tipo = gcnew String(d5);
				   String^ marca = gcnew String(d6);
				   String^ modelo = gcnew String(d7);
				   String^ serie = gcnew String(d8);
				   String^ accesorio = gcnew String(d9);
				   String^ estado = gcnew String(d10);
				   String^ tecnico = gcnew String(d11);
				   String^ telTecnico = gcnew String(d12);
				   //String^ estadoFinal = gcnew String(d13);
				   ListViewItem^ listView1 = gcnew Windows::Forms::ListViewItem(id);
				   listView1->SubItems->Add(nombre);
				   listView1->SubItems->Add(direccion);
				   listView1->SubItems->Add(telefono);
				   listView1->SubItems->Add(tipo);
				   listView1->SubItems->Add(marca);
				   listView1->SubItems->Add(modelo);
				   listView1->SubItems->Add(serie);
				   listView1->SubItems->Add(accesorio);
				   listView1->SubItems->Add(estado);
				   listView1->SubItems->Add(tecnico);
				   listView1->SubItems->Add(telTecnico);
				   //listView1->SubItems->Add(estadoFinal);
				   this->listView1->Items->Add(listView1);
			   } while (feof(fe) == 0);//EOF END OF FILE
			   fclose(fe);
		   }
	private: System::Void info_salida_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void lbl_reparado_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void txt_informe_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void txt_total_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void date_entrega_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
		   //El Id que se ingresa en txt_ordenS == a un id de mi lista general
		   void verificarOrdenListaGeneral() {//SEGUNDO
			   Boolean datosIguales;
			   char mystring[200];
			   FILE* fe;
			   fe = fopen("machupichu_ingreso.txt", "r");
			   char cadena[80], * d1;
			   rewind(fe); //Situa el cursos de lectura/escritura al inicio
			   do {
				   fgets(mystring, 200, fe);
				   d1 = strtok(mystring, ";");
				   String^ id = gcnew String(d1);
				   if (txt_ordenS->Text == id) {
					   datosIguales = true;
				   }
			   } while (feof(fe) == 0);//EOF END OF FILE
			   if (datosIguales == true) {
				   ingresarDatoGeneral();
			   }else {
				   MessageBox::Show("No se encontró la orden ingresada", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
			   }
			   fclose(fe);
		   }
		   void verificarOrdenSalida() {//PRIMERO
			   bool existeReparacion;
			   char mystringSalida[200];
			   FILE* fs;
			   fs = fopen("machupichu_salida.txt", "r");
			   char cadena[80], * s1;
			   rewind(fs);
			   do {
				   fgets(mystringSalida, 200, fs);
				   s1 = strtok(mystringSalida, ";");
				   String^ idSalida = gcnew String(s1);
				   if (txt_ordenS->Text == idSalida) {
					   existeReparacion = true;
				   }
			   } while (feof(fs) == 0);//EOF END OF FILE
			   if (existeReparacion == true) {
				   MessageBox::Show("El ID ingresado ya fue reparado", "AVISO", MessageBoxButtons::OK, MessageBoxIcon::Information);
			   }else {
				   verificarOrdenListaGeneral();
			   }
		   }

		   void ingresarDatoGeneral(){//TERCERO
			   StreamWriter^ archivo = gcnew StreamWriter("machupichu_salida.txt", "a+");
			   MessageBox::Show("Espere un momento...", "GRABANDO DATOS", MessageBoxButtons::OK, MessageBoxIcon::Information);

			   if (txt_informe->Text == "" || txt_total->Text == "" || date_entrega->Text == "") {
				   MessageBox::Show("Debes de llenar los campos que tienen un * al final", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
			   }
			   else {
				   archivo->Write("\r\n");
				   archivo->Write(txt_ordenS->Text); archivo->Write(";");
				   archivo->Write(txt_informe->Text); archivo->Write(";");
				   archivo->Write(txt_total->Text); archivo->Write(";");
				   archivo->Write(date_entrega->Text); archivo->Write(";");
				   archivo->Write("A");
				   this->txt_ordenS->Text = ""; this->txt_informe->Text = ""; this->txt_total->Text = ""; this->date_entrega->Text = "";
				   MessageBox::Show("HAZ INGRESADO CORRECTAMENTE....", "INFORME SALIDA", MessageBoxButtons::OK, MessageBoxIcon::Information);
			   }
			   archivo->Close();
		   }

private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	verificarOrdenSalida();
}
};
}
