#pragma once
#include "info_salida.h"
#include "reparado.h"
#include "ruinas_machupichu.h"

namespace machupichu {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de pendiente
	/// </summary>
	public ref class pendiente : public System::Windows::Forms::Form
	{
	public:
		pendiente(void)
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
		~pendiente()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel2;
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

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(pendiente::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button1->BackColor = System::Drawing::SystemColors::Control;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Khaki;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(28, 387);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 38);
			this->button1->TabIndex = 0;
			this->button1->Text = L"REGRESAR";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &pendiente::button1_Click_1);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->listView1);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(860, 437);
			this->panel2->TabIndex = 2;
			// 
			// listView1
			// 
			this->listView1->Activation = System::Windows::Forms::ItemActivation::OneClick;
			this->listView1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(12) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader6, this->columnHeader7, this->columnHeader8,
					this->columnHeader9, this->columnHeader10, this->columnHeader11, this->columnHeader12
			});
			this->listView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->HideSelection = false;
			this->listView1->HoverSelection = true;
			this->listView1->Location = System::Drawing::Point(0, 0);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(703, 437);
			this->listView1->TabIndex = 3;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &pendiente::listView1_SelectedIndexChanged);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"ID";
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"NOMBRE";
			this->columnHeader2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader2->Width = 175;
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
			this->columnHeader12->Text = L"TEL. TECNICO";
			this->columnHeader12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader12->Width = 90;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::LightSeaGreen;
			this->panel3->Controls->Add(this->button3);
			this->panel3->Controls->Add(this->button2);
			this->panel3->Controls->Add(this->button1);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel3->Location = System::Drawing::Point(703, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(157, 437);
			this->panel3->TabIndex = 2;
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button3->BackColor = System::Drawing::SystemColors::Control;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Khaki;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(28, 343);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(99, 38);
			this->button3->TabIndex = 3;
			this->button3->Text = L"LISTADO DE REPARADOS";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &pendiente::button3_Click);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button2->BackColor = System::Drawing::SystemColors::Control;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Khaki;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(17, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(128, 38);
			this->button2->TabIndex = 2;
			this->button2->Text = L"INFORME SALIDA";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &pendiente::button2_Click_1);
			// 
			// pendiente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(860, 437);
			this->Controls->Add(this->panel2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"pendiente";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LISTADO GENERAL";
			this->Load += gcnew System::EventHandler(this, &pendiente::pendiente_Load);
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
		void mostrarListaGeneral() {
			char mystring[200];
			FILE* fe;
			fe = fopen("machupichu_ingreso.txt", "r");
			char cadena[80], * d1, * d2, * d3, * d4, * d5, * d6, * d7, * d8, * d9, * d10, * d11, * d12;
			rewind(fe); //Situa el cursos de lectura/escritura al inicio
			listView1->Items->Clear(); //REVISAR
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
				
				this->listView1->Items->Add(listView1);
			} while (feof(fe) == 0);//EOF END OF FILE
			fclose(fe);
		}

#pragma endregion
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
private: System::Void pendiente_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_mostrar_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
	  
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	/*machupichu::info_salida^ salida = gcnew machupichu::info_salida();
	salida->Show();*/
}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	machupichu::info_salida^ salida = gcnew machupichu::info_salida();
	salida->Show();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	machupichu::reparado^ rep = gcnew machupichu::reparado();
	rep->Show();
}
private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
